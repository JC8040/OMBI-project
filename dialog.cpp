#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(Button1()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(Button2()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(Button3()));
}

Dialog::~Dialog()
{
    delete ui;
}
