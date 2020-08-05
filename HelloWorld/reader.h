#ifndef READER_H
#define READER_H



#include <QObject>
#include <QDebug>
//接受NewsPaper信号

//QT5 任何成员函数、static函数、全局函数和lambda表达式均可以作为槽函数
//槽函数会受到public、private等访问控制符的影响
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
