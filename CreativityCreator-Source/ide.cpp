#include "ide.h"
#include "ui_ide.h"
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <Arduino_Connect.h>

extern int mode = 0;
extern int type = 0;
extern int nbr = 0;

IDE::IDE(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IDE)
{
    ui->setupUi(this);
    this->setWindowTitle("IDE Loader");
}

IDE::~IDE()
{
    delete ui;
}

void IDE::on_B4_clicked()
{
    if(mode==1)
    {
        if(type==0)
        {
            if(nbr==0)
            {
                QDesktopServices::openUrl(QUrl("http://arduino.cc"));
            }
        }
    }
}

void IDE::on_B1_clicked()
{
    if(mode==0)
    {
        if(type==0)
        {
            if(nbr==0)
            {
                ui->B1->setText("Arduino IDE");
                ui->B2->setText("Arduino Creator");
                ui->B3->setText("Arduino Starter");
                ui->B4->setText("Arduino.cc");
                mode=1;
            }
        }
    }
}

void IDE::on_B2_clicked()
{
    if(mode==1)
    {
        Arduino::showCreate(this);
    }
}
