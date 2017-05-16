#ifndef SETTINGDIALOG_H
#define SETTINGDIALOG_H

#include <QDialog>
#include <QtWidgets>
#include "settings.h"

namespace Ui {
class SettingDialog;
}

class SettingDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingDialog(QWidget *parent = 0);
    ~SettingDialog();
    Settings * getSaveSettings() const;
    void setSettings(Settings *settings);

private:
    Ui::SettingDialog *ui;
    Settings *saveSettings = new Settings();

private slots:
    void on_buttonBox_accepted();
    void setDir();


};

#endif // SETTINGDIALOG_H
