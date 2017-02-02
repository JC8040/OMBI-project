#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QDebug>

/*
 *Function name: MainWindow
 *Description: constructor
 *Parameters:
 *            *parent: the parent widget
 *Return: null
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

}

void MainWindow::loadData()
{
    QStringList strList;

    ui->setupUi(this);
    this->standardItemModel = new QStandardItemModel(this);
//    stub = new Stub();
//    cities = stub->getCities();

    for(int i = 0; i < 20; i ++) {
        if (cities[i].getCityName().length() > 0) {
            strList.append(cities[i].getCityName());
        }

    }

    int nCount = strList.size();

    for(int i = 0; i < nCount; i++)
    {
        QString string = static_cast<QString>(strList.at(i));
        QStandardItem *item = new QStandardItem(string);
        standardItemModel->appendRow(item);
    }

    ui->listView->setModel(standardItemModel);

    connect(ui->addButton, SIGNAL(released()), this, SLOT(handleButton()));
    connect(ui->deleteButton, SIGNAL(released()), this, SLOT(deleteButton()));

    if (type == 2)
    {
        initializeBarChar(ui->widget);
        setupBarChartDemo(ui->widget);
    }
    else if(type == 3)
    {
        initializeLineChar(ui->widget);
        setupLineChartDemo(ui->widget);
    }
}

/*
 *Function name: ~MainWindow
 *Description: destructor
 *Parameters: null
 *Return: null
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/*
 *Function name: initializeBarChar
 *Description: initialize the bar chart widget
 *Parameters:
 *            *customPlot: the plot of the bar chart
 *Return: null
 */
void MainWindow::initializeBarChar(QCustomPlot *customPlot)
{
    QString demoName = "Bar Chart Demo";
    // create empty bar chart objects:
    year2009 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    year2010 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    year2011 = new QCPBars(customPlot->xAxis, customPlot->yAxis);
    customPlot->addPlottable(year2009);
    customPlot->addPlottable(year2010);
    customPlot->addPlottable(year2011);
    // set names and colors:
    QPen pen;
    pen.setWidthF(1.2);
    year2011->setName("2011");
    pen.setColor(QColor(255, 131, 0));
    year2011->setPen(pen);
    year2011->setBrush(QColor(255, 131, 0, 50));
    year2010->setName("2010");
    pen.setColor(QColor(1, 92, 191));
    year2010->setPen(pen);
    year2010->setBrush(QColor(1, 92, 191, 50));
    year2009->setName("2009");
    pen.setColor(QColor(150, 222, 0));
    year2009->setPen(pen);
    year2009->setBrush(QColor(150, 222, 0, 70));
    // stack bars ontop of each other:
    year2010->moveAbove(year2011);
    year2009->moveAbove(year2010);

    customPlot->xAxis->setAutoTicks(false);
    customPlot->xAxis->setAutoTickLabels(false);
    customPlot->xAxis->setTickLabelRotation(60);
    customPlot->xAxis->setSubTickCount(0);
    customPlot->xAxis->setTickLength(0, 4);
    customPlot->xAxis->grid()->setVisible(true);
    customPlot->xAxis->setRange(0, 11);

    customPlot->yAxis->setRange(0, this->getMaxData() * 3);
    customPlot->yAxis->setPadding(5); // a bit more space to the left border
    customPlot->yAxis->setLabel("Number of Residential Structural Fires with \n Losses per 1,000 Households (Urban)");
    customPlot->yAxis->grid()->setSubGridVisible(true);
    QPen gridPen;
    gridPen.setStyle(Qt::SolidLine);
    gridPen.setColor(QColor(0, 0, 0, 25));
    customPlot->yAxis->grid()->setPen(gridPen);
    gridPen.setStyle(Qt::DotLine);
    customPlot->yAxis->grid()->setSubGridPen(gridPen);

    // setup legend:
    customPlot->legend->setVisible(true);
    customPlot->axisRect()->insetLayout()->setInsetAlignment(0, Qt::AlignTop|Qt::AlignHCenter);
    customPlot->legend->setBrush(QColor(255, 255, 255, 200));
    QPen legendPen;
    legendPen.setColor(QColor(130, 130, 130, 200));
    customPlot->legend->setBorderPen(legendPen);
    QFont legendFont = font();
    legendFont.setPointSize(10);
    customPlot->legend->setFont(legendFont);
    customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
}

