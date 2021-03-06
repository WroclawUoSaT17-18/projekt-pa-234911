#ifndef SZYMZILLA_H
#define SZYMZILLA_H

#include <QMainWindow>

namespace Ui {
class Szymzilla;
}

class Szymzilla : public QMainWindow
{
    Q_OBJECT

public:
    explicit Szymzilla(QWidget *parent = 0);
    ~Szymzilla();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_toolButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Szymzilla *ui;
};

#endif // SZYMZILLA_H
