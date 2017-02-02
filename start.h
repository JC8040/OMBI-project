#ifndef START_H
#define START_H

#include <QMainWindow>
#include "mainwindow.h"
#include "city.h"

namespace Ui {
class Start;
}

class Start : public QMainWindow
{
    Q_OBJECT
    MainWindow x;
    //City array[15];
    
public:
    explicit Start(QWidget *parent = 0);
    
    ~Start();

public slots:
    void Button1 ();
    void Button2 ();
    void Button3 ();
    City* getArray();


private:
    Ui::Start *ui;
    //QString filepath1 = "Libraries";
    //QString filepath2 = "PLIB001";
	QString filepath1;
    QString filepath2;
	City array[20]; 

    void readFile();
};

#endif // START_H
