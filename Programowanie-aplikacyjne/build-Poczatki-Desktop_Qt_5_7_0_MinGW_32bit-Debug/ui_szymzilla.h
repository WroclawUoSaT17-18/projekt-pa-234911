/********************************************************************************
** Form generated from reading UI file 'szymzilla.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SZYMZILLA_H
#define UI_SZYMZILLA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Szymzilla
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Szymzilla)
    {
        if (Szymzilla->objectName().isEmpty())
            Szymzilla->setObjectName(QStringLiteral("Szymzilla"));
        Szymzilla->resize(744, 456);
        centralWidget = new QWidget(Szymzilla);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(82, 110, 111, 28));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 150, 81, 16));
        Szymzilla->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Szymzilla);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 744, 26));
        Szymzilla->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Szymzilla);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Szymzilla->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Szymzilla);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Szymzilla->setStatusBar(statusBar);

        retranslateUi(Szymzilla);

        QMetaObject::connectSlotsByName(Szymzilla);
    } // setupUi

    void retranslateUi(QMainWindow *Szymzilla)
    {
        Szymzilla->setWindowTitle(QApplication::translate("Szymzilla", "Szymzilla", 0));
        pushButton->setText(QApplication::translate("Szymzilla", "Wci\305\233nij przycisk!", 0));
        label->setText(QApplication::translate("Szymzilla", "Co si\304\231 sta\305\202o?", 0));
    } // retranslateUi

};

namespace Ui {
    class Szymzilla: public Ui_Szymzilla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZYMZILLA_H
