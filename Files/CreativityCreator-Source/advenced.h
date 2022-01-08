#ifndef ADVENCED_H
#define ADVENCED_H

#include <QWidget>

namespace Ui {
class Advenced;
}

class Advenced : public QWidget
{
    Q_OBJECT

public:
    explicit Advenced(QWidget *parent = nullptr);
    ~Advenced();

private slots:
    void on_Uninstall_clicked();

    void on_Cancel_clicked();

private:
    Ui::Advenced *ui;
};

#endif // ADVENCED_H
