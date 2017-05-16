#include "myfram.h"
#include "ui_myfram.h"

MyFram::MyFram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyFram)
{
    ui->setupUi(this);
}

MyFram::~MyFram()
{
    delete ui;
}
