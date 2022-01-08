#include "advenced.h"
#include "ui_advenced.h"

Advenced::Advenced(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Advenced)
{
    ui->setupUi(this);
}

Advenced::~Advenced()
{
    delete ui;
}

void Advenced::on_Uninstall_clicked()
{
    system("maintenancetool.exe purge");

}

void Advenced::on_Cancel_clicked()
{
    this->setEnabled(false);
    this->setVisible(false);
}

