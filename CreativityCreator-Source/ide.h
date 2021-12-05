#ifndef IDE_H
#define IDE_H

#include <QWidget>

namespace Ui {
class IDE;
}

class IDE : public QWidget
{
    Q_OBJECT

public:
    explicit IDE(QWidget *parent = nullptr);
    ~IDE();

private slots:
    void on_B4_clicked();

    void on_B1_clicked();

    void on_B2_clicked();

private:
    Ui::IDE *ui;
};

#endif // IDE_H
