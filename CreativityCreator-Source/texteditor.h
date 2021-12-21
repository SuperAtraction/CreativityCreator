#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QWidget>

namespace Ui {
class TextEditor;
}

class TextEditor : public QWidget
{
    Q_OBJECT

public:
    explicit TextEditor(QWidget *parent = nullptr, QString param="");
    ~TextEditor();
    QString static param1;

private slots:
    void on_Close_clicked();

    void on_Save_clicked();

private:
    Ui::TextEditor *ui;
};

#endif // TEXTEDITOR_H
