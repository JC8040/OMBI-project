#include "start.h"
#include "ui_start.h"
#include "mainwindow.h"


Start::Start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(Button1()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(Button2()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(Button3()));
}

Start::~Start()
{
    delete ui;
}

void Start::Button1()
{
    int index = ui->comboBox->currentIndex();
    switch(index){ //used to get information for file path
    case 1:
       filepath1 = "Fire";
       filepath2 = "FIRE230";
       break;
    case 2:
       break;
    case 3:
        break;
    case 4:
        filepath1 = "Fire";
        filepath2 = "FIRE305";
        break;
    case 5:
        filepath1 = "Fire";
        filepath2 = "FIRE930M";
        break;
    case 6:
        filepath1 = "Libraries";
        filepath2 = "PLIB201";
        break;
    case 7:
        filepath1 = "Libraries";
        filepath2 = "PLIB205";
        break;
    case 8:

    break;
    case 9:
        filepath1 = "Libraries";
        filepath2 = "PLIB405";
        break;
    case 10:
        filepath1 = "Libraries";
        filepath2 = "PLIB305T";
        break;
    case 11:
        filepath1 = "Parks";
        filepath2 = "PRKS125";
        break;
    case 12:
        break;
    case 13:
        filepath1 = "Parks";
        filepath2 = "PRKS315";
        break;
    case 14:
        filepath1 = "Police";
        filepath2 = "PLCE215";
        break;
    case 15:
        filepath1 = "Police";
        filepath2 = "PLCE120";
        break;
    case 16:
        filepath1 = "Police";
        filepath2 = "PLCE180";
        break;
    case 17:
        filepath1 = "Police";
        filepath2 = "PLCE105";
        break;
    case 18:
        filepath1 = "Police";
        filepath2 = "PLCE170";
        break;
    case 19:
        filepath1 = "Police";
        filepath2 = "PLCE405";
        break;
    case 20:
        filepath1 = "Police";
        filepath2 = "PLCE305";
        break;
    case 21:
        filepath1 = "WasteManagement";
        filepath2 = "SWST205";
        break;
    case 22:
        filepath1 = "WasteManagement";
        filepath2 = "SWST311";
        break;
    case 23:
        filepath1 = "WasteManagement";
        filepath2 = "SWST220";
        break;
    case 24:
        filepath1 = "WasteManagement";
        filepath2 = "SWST325M";
        break;
    case 25:
        filepath1 = "WasteManagement";
        filepath2 = "SWST235";
        break;
    case 26:
        filepath1 = "WasteManagement";
        filepath2 = "SWST330M";
        break;
    case 27:
        filepath1 = "WasteManagement";
        filepath2 = "SWST920M";
        break;
    case 28:
        filepath1 = "Water";
        filepath2 = "WATR210";
        break;
    case 29:
        break;
    case 30:
        filepath1 = "Water";
        filepath2 = "WATR410M";
        break;
    case 31:
        filepath1 = "Water";
        filepath2 = "WATR305M";
        break;
    case 32:
        filepath1 = "Water";
        filepath2 = "WATR310M";
        break;
     }
    this->readFile();
}

