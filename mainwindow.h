/*Author: Yahui Chen
 *
 *Description: this class is responsible to maintain the GUI
 *
 *Date:  October 25th 2013 3:54am
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork/QNetworkReply>
#include <QListView>
#include <QStandardItem>
#include <QStandardItemModel>
#include <QModelIndex>
#include "qcustomplot.h"

#include <vector>
#include "stub.h"
#include "city.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void loadData();
    void initializeBarChar(QCustomPlot *customPlot);
    void initializeLineChar(QCustomPlot *customPlot);
    int getIndexLabel(QString cityName);
    int getIndexCities(QString cityName);
    void setupBarChartDemo(QCustomPlot *customPlot);
    void setupLineChartDemo(QCustomPlot *customPlot);
    int selectedItem();
    void assembleData();
    void deleteData();
    void setCities(City array[]);
    void setGraphType(int t);
    int getMaxData();

public slots:
    void handleButton();
    void deleteButton();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *standardItemModel;
    Stub *stub;
    QCPBars *year2009;
    QCPBars *year2010;
    QCPBars *year2011;
    //std::vector<City> cities;
    //
    City cities[20];
    double max;
    int type;
    //
    QVector<double> ticks;
    QVector<QString> labels;
    QVector<double> year2011Data;
    QVector<double> year2010Data;
    QVector<double> year2009Data;

};

#endif // MAINWINDOW_H
