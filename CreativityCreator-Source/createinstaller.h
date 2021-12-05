#ifndef CREATEINSTALLER_H
#define CREATEINSTALLER_H

#include <QWidget>

namespace Ui {
class CreateInstaller;
}

class CreateInstaller : public QWidget
{
    Q_OBJECT

public:
    explicit CreateInstaller(QWidget *parent = nullptr);
    ~CreateInstaller();

private slots:
    void on_TestExecutable_clicked();

private:
    Ui::CreateInstaller *ui;
};

#endif // CREATEINSTALLER_H
