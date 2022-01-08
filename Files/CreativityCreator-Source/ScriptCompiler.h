#ifndef SCRIPTCOMPILER_H
#define SCRIPTCOMPILER_H

#include <QString>
#include <QWidget>
#include "widgetcomputer.hpp"
#include "ui_widgetcomputer.h"

class compiler
{
private:
    int static compilator(QString text, int mode, int widget)
    {
        auto ui=new Ui::WidgetComputer;
        if(widget==1)
        {
            ui=new Ui::WidgetComputer;
        }
        int ok = 0;
        for(int i=0;i<text.length();i++)
        {
            if(text[i]=='p')
            {
                QChar command[50];
                command[0]=text[i];
                i++;
                command[1] = text[i];
                if(QString(command)=="pr")
                {
                    i++;
                    command[2] = text[i];
                    i++;
                    command[3] = text[i];
                    i++;
                    command[4] = text[i];
                    if(QString(command)=="print")
                    {
                        ok=1;
                        if(mode==1){
                            QString FT;
                            for(;QString(text[i])!=";";i++)
                            {
                                FT=FT+text[i];
                            }
                            ui->ComputerText->setText(ui->ComputerText->toPlainText()+FT);
                        }
                    }else
                    {
                        ok=i;
                        i=text.length();
                    }
                }
            }
        }
        return ok;
    }
public:
    int static Script_error(QString Script)
    {
        return compilator(Script, 0, NULL);
    }
    int static execute_Script(QString Script, int widget){
        return compilator(Script, 1, widget);
    }
};

#endif // SCRIPTCOMPILER_H
