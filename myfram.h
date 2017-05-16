#ifndef MYFRAM_H
#define MYFRAM_H

#include <QWidget>

namespace Ui {
class MyFram;
}

class MyFram : public QWidget
{
    Q_OBJECT

public:
    explicit MyFram(QWidget *parent = 0);
    ~MyFram();

private:
    Ui::MyFram *ui;
};

#endif // MYFRAM_H
