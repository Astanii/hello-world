#include "qtapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtApp w;
    w.show();

    return a.exec();
}
