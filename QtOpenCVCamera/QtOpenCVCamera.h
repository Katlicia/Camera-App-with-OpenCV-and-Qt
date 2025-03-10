#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtOpenCVCamera.h"
#include <QLabel>
#include <opencv2/opencv.hpp>

using namespace cv;

class QtOpenCVCamera : public QMainWindow
{
    Q_OBJECT

public:
    QtOpenCVCamera(QWidget *parent = nullptr);
    ~QtOpenCVCamera();

private:
    Ui::QtOpenCVCameraClass ui;
    QTimer* qtimer;
    VideoCapture cap;
    void OpenCamera();
    void UpdateFrame();
    void ChangeCameraMode();
    bool CameraMode;
};