void Start::Button2()
{
    int index = ui->comboBox->currentIndex();
    switch(index){ //used to get information for file path
    case 1:
       filepath1 = "Fire";
       filepath2 = "FIRE230";
       break;
    case 2:
       break;
    case 3:
        break;
    case 4:
        filepath1 = "Fire";
        filepath2 = "FIRE305";
        break;
    case 5:
        filepath1 = "Fire";
        filepath2 = "FIRE930M";
        break;
    case 6:
        filepath1 = "Libraries";
        filepath2 = "PLIB201";
        break;
    case 7:
        filepath1 = "Libraries";
        filepath2 = "PLIB205";
        break;
    case 8:

    break;
    case 9:
        filepath1 = "Libraries";
        filepath2 = "PLIB405";
        break;
    case 10:
        filepath1 = "Libraries";
        filepath2 = "PLIB305T";
        break;
    case 11:
        filepath1 = "Parks";
        filepath2 = "PRKS125";
        break;
    case 12:
        break;
    case 13:
        filepath1 = "Parks";
        filepath2 = "PRKS315";
        break;
    case 14:
        filepath1 = "Police";
        filepath2 = "PLCE215";
        break;
    case 15:
        filepath1 = "Police";
        filepath2 = "PLCE120";
        break;
    case 16:
        filepath1 = "Police";
        filepath2 = "PLCE180";
        break;
    case 17:
        filepath1 = "Police";
        filepath2 = "PLCE105";
        break;
    case 18:
        filepath1 = "Police";
        filepath2 = "PLCE170";
        break;
    case 19:
        filepath1 = "Police";
        filepath2 = "PLCE405";
        break;
    case 20:
        filepath1 = "Police";
        filepath2 = "PLCE305";
        break;
    case 21:
        filepath1 = "WasteManagement";
        filepath2 = "SWST205";
        break;
    case 22:
        filepath1 = "WasteManagement";
        filepath2 = "SWST311";
        break;
    case 23:
        filepath1 = "WasteManagement";
        filepath2 = "SWST220";
        break;
    case 24:
        filepath1 = "WasteManagement";
        filepath2 = "SWST325M";
        break;
    case 25:
        filepath1 = "WasteManagement";
        filepath2 = "SWST235";
        break;
    case 26:
        filepath1 = "WasteManagement";
        filepath2 = "SWST330M";
        break;
    case 27:
        filepath1 = "WasteManagement";
        filepath2 = "SWST920M";
        break;
    case 28:
        filepath1 = "Water";
        filepath2 = "WATR210";
        break;
    case 29:
        break;
    case 30:
        filepath1 = "Water";
        filepath2 = "WATR410M";
        break;
    case 31:
        filepath1 = "Water";
        filepath2 = "WATR305M";
        break;
    case 32:
        filepath1 = "Water";
        filepath2 = "WATR310M";
        break;
     }
    this->readFile();
    //City *pa=array;
    //x.setCities(pa);
    x.setCities(array);
    x.setGraphType(2);
    x.loadData();
    x.show();
}

void Start::Button3()
{
    int index = ui->comboBox->currentIndex();
    switch(index){ //used to get information for file path

    case 1:
       filepath1 = "Fire";
       filepath2 = "FIRE230";
       break;
    case 2:
       break;
    case 3:
        break;
    case 4:
        filepath1 = "Fire";
        filepath2 = "FIRE305";
        break;
    case 5:
        filepath1 = "Fire";
        filepath2 = "FIRE930M";
        break;
    case 6:
        filepath1 = "Libraries";
        filepath2 = "PLIB201";
        break;
    case 7:
        filepath1 = "Libraries";
        filepath2 = "PLIB205";
        break;
    case 8:

    break;
    case 9:
        filepath1 = "Libraries";
        filepath2 = "PLIB405";
        break;
    case 10:
        filepath1 = "Libraries";
        filepath2 = "PLIB305T";
        break;
    case 11:
        filepath1 = "Parks";
        filepath2 = "PRKS125";
        break;
    case 12:
        break;
    case 13:
        filepath1 = "Parks";
        filepath2 = "PRKS315";
        break;
    case 14:
        filepath1 = "Police";
        filepath2 = "PLCE215";
        break;
    case 15:
        filepath1 = "Police";
        filepath2 = "PLCE120";
        break;
    case 16:
        filepath1 = "Police";
        filepath2 = "PLCE180";
        break;
    case 17:
        filepath1 = "Police";
        filepath2 = "PLCE105";
        break;
    case 18:
        filepath1 = "Police";
        filepath2 = "PLCE170";
        break;
    case 19:
        filepath1 = "Police";
        filepath2 = "PLCE405";
        break;
    case 20:
        filepath1 = "Police";
        filepath2 = "PLCE305";
        break;
    case 21:
        filepath1 = "WasteManagement";
        filepath2 = "SWST205";
        break;
    case 22:
        filepath1 = "WasteManagement";
        filepath2 = "SWST311";
        break;
    case 23:
        filepath1 = "WasteManagement";
        filepath2 = "SWST220";
        break;
    case 24:
        filepath1 = "WasteManagement";
        filepath2 = "SWST325M";
        break;
    case 25:
        filepath1 = "WasteManagement";
        filepath2 = "SWST235";
        break;
    case 26:
        filepath1 = "WasteManagement";
        filepath2 = "SWST330M";
        break;
    case 27:
        filepath1 = "WasteManagement";
        filepath2 = "SWST920M";
        break;
    case 28:
        filepath1 = "Water";
        filepath2 = "WATR210";
        break;
    case 29:
        break;
    case 30:
        filepath1 = "Water";
        filepath2 = "WATR410M";
        break;
    case 31:
        filepath1 = "Water";
        filepath2 = "WATR305M";
        break;
    case 32:
        filepath1 = "Water";
        filepath2 = "WATR310M";
        break;
     }
    this->readFile();
    x.setCities(array);
    x.setGraphType(3);
    x.loadData();
    x.show();
}

