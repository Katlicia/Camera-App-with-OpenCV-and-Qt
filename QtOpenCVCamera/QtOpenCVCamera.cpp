#include "QtOpenCVCamera.h"
#include <qtimer.h>
#include <QMessageBox>
import ErrorModule;


QtOpenCVCamera::QtOpenCVCamera(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    cap.open(0);

    qtimer = new QTimer(this);

    CameraMode = false;

    connect(qtimer, &QTimer::timeout, this, &QtOpenCVCamera::UpdateFrame);

	connect(ui.OpenButton, &QPushButton::clicked, this, &QtOpenCVCamera::ChangeCameraMode);

}

QtOpenCVCamera::~QtOpenCVCamera()
{
    cap.release();
}

void QtOpenCVCamera::ChangeCameraMode()
{
    try
    {
        CameraMode = !CameraMode;
        OpenCamera();
    }

    catch (const ConnectionError& e)
    {
        qDebug() << "Camera connection error: " << e.what();
		QMessageBox::critical(this, "Error", e.what());
        CameraMode = false;
		ui.OpenButton->setText("Open Camera");
    }

}

void QtOpenCVCamera::OpenCamera()
{
    if (CameraMode)
    {
        if (!cap.isOpened())
        {
            cap.open(0);
            if (!cap.isOpened())
            {
                qDebug() << "Error: Could not open camera.";
                CameraMode = false;
				throw ConnectionError("Error: Could not find camera.");
            }
        }
        qtimer->start(30);
		ui.OpenButton->setText("Close Camera");
        qDebug() << "Camera started.";
    }
    else
    {
        qtimer->stop();
        cap.release();
        ui.CameraLabel->clear();
		ui.OpenButton->setText("Open Camera");
        qDebug() << "Camera stopped.";
    }
}



void QtOpenCVCamera::UpdateFrame()
{
    try
    {
        Mat frame;

        cap >> frame;

        if (!cap.isOpened() || !cap.read(frame))
        {
            throw ConnectionError("Error: Camera connection lost.");
        }

        if (!frame.empty())
        {
            QImage img(frame.data, frame.cols, frame.rows, frame.step, QImage::Format_RGB888);
            ui.CameraLabel->setPixmap(QPixmap::fromImage(img.rgbSwapped()));
        }
    }
    catch (const ConnectionError& e)
    {
        qDebug() << "Camera connection error:" << e.what();
        QMessageBox::critical(this, "Camera Error", e.what());
        CameraMode = false;
        cap.release();
		qtimer->stop();
        ui.CameraLabel->clear();
        ui.OpenButton->setText("Open Camera");
    }
}
