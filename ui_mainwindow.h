/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *year2009;
    QCheckBox *year2010;
    QCheckBox *year2011;
    QPushButton *addButton;
    QListView *listView;
    QCustomPlot *widget;
    QPushButton *deleteButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(831, 569);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        year2009 = new QCheckBox(centralWidget);
        year2009->setObjectName(QStringLiteral("year2009"));
        year2009->setGeometry(QRect(350, 10, 81, 31));
        year2010 = new QCheckBox(centralWidget);
        year2010->setObjectName(QStringLiteral("year2010"));
        year2010->setGeometry(QRect(350, 40, 81, 31));
        year2011 = new QCheckBox(centralWidget);
        year2011->setObjectName(QStringLiteral("year2011"));
        year2011->setGeometry(QRect(350, 70, 81, 20));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(610, 10, 151, 51));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(10, 10, 341, 91));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 110, 551, 421));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(610, 70, 151, 51));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        year2009->setText(QApplication::translate("MainWindow", "2009", 0));
        year2010->setText(QApplication::translate("MainWindow", "2010", 0));
        year2011->setText(QApplication::translate("MainWindow", "2011", 0));
        addButton->setText(QApplication::translate("MainWindow", "Add", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
