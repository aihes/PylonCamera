#include "settingdialog.h"
#include "ui_settingdialog.h"

SettingDialog::SettingDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingDialog)
{
    ui->setupUi(this);
    setWindowTitle("软件设置");
    setFixedSize(this->width(),this->height());
    connect(ui->selectDir,SIGNAL(clicked()),this,SLOT(setDir()));

}

void SettingDialog::setSettings(Settings *settings){
    SettingDialog::saveSettings = settings;
//    ui->cameraWidth->setText(settings->width.c_str());
//    ui->cameraHeight->setText(settings->height.c_str());
    ui->exposureTime->setText(settings->exposureTime.c_str());
    ui->fps->setText(settings->acquisitionFrameRate.c_str());
    ui->filePrefix->setText(settings->FilePrefix);
    ui->filePath->setText(settings->FilePath);
    ui->image2save->setText(QString("%1").arg(settings->image2save));


}

SettingDialog::~SettingDialog()
{
    delete ui;
}



Settings *SettingDialog::getSaveSettings() const{
    return SettingDialog::saveSettings;
}


void SettingDialog::setDir(){
    QString dir = QFileDialog::getExistingDirectory(this, tr("打开目录"),
                                                 QDir::homePath(),
                                                 QFileDialog::ShowDirsOnly
                                                 | QFileDialog::DontResolveSymlinks);

    ui->filePath->setText(dir);
}

void SettingDialog::on_buttonBox_accepted()
{
    qDebug() << "Accepted";
    saveSettings->FilePrefix = ui->filePrefix->text();
    saveSettings->acquisitionFrameRate = ui->fps->text().toUtf8().constData();
    saveSettings->exposureTime = ui->exposureTime->text().toUtf8().constData();
    saveSettings->FilePath = ui->filePath->text();
    saveSettings->image2save = ui->image2save->text().toInt();


    qDebug()  <<   ui->resolution->currentIndex();

    gcstring width;
    gcstring height;
    if( ui->resolution->currentIndex() == 0){
        width = "658";
        height = "492";
    }else if(ui->resolution->currentIndex() == 1){
        width = "600";
        height = "400";
    }else{
        width = "300";
        height = "200";
    }
    if(!ui->cameraWidth->text().isEmpty()){
        width = ui->cameraWidth->text().toUtf8().constData();
    }

    if(!ui->cameraHeight->text().isEmpty()){
        height = ui->cameraHeight->text().toUtf8().constData();
    }

    saveSettings->width = width;
    saveSettings->height = height;

    if(ui->imageFormat->currentIndex() == 0){
        saveSettings->format = Pylon::ImageFileFormat_Png;
    }else if(ui->imageFormat->currentIndex() == 1){
        saveSettings->format = Pylon::ImageFileFormat_Tiff;
    }


    if(!ui->customAttr->text().isEmpty() && !ui->customValue->text().isEmpty()){
        saveSettings->myattr = ui->customAttr->text();
        saveSettings->myvalue = ui->customValue->text();
    }


    saveSettings->type =  ui->customType->currentIndex();

}

