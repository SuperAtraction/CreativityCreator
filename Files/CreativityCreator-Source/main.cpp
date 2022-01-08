#include "bootloader.h"

#include <QApplication>

#include "main.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BootLoader w;
    w.show();
    return a.exec();
}
