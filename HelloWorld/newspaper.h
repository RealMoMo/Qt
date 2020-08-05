#ifndef NEWSPAPER_H
#define NEWSPAPER_H



#include <QObject>

//继承QObject类，才具有信号槽的能力
class NewsPapaer : public QObject{
    //必须添加该宏，将为类提供信号槽机制等
    Q_OBJECT
public:
    NewsPapaer(const QString & name):
        m_name(name)
    {
    }

    void send()
    {
        //发出newPaper信号
        emit newPaper(m_name);
    }
//信号
signals:
    //信号函数
    void newPaper(const QString &name);
private:
    QString m_name;
};

#endif // NEWSPAPER_H
