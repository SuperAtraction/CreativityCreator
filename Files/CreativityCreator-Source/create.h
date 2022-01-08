#ifndef CREATE_H
#define CREATE_H

#include <QWidget>

namespace Ui {
class Create;
}

class Create : public QWidget
{
    Q_OBJECT

public:
    explicit Create(QWidget *parent = nullptr);
    ~Create();

private:
    Ui::Create *ui;
};

#endif // CREATE_H
