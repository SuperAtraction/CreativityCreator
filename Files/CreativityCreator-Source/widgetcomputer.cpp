#include "widgetcomputer.hpp"
#include "ui_widgetcomputer.h"

WidgetComputer::WidgetComputer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetComputer)
{
    ui->setupUi(this);
}

WidgetComputer::~WidgetComputer()
{
    delete ui;
}
