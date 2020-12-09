#ifndef ARDUINO_H
#define ARDUINO_H
#include <QString>
#include <QSerialPort>

class arduino
{
private:
    QSerialPort * serial;
    static const quint16 arduino_uno_vendor_id=9025;
    static const quint16 arduino_uno_producy_id=67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;

public:
    arduino();
    int connect_arduino();
    int close_arduino();
    int write_to_arduino( QByteArray );
    QByteArray read_from_arduino();
    QSerialPort* getserial();
    QString getarduino_port_name();


};

#endif // ARDUINO_H