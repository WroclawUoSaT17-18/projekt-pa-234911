#include "szymzilla.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton *button = new QPushButton("Zamknij program!");
    QObject::connect(button, SIGNAL(clicked()), &a, SLOT(quit()));
    button->show();



    Szymzilla w;
    w.show();

    return a.exec();
}
