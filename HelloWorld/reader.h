#ifndef READER_H
#define READER_H



#include <QObject>
#include <QDebug>

class Reader : public QObject{
    Q_OBJECT
public:
    Reader(){}

    void receiveNewsPaper(const QString &name)
    {
        qDebug() << "Receives NewsPapaer:  " << name;
    }
};


#endif // READER_H
