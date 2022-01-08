#include "computer.h"
#include "ui_computer.h"
#include "widgetcomputer.hpp"
#include <QThread>

Computer::Computer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Computer)
{
    ui->setupUi(this);
}

Computer::~Computer()
{
    delete ui;
}

void Computer::on_Script_textChanged()
{
    QString text = ui->Script->toPlainText();
}

