/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QStringLiteral("Start"));
        Start->resize(1136, 472);
        centralWidget = new QWidget(Start);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 40, 721, 31));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 280, 111, 29));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 280, 161, 29));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(800, 280, 151, 29));
        Start->setCentralWidget(centralWidget);

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QMainWindow *Start)
    {
        Start->setWindowTitle(QApplication::translate("Start", "MainWindow", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Start", "Fire Services / Number of Staffed Fire In-Service Vehicle Hours per Capita (Urban and Rural Areas)", 0)
         << QApplication::translate("Start", "Fire Services / Number of Residential Structure Fires with Losses per 1000 Households (Urban and Rural Areas)", 0)
         << QApplication::translate("Start", "Fire Services / Station Notification Response Time (Urban and Rural Areas)", 0)
         << QApplication::translate("Start", "Fire Services / Fire Operating Cost per Staffed In-Service Vehicle Hour (Urban and Rural Areas)", 0)
         << QApplication::translate("Start", "Fire Services / Number of Injuries and Fatalities as a Result of Fires (Urban and Rural Areas)", 0)
         << QApplication::translate("Start", "Library Services / Annual Number of Library Service Hours per Capita", 0)
         << QApplication::translate("Start", "Library Services / Number of Library Holdings per Capita", 0)
         << QApplication::translate("Start", "Library Services / Library Use per Person (Electronic and Non-Electronic)", 0)
         << QApplication::translate("Start", "Library Services / Average Number of Time in Year Circulating Items are Borrowed", 0)
         << QApplication::translate("Start", "Library Services / Library Operating Cost per Use", 0)
         << QApplication::translate("Start", "Parks Services / All Parkland in Municipality as a Percent of Total Area of Municipality", 0)
         << QApplication::translate("Start", "Parks Services / Amount of Parkland Available Per Resident (Natural, Maintained, Total)", 0)
         << QApplication::translate("Start", "Parks Services / Operating Cost per Hectare (Maintained and Natural Parkland Combined)", 0)
         << QApplication::translate("Start", "Police Services / Number of Total Police Staff (Officers and Civilians) per 100,000 Population", 0)
         << QApplication::translate("Start", "Police Services / Reported Number of Total (Non-Traffic) Criminal Code Incidents per 100,000 Population", 0)
         << QApplication::translate("Start", "Police Services / Total Crime Severity Index", 0)
         << QApplication::translate("Start", "Police Services / Reported Number of Violent - Criminal Code Incidents per 100,000 Population", 0)
         << QApplication::translate("Start", "Police Services / Violent Crime Severity Index", 0)
         << QApplication::translate("Start", "Police Services / Clearance Rate - Violent Crime", 0)
         << QApplication::translate("Start", "Police Services / Number of Criminal Code Incidents (Non-Traffic) per Police Officer", 0)
         << QApplication::translate("Start", "Waste Management Services / Tonnes of all Material Collected per Household (Residential)", 0)
         << QApplication::translate("Start", "Waste Management Services / Operating Costs for Garbage Collection per Tonne (Residential)", 0)
         << QApplication::translate("Start", "Waste Management Services / Tonnes of Solid Waste Disposed per Household (Residential)", 0)
         << QApplication::translate("Start", "Waste Management Services / Operating Costs for Solid Waste Disposal per Tonne (All Streams)", 0)
         << QApplication::translate("Start", "Waste Management Services / Tonnes Solid Waste Divereted per Household (Residential)", 0)
         << QApplication::translate("Start", "Waste Management Services / Operating Costs for Solid Waste Disposal per Tonne (Residential)", 0)
         << QApplication::translate("Start", "Waste Management Services / Percentage of Solid Waste Diverted (Residential)", 0)
         << QApplication::translate("Start", "Water Services / Megalitres of Treated Water per 100,000 Population", 0)
         << QApplication::translate("Start", "Water Services / Average Age of Infrastructure and Population Density of Serviced Community", 0)
         << QApplication::translate("Start", "Water Services / Number of Water Main Breaks per 100Km of Water Distribution Pipe (excluding Service Connections and Hydrant Leads)", 0)
         << QApplication::translate("Start", "Water Services / Operating Cost for the Distribution/Transmission of Drinking Water per Km of Water Distribution Pipe", 0)
         << QApplication::translate("Start", "Water Services / Operating Cost for the Treatment of Drinking Water per Megalitre of Drinking Water Treated", 0)
        );
        pushButton->setText(QApplication::translate("Start", "Create Table", 0));
        pushButton_2->setText(QApplication::translate("Start", "Create Bar Graph", 0));
        pushButton_3->setText(QApplication::translate("Start", "Create LIne Graph", 0));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
