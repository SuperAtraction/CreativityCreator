#ifndef FUTURLOG_H
#define FUTURLOG_H
#include <QString>
#include <QFile>
#include <QTextStream>

class F_LOG
{
public:
    QString static F_Log()
    {
        QString res;
        QFile f("F_Log.log");
        f.open(QIODevice::ReadOnly|QIODevice::Text);
        QTextStream Read(&f);
        res = Read.readAll();

        return res;
    }
};

#endif // FUTURLOG_H
