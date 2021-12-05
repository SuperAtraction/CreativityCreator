#include "arduinocreatewind.h"
#include "ui_arduinocreatewind.h"


//Debut Code Impossible a enlever
void ArduinoCreateWind::on_ArduinoCreateWind_customContextMenuRequested(const QPoint &pos){}
//Fin Code Impossible a enlever


ArduinoCreateWind::ArduinoCreateWind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArduinoCreateWind)
{
    ui->setupUi(this);
    ui->ArdLProgress->setValue(0);
}

ArduinoCreateWind::~ArduinoCreateWind()
{
    delete ui;
}