City* Start::getArray()
{
    return array;
}

void Start::readFile()
{
    //temp holds the file path name until it gets passed to QFile
    //filepath1 and filepath2 are used to change the file that gets read
    //QString temp = "./"+this->filepath1+"/"+filepath2+".csv";
    QString temp = "C:\\Users\\Administrator\\Desktop\\part3 with fileReader\\part3 with fileReader\\"+this->filepath1+"\\"+filepath2+".csv";

    qDebug(temp.toLatin1());
    //file is created
    QFile file(temp);
    //i counts which variable the string should go in
    int i = 0;
    //linecounter counts what line the filereader is on and also used to place the cities into the right array index
    int linecounter = 0;
    if (file.open(QIODevice::ReadOnly))
    {
        //QString data holds the line before it gets split at the commas
        QString data;
        //while there is more of the file to be read
        while (!file.atEnd())
        {
            //data is get to the next line of the file
            data = file.readLine();

            //this splits data at the commas and places each of the split parts into the QStringList test
            QStringList test = data.split(",");
            //while test is not empty
            while (!test.empty())
            {
                //if i is 0, set the City Name as the first value in test
                //this also removes the first element of test
                //i is increased by 1
                //the qDubug was a line that I used just for testing purposes. Feel free to remove.
                if (i==0)
                {
                    array[linecounter].setCityName(test.takeFirst());
                    //qDebug (array[linecounter].getCityName().toLatin1());
                    ++i;
                }
                //if i is 1, set Eight(which counts the value in the year 2008) as the first value in test
                else if (i==1)
                {
                    array[linecounter].setEight(test.takeFirst().toDouble());
                    ++i;
                }
                //if i is 2, set Nine(value in 2009) as the first value in test
                else if (i==2)
                {
                    array[linecounter].setNine(test.takeFirst().toDouble());
                    ++i;
                }
                //if i is 3, set Ten(value in 2010) as the first value in test
                else if (i==3)
                {
                    array[linecounter].setTen(test.takeFirst().toDouble());
                    ++i;
                }
                //if i is 4, set Eleven(value in 2011) as the first value in test
                else if (i==4)
                {
                    array[linecounter].setEleven(test.takeFirst().toDouble());
                    ++i;
                }
                //if i is 5, set Twelve(value in 2012) as the first value in test
                //resets i back to 0 so the next element will go in cityname again
                //increases linecounter by 1 to make sure the next city goes into the next index of the array
                else if (i==5)
                {
                    array[linecounter].setTwelve(test.takeFirst().toDouble());
                    i = 0;
                    ++linecounter;
                }
            }
        }
        //closes the file reader
        file.close();
    }
}
