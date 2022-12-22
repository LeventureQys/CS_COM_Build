#include "QtController.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtController w;
    w.show();
    return a.exec();
}
