#ifndef ARDUINOCREATEWIND_H
#define ARDUINOCREATEWIND_H

#include <QWidget>

namespace Ui {
class ArduinoCreateWind;
}

class ArduinoCreateWind : public QWidget
{
    Q_OBJECT

public:
    explicit ArduinoCreateWind(QWidget *parent = nullptr);
    ~ArduinoCreateWind();

private slots:
    void on_ArduinoCreateWind_customContextMenuRequested(const QPoint &pos);

private:
    Ui::ArduinoCreateWind *ui;
};

#endif // ARDUINOCREATEWIND_H
