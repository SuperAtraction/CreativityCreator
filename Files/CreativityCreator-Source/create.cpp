#include "create.h"
#include "ui_create.h"

Create::Create(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Create)
{
    ui->setupUi(this);
}

Create::~Create()
{
    delete ui;
}