/*
 *Function name: initializeLineChar
 *Description: initialize the line chart widget
 *Parameters:
 *            *customPlot: the plot of the line chart
 *Return: null
 */
void MainWindow::initializeLineChar(QCustomPlot *customPlot)
{
  QString demoName = "Scatter Style Demo";
  customPlot->legend->setVisible(true);
  customPlot->legend->setFont(QFont("Helvetica", 9));
  customPlot->legend->setRowSpacing(-3);

  QPen pen;
  // add graphs with different scatter styles:
  for (int i=0; i<20; ++i)
  {
    if(cities[i].getCityName()=="")
		break;
    customPlot->addGraph();
	//set color
	pen.setColor(QColor(sin(i*0.1)*100+100, sin(i*0.6+0.7)*100+100, sin(i*0.3+0.6)*100+100));

	// generate data:
    QVector<double> x(3), y(3);
    for (int k=0; k<3; ++k)
    {
      x[k] = 2009+k;
    }
    y[0]=cities[i].getNine();
	y[1]=cities[i].getTen();
    y[2]=cities[i].getEleven();
	
    customPlot->graph()->setData(x, y);
    customPlot->graph()->rescaleAxes(true);
    customPlot->graph()->setPen(pen);
	 customPlot->graph()->setName(cities[i].getCityName());
  }
  // set blank axis lines:
  customPlot->rescaleAxes();
  customPlot->xAxis->setLabel("Year");
  customPlot->yAxis->setLabel("Property Loss per 1000 Households");
  /*
  QVector<double> piTicks;
  QVector<QString> piLabels;
  piTicks <<2009<<2010<<2011;
  piLabels <<"2009"<<"2010"<<"2011";
  customPlot->xAxis->setAutoTicks(false);
  customPlot->xAxis->setAutoTickLabels(false);
  customPlot->xAxis->setTickVector(piTicks);
  customPlot->xAxis->setTickVectorLabels(piLabels);
   */
  customPlot->xAxis->setRange(2009, 2011);
    // customPlot->yAxis->setRange(0, 1);
  // make top right axes clones of bottom left axes:
  //customPlot->axisRect()->setupFullAxesBox();
  customPlot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    
}

/*
 *Function name: getIndexLabel
 *Description: get the index of one item (its name is 'cityName') of labels vector
 *Parameters:
 *            cityName: the name of one city
 *Return: int (the index)
 */
int MainWindow::getIndexLabel(QString cityName)
{
    int index = 0;

    if(labels.size() == 0)
        return -1;

    for(int i = 0; i < labels.size(); i ++)
    {
        if(QString::compare(labels.at(i), cityName) == 0)
        {
            break;
        }

        index ++;
    }

    if(index >= labels.size())
        return -1;
    else
        return index;
}

/*
 *Function name: setupBarChartDemo
 *Description: set the bar chart data
 *Parameters:
 *            *customPlot: the bar chart widget
 *Return: null
 */
void MainWindow::setupBarChartDemo(QCustomPlot *customPlot)
{
    customPlot->xAxis->setTickVector(ticks);
    customPlot->xAxis->setTickVectorLabels(labels);

    // Add data:
    year2011->setData(ticks, year2011Data);
    year2010->setData(ticks, year2010Data);
    year2009->setData(ticks, year2009Data);
}


/*
 *Function name: setupBarChartDemo
 *Description: set the line chart data
 *Parameters:
 *            *customPlot: the line chart widget
 *Return: null
 */
void MainWindow::setupLineChartDemo(QCustomPlot *customPlot)
{
    customPlot->xAxis->setTickVector(ticks);
    customPlot->xAxis->setTickVectorLabels(labels);

    // Add data:


}


/*
 *Function name: handleButton
 *Description: when the 'Add' button is clicked, this method will be called
 *Parameters: null
 *Return: null
 */
void MainWindow::handleButton()
{
    ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10;
    assembleData();
    ui->widget->xAxis->setTickVector(ticks);
    ui->widget->xAxis->setTickVectorLabels(labels);

    // Add data:
    if(type==2)
    {
    year2011->setData(ticks, year2011Data);
    year2010->setData(ticks, year2010Data);
    year2009->setData(ticks, year2009Data);
    }
	//line char data
	//set y values of different cities //tbc
	if(type==3)
	{

		}

    ui->widget->replot();
}

