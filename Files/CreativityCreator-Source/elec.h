#ifndef ELEC_H
#define ELEC_H

#include <QWidget>

namespace Ui {
class Elec;
}

class Elec : public QWidget
{
    Q_OBJECT

public:
    explicit Elec(QWidget *parent = nullptr);
    ~Elec();

private slots:
    void on_B1_clicked();

private:
    Ui::Elec *ui;
};

#endif // ELEC_H
