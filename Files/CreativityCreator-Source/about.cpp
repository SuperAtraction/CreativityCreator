#include "about.h"
#include "ui_about.h"
#include <QDesktopServices>
#include "texteditor.h"
#include "FuturLog.h"

About::About(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    QImage picture("CreativityCreator.png");
    ui->IMG->setPixmap(QPixmap::fromImage(picture));
    this->setWindowTitle("A propos");
    QFile *vr = new QFile("VersionRelease.ver");
    if(!vr->open(QIODevice::ReadOnly | QIODevice::Text));
    QTextStream vrq(&*vr);
    ui->Version->setText(vrq.readLine());
}

About::~About()
{
    delete ui;
}

void About::on_Discut_clicked()
{
    QDesktopServices::openUrl(QUrl("https://github.com/SuperAtraction/CreativityCreator/discussions"));
}


void About::on_Discut_2_clicked()
{
    TextEditor *w = new TextEditor(NULL, F_LOG::F_Log());
    w->show();
}

