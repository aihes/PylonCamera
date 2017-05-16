#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    setFixedSize(this->width(),this->height());
    QPixmap zhifu(":/images/zhifubao.jpg");

    ui->zhifubao->setPixmap(zhifu.scaled(ui->zhifubao->width(),ui->zhifubao->height()));
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
