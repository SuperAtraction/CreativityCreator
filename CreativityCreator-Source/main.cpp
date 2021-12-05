#include "main_wind.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Main_Wind w;
    w.show();
    return a.exec();
}
