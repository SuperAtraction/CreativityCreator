#include "bootloader.h"
#include "ui_bootloader.h"
#include "advenced.h"

#include <QFile>
#include <QMessageBox>
#include "main_wind.h"
#include "about.h"
#include <QTime>
#include <QThread>
#include "settings.h"
#include "download.h"
#include <QUrl>
#include "ExeController.hpp"

void BootLoader::on_LoadDate_clicked(){}


BootLoader::BootLoader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BootLoader)
{
    ui->setupUi(this);
}

BootLoader::~BootLoader()
{
    delete ui;
}

void BootLoader::on_MaintenanceTool_clicked()
{
    QFile Maintenance("maintenancetool.exe");
    if(!Maintenance.exists())
    {
        QMessageBox::critical(this, "MaintenanceTool", "L'outils de maintenace n'a pas été trouvé\nAssurez-vous d'utiliser une version officielle de CreativityCreator");
    }
}

void BootLoader::on_Stop_clicked()
{
    exit(0);
}

void BootLoader::on_LoadBtn_clicked()
{
    Main_Wind *w = new Main_Wind();
    w->show();
}

void BootLoader::on_About_clicked()
{
    About *w = new About();
    w->show();
}

void BootLoader::on_Update_clicked()
{
    EXEController::ExecuteAttendre("download.exe", "https://github.com/SuperAtraction/CreativityCreator/releases/download/v0.0.4-alpha/VersionReleaseCreativityCreator.ver");
    bool up = true;
        QFile *vr = new QFile("VersionRelease.ver");
        QFile vrn("VersionReleaseCreativityCreator.ver");
        if(!vr->open(QIODevice::ReadOnly | QIODevice::Text) && !vrn.open(QIODevice::ReadOnly | QIODevice::Text) && up)
        {
            QMessageBox::warning(this, "Accès refusé", "Accès refusé ! Passage update...");
            up=false;
        }
        QTextStream vrq(&*vr);
        QTextStream vrnq(&vrn);
        if(QString(vrq.readLine()) != QString(vrnq.readLine()) && up)
        {
            vrn.remove();
            vrn.close();
            QMessageBox::information(this, "Update", "Updating...");
            EXEController::ExecuteAttendre("download.exe", "https://github.com/SuperAtraction/CreativityCreator/raw/main/InstallCreativityCreator.exe");
            EXEController::EXEStop("InstallCreativityCreator.exe");
        }else if(up)
        {
            ui->Load_Text->setText("Pas de mises à jours trouvées");
        }
        vrn.remove();
        vrn.close();
}

void BootLoader::on_Advenced_clicked()
{
    Advenced *w = new Advenced();
    w->show();
}

void BootLoader::on_Settings_clicked()
{
    Settings *w = new Settings();
    w->show();
}
