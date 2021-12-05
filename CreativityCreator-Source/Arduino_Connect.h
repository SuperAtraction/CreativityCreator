#ifndef ARDUINO_CONNECT_H
#define ARDUINO_CONNECT_H

#include<QSerialPort>
#include <QtSerialPort/QtSerialPort>
#include<QDebug>
#include<iostream>
#include<QSerialPortInfo>
#include <arduinocreatewind.h>
#include <QWidget>

class Arduino
{
public:
    void static Send()
    {
        foreach (
                     const QSerialPortInfo &info, QSerialPortInfo::availablePorts()
                     ) {
                qDebug() << "Name        : " << info.portName();
                qDebug() << "Description : " << info.description();
                qDebug() << "Manufacturer: " << info.manufacturer();

                QSerialPort serial;
                serial.setPort(info);
                serial.setBaudRate(QSerialPort::Baud9600);
                if (serial.open(QIODevice::ReadWrite)){
                    qDebug()<<serial.isOpen();

                    while(1){
                        if(serial.waitForReadyRead(10)){
                            QByteArray ba = serial.readAll();


                            qDebug()<<ba ;
                        }
                    }
                    serial.close();
                }
            }
    }

    void static showCreate(QWidget *w)
    {
        w->setVisible(false);
        ArduinoCreateWind *win = new ArduinoCreateWind();
        win->show();
    }
};

#endif // ARDUINO_CONNECT_H
