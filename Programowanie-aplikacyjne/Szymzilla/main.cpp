#include "szymzilla.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Szymzilla w;
    w.show();

    return a.exec();
}