void MainWindow::deleteButton() {
    ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10;
    deleteData();
    ui->widget->xAxis->setTickVector(ticks);
    ui->widget->xAxis->setTickVectorLabels(labels);

    // Add data:
    if(type==2)
    {
	    year2011->setData(ticks, year2011Data);
    	year2010->setData(ticks, year2010Data);
	    year2009->setData(ticks, year2009Data);
    }
	//line char data
	
    ui->widget->replot();
}

/*
 *Function name: selectedItem
 *Description: get the index of selected item in ListView
 *Parameters: null
 *Return: null
 */
int MainWindow::selectedItem()
{
    QModelIndexList selected = ui->listView->selectionModel()->selectedIndexes();
	//should check the validity of the return value 
    return selected.at(0).row();
}

/*
 *Function name: assembleData
 *Description: set the data for displayting of bar chart widget
 *Parameters: null
 *Return: null
 */
void MainWindow::assembleData()
{
    int index = selectedItem();
    //QString cityName = cities.at(index).getCityName();
    //double *data = cities.at(index).getData();

    QString cityName = cities[index].getCityName();


    if(getIndexLabel(cityName) == -1)
    {
        labels.push_back(cityName);

        if(ui->year2009->isChecked())
            year2009Data.push_back(cities[index].getNine());
        else
            year2009Data.push_back(0);

        if(ui->year2010->isChecked())
            year2010Data.push_back(cities[index].getTen());
        else
            year2010Data.push_back(0);

        if(ui->year2011->isChecked())
            year2011Data.push_back(cities[index].getEleven());
        else
            year2011Data.push_back(0);
    } else {
        if(ui->year2009->isChecked())
            year2009Data.replace(getIndexLabel(cityName), cities[index].getNine());
        else
            year2009Data.replace(getIndexLabel(cityName), 0);

        if(ui->year2010->isChecked())
            year2010Data.replace(getIndexLabel(cityName), cities[index].getTen());
        else
            year2010Data.replace(getIndexLabel(cityName), 0);

        if(ui->year2011->isChecked())
            year2011Data.replace(getIndexLabel(cityName), cities[index].getEleven());
        else
            year2011Data.replace(getIndexLabel(cityName), 0);
    }
}

/*
 *Function name: deleteData
 *Description: delete the data for displayting of bar chart widget
 *Parameters: null
 *Return: null
 */
void MainWindow::deleteData() {
    int index = selectedItem();
    QString cityName = cities[index].getCityName();

    if(getIndexLabel(cityName) == -1)
    {

    } else {
        if(ui->year2009->isChecked())
            year2009Data.replace(getIndexLabel(cityName), 0);

        if(ui->year2010->isChecked())

            year2010Data.replace(getIndexLabel(cityName), 0);

        if(ui->year2011->isChecked())
            year2011Data.replace(getIndexLabel(cityName), 0);
    }

    if(year2009Data.at(getIndexLabel(cityName)) == 0 &&
       year2010Data.at(getIndexLabel(cityName)) == 0 &&
       year2011Data.at(getIndexLabel(cityName)) == 0) {

          year2009Data.remove(getIndexLabel(cityName));
          year2010Data.remove(getIndexLabel(cityName));
          year2011Data.remove(getIndexLabel(cityName));
          labels.remove(getIndexLabel(cityName));
    }
}
void MainWindow::setCities(City array[]) {
	int i(0),j(0);
	for (i=0; i<20; i ++){
		//ignore "Municipality" line
		QString cityname=array[i].getCityName();
		if(!(cityname=="Municipality"||cityname=="municipality")){
			this->cities[j] = array[i];
			j++;
		}
	}
}
void MainWindow::setGraphType(int t){
    this->type = t;
}

int MainWindow::getMaxData() {
    double max = 0;

    for (int i=0; i<20; i ++) {
        if(this->cities[i].getEight() > max) {
            max = cities[i].getEight();
        }

        if(this->cities[i].getNine() > max) {
            max = cities[i].getNine();
        }

        if(this->cities[i].getTen() > max) {
            max = cities[i].getTen();
        }

        if(this->cities[i].getEleven()> max) {
            max = cities[i].getEleven();
        }

        if(this->cities[i].getTwelve()> max) {
            max = cities[i].getTwelve();
        }
    }

    qDebug("max = %f", max);
    return max;

}
