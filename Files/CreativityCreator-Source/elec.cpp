#include "elec.h"
#include "ui_elec.h"
#include <QProgressDialog>
#include "computer.h"

Elec::Elec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Elec)
{
    ui->setupUi(this);
}

Elec::~Elec()
{
    delete ui;
}

void Elec::on_B1_clicked()
{
    QProgressDialog progress("Démmarage du mode Computer OpenOS SRipt Simuler...", "Arrêter le chagement", 0, 100, this);
    Computer *w = new Computer();
    progress.setWindowModality(Qt::WindowModal);
    w->show();

}

