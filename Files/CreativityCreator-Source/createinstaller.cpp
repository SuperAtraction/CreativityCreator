#include "createinstaller.h"
#include "ui_createinstaller.h"
#include <QDesktopServices>
#include <QMessageBox>

CreateInstaller::CreateInstaller(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateInstaller)
{
    ui->setupUi(this);
    this->setWindowTitle("Créer un programme d'installation .inst");
}

CreateInstaller::~CreateInstaller()
{
    delete ui;
}

void CreateInstaller::on_TestExecutable_clicked()
{
    QString a = "\""+ui->Path->text()+"/"+ui->Executable->text()+"\"";
    system(a.toStdString().c_str());
}

