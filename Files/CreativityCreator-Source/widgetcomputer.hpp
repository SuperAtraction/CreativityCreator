#ifndef WIDGETCOMPUTER_H
#define WIDGETCOMPUTER_H

#include <QWidget>

namespace Ui {
class WidgetComputer;
}

class WidgetComputer : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetComputer(QWidget *parent = nullptr);
    ~WidgetComputer();

public:
    Ui::WidgetComputer *ui;
};

#endif // WIDGETCOMPUTER_H
