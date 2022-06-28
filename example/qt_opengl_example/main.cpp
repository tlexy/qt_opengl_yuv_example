#include "qt_opengl_example.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_opengl_example w;
    w.init();
    w.resize(640, 480);
    w.show();
    return a.exec();
}
