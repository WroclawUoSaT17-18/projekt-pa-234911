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

void Szymzilla::on_lineEdit_textChanged(const QString &arg1)
{

}

void Szymzilla::on_pushButton_clicked()
{
    ui->webView->back();
}

void Szymzilla::on_pushButton_2_clicked()
{
    ui->webView->foward();
}

void Szymzilla::on_pushButton_3_clicked()
{
    ui->webView->reload();
}

void Szymzilla::on_pushButton_4_clicked()
{
    close();
}

void Szymzilla::on_toolButton_clicked()
{

}
