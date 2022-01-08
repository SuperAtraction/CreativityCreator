#ifndef BOOTLOADER_H
#define BOOTLOADER_H

#include <QWidget>
#include <QApplication>

namespace Ui {
class BootLoader;
}

class BootLoader : public QWidget
{
    Q_OBJECT

public:
    explicit BootLoader(QWidget *parent = nullptr);
    ~BootLoader();

private slots:
    void on_MaintenanceTool_clicked();

    void on_Stop_clicked();

    void on_LoadBtn_clicked();

    void on_About_clicked();

    void on_Update_clicked();

    void on_LoadDate_clicked();

    void on_Advenced_clicked();

    void on_Settings_clicked();

private:
    Ui::BootLoader *ui;
};

#endif // BOOTLOADER_H
