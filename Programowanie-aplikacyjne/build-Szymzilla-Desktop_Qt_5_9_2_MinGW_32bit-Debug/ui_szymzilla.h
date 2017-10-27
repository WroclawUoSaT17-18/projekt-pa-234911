/********************************************************************************
** Form generated from reading UI file 'szymzilla.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Szymzilla
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolButton *toolButton;
    QProgressBar *progressBar;
    QPushButton *pushButton_4;
    QWidget *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Szymzilla)
    {
        if (Szymzilla->objectName().isEmpty())
            Szymzilla->setObjectName(QStringLiteral("Szymzilla"));
        Szymzilla->resize(1312, 642);
        Szymzilla->setCursor(QCursor(Qt::ArrowCursor));
        centralWidget = new QWidget(Szymzilla);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(210, 0, 921, 22));
        lineEdit->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 0, 93, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 0, 93, 21));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1130, 0, 93, 21));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(0, 0, 27, 21));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(0, 553, 1301, 20));
        progressBar->setMaximum(100);
        progressBar->setValue(24);
        progressBar->setTextVisible(true);
        progressBar->setInvertedAppearance(false);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1220, 0, 93, 21));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(79, 129, 351, 171));
        Szymzilla->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Szymzilla);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1312, 26));
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
        Szymzilla->setWindowTitle(QApplication::translate("Szymzilla", "Szymzilla", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("Szymzilla", "Wpisz adres strony internetowej", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Szymzilla", "Back", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Szymzilla", "Foward", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Szymzilla", "Refresh", Q_NULLPTR));
        toolButton->setText(QApplication::translate("Szymzilla", "...", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Szymzilla", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Szymzilla: public Ui_Szymzilla {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZYMZILLA_H
