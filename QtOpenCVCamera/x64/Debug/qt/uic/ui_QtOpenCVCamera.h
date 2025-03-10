/********************************************************************************
** Form generated from reading UI file 'QtOpenCVCamera.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTOPENCVCAMERA_H
#define UI_QTOPENCVCAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtOpenCVCameraClass
{
public:
    QWidget *centralWidget;
    QPushButton *OpenButton;
    QLabel *CameraLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtOpenCVCameraClass)
    {
        if (QtOpenCVCameraClass->objectName().isEmpty())
            QtOpenCVCameraClass->setObjectName("QtOpenCVCameraClass");
        QtOpenCVCameraClass->resize(1280, 720);
        centralWidget = new QWidget(QtOpenCVCameraClass);
        centralWidget->setObjectName("centralWidget");
        OpenButton = new QPushButton(centralWidget);
        OpenButton->setObjectName("OpenButton");
        OpenButton->setGeometry(QRect(590, 570, 121, 61));
        CameraLabel = new QLabel(centralWidget);
        CameraLabel->setObjectName("CameraLabel");
        CameraLabel->setGeometry(QRect(360, 10, 500, 500));
        QtOpenCVCameraClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtOpenCVCameraClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1280, 21));
        QtOpenCVCameraClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtOpenCVCameraClass);
        mainToolBar->setObjectName("mainToolBar");
        QtOpenCVCameraClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtOpenCVCameraClass);
        statusBar->setObjectName("statusBar");
        QtOpenCVCameraClass->setStatusBar(statusBar);

        retranslateUi(QtOpenCVCameraClass);

        QMetaObject::connectSlotsByName(QtOpenCVCameraClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtOpenCVCameraClass)
    {
        QtOpenCVCameraClass->setWindowTitle(QCoreApplication::translate("QtOpenCVCameraClass", "QtOpenCVCamera", nullptr));
        OpenButton->setText(QCoreApplication::translate("QtOpenCVCameraClass", "Open Camera", nullptr));
        CameraLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtOpenCVCameraClass: public Ui_QtOpenCVCameraClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTOPENCVCAMERA_H
