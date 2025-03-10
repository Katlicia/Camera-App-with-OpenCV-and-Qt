#include "QtOpenCVCamera.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtOpenCVCamera w;
    w.show();
    return a.exec();
}
