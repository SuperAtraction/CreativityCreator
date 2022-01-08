#ifndef COMPUTER_H
#define COMPUTER_H

#include <QWidget>

namespace Ui {
class Computer;
}

class Computer : public QWidget
{
    Q_OBJECT

public:
    explicit Computer(QWidget *parent = nullptr);
    ~Computer();

private slots:
    void on_Script_textChanged();

public:
    Ui::Computer *ui;
};

#endif // COMPUTER_H
