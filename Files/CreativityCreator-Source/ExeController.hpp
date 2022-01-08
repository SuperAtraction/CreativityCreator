#ifndef EXECONTROLLER_HPP
#define EXECONTROLLER_HPP
#include <QProcess>

class EXEController
{
public:
    void static ExecuteAttendre(QString program, QString arg){
        QProcess EXE;
           EXE.start(program, QStringList() << arg);
           if (!EXE.waitForStarted());
           if (!EXE.waitForFinished());
           QByteArray result = EXE.readAll();
    }
    void static EXEStop(QString program)
    {
        QProcess EXE;
           EXE.start(program, QStringList() << "");
           if (!EXE.waitForStarted())
               return;

           exit(0);
    }
};

#endif // EXECONTROLLER_HPP
