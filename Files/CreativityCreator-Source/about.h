#ifndef ABOUT_H
#define ABOUT_H

#include <QWidget>

namespace Ui {
class About;
}

class About : public QWidget
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:
    void on_Discut_clicked();

    void on_Discut_2_clicked();

private:
    Ui::About *ui;
};

#endif // ABOUT_H