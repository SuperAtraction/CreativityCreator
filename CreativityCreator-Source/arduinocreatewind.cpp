#include "arduinocreatewind.h"
#include "ui_arduinocreatewind.h"
#include <QFile>
#include <QTextStream>

//Debut Code Impossible a enlever
void ArduinoCreateWind::on_ArduinoCreateWind_customContextMenuRequested(const QPoint &pos){}

//Fin Code Impossible a enlever
//Début des varialbles externe

//Fin des variables externes

ArduinoCreateWind::ArduinoCreateWind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ArduinoCreateWind)
{
    ui->setupUi(this);
    QString pather;
    ui->ArdLProgress->setValue(0);
    this->setWindowTitle("Arduino Creator - CreativityCreator");
    QFile *Open = new QFile("C:/CreativityCreator/openned.op");
    if(Open->open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&*Open);
        pather=in.readLine();
    }
}

ArduinoCreateWind::~ArduinoCreateWind()
{
    delete ui;
}
