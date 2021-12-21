#include "main_wind.h"
#include "ui_main_wind.h"
#include "createinstaller.h"
#include "ide.h"
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <Arduino_Connect.h>
#include <windows.h>
#include <QProgressDialog>
#include <QDesktopServices>
#include <QThread>
#include "about.h"

Main_Wind::Main_Wind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Main_Wind)
{
    ui->setupUi(this);
    bool up = true;
    if(up){
    system("\"wget.exe https://github.com/SuperAtraction/CreativityCreator/releases/download/Alpha0.02/VersionReleaseCreativityCreator.ver\"");
    QFile *vr = new QFile("VersionRelease.ver");
    QFile vrn("VersionReleaseCreativityCreator.ver");
    if(!vr->open(QIODevice::ReadOnly | QIODevice::Text) || !vrn.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Accès refusé", "Accès refusé ! Passage update...");
        up=false;
    }
    QTextStream vrq(&*vr);
    QTextStream vrnq(&vrn);
    if(QString(vrq.readLine()) != QString(vrnq.readLine()))
    {
        vrn.remove();
        vrn.close();
        QMessageBox::information(this, "Update", "Updating...");
        system("\"wget.exe https://github.com/SuperAtraction/CreativityCreator/raw/main/InstallCreativityCreator.exe\" ");
        system("InstallCreativityCreator.exe");
        exit(0);
    }
    vrn.remove();
    vrn.close();
    }
    //Fin processus d'update
    this->setWindowTitle("Creativity Creator");
    QDir *Local = new QDir("C:/CreativityCreator/");
    QFile *initialize = new QFile("Initial.sesi");
    QFile *Session = new QFile(Local->path()+"/Session.sess");

    if(!Local->exists())
    {
        Local->mkpath(Local->path());
        if (!Session->open(QIODevice::WriteOnly | QIODevice::Text)){exit(1);}
        QTextStream flux(&*Session);
        flux << "OneIntialize";
        Session->close();
    }else
    {
        if (!Session->open(QIODevice::ReadOnly | QIODevice::Text)){
            Session->close();
            if (!Session->open(QIODevice::WriteOnly | QIODevice::Text)){exit(1);}
            QTextStream flux(&*Session);
            flux << "OneIntialize";
            Session->close();
            if (!Session->open(QIODevice::ReadOnly | QIODevice::Text))
            {
                QMessageBox::warning(this, "Accès refusé", "Accès refusé ! Stop");
                exit(1);
            }
        }
        QFile *Open = new QFile(Local->path()+"/openned.op");
        if(Open->open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream inp(&*Open);
            QString filePath = inp.readLine();
            QString type = inp.readLine();
            QMessageBox::information(this, "Fichier ouvert", "Le fichier stocké dans "+filePath+" dont le type est de "+type+" va se rouvrir\nPatientez un instant\n(Et sourtout cliquez sur 'ok')");
            if(type==QString("ArduinoCreate"))
            {
                Arduino::showCreate(this);
            }
        }else
        {
        if (!initialize->open(QIODevice::WriteOnly | QIODevice::Text)){QMessageBox::warning(this, "Accès refusé", "Accès refusé ! Stop");
            exit(1);}
        QTextStream flux(&*initialize);
        flux << "O";


        QTextStream in(&*Session);
        QString *file = new QString(in.readLine());
        if(*file==QString("OneIntialize") || *file==QString("None"))
        {
            QMessageBox::information(this, "Session", "Aucune session ouverte.");
        }else
        {
            int nbrb = 0;
            while(!in.atEnd())
            {
                QFile *open = new QFile(Local->path()+"/openned.op");
                if(!open->open(QIODevice::WriteOnly | QIODevice::Text))
                {
                    QMessageBox::warning(this, "CreativityCreator Session Error", "Une erreur de session est survenue\nVeuillez véfirifier dans votre antivirus\nQue CreativityCreator à les autorisations d'accéder à :\n"+Local->path());
                    QMessageBox::warning(this, "Accès refusé", "Accès refusé ! Stop");
                    exit(1);
                }
                QTextStream openin(open);
                openin << *file;
                open->close();
                nbrb++;
                *file = in.readLine();
                if(nbrb>1)
                {
                    system("CreativityCreator.exe");
                }
            }
        }
        }
        initialize->close();
        QTextStream fluxi(&*initialize);
        fluxi << "N";
        initialize->close();
    }
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

void Main_Wind::on_About_clicked()
{
    About *w = new About();
    w->show();
}

