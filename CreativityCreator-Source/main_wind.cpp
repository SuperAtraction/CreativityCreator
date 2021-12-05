#include "main_wind.h"
#include "ui_main_wind.h"
#include "createinstaller.h"
#include "ide.h"

Main_Wind::Main_Wind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Main_Wind)
{
    ui->setupUi(this);
    this->setWindowTitle("Creativity Creator");
    delete ui;
}

Main_Wind::~Main_Wind()
{
    delete ui;
}

void Main_Wind::on_commandLinkButton_clicked()
{
    this->setVisible(false);
    CreateInstaller *w = new CreateInstaller();
    w->show();
}

void Main_Wind::on_IDE_clicked()
{
    this->setVisible(false);
    IDE *w = new IDE();
    w->show();
}

