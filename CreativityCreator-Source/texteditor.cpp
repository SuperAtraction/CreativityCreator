#include "texteditor.h"
#include "ui_texteditor.h"

TextEditor::TextEditor(QWidget *parent, QString param) :
    QWidget(parent),
    ui(new Ui::TextEditor)
{
    ui->setupUi(this);
    ui->Text->setText(param);
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::on_Close_clicked()
{
    this->setVisible(false);
}

void TextEditor::on_Save_clicked()
{

}

