#ifndef MAIN_WIND_H
#define MAIN_WIND_H

#include <QWidget>

namespace Ui {
class Main_Wind;
}

class Main_Wind : public QWidget
{
    Q_OBJECT

public:
    explicit Main_Wind(QWidget *parent = nullptr);
    ~Main_Wind();

private slots:

    void on_About_clicked();

    void on_Import_clicked();

    void on_Settings_clicked();

    void on_Create_clicked();

private:
    Ui::Main_Wind *ui;
};

#endif // MAIN_WIND_H
