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
    void on_pushButton_clicked();

private:
    Ui::Szymzilla *ui;
};

#endif // SZYMZILLA_H
