#include "szymzilla.h"
#include "ui_szymzilla.h"

Szymzilla::Szymzilla(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Szymzilla)
{
    ui->setupUi(this);
}

Szymzilla::~Szymzilla()
{
    delete ui;
}

void Szymzilla::on_pushButton_clicked()
{
    ui->label->setText("Łał zmienił się tekst!");
}
