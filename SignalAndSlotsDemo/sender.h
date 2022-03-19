#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = nullptr);
    void send(QString &message);

signals:
    void sendMessage(QString &message);
};

#endif // SENDER_H
