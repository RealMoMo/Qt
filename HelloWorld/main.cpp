#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

#include "newspaper.h"
#include "reader.h"

//learn1: hello world

//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);

//    QLabel label("Hello World");
//    label.show();

//    return a.exec();
//}


//learn2: 信号槽  (类似Android的点击等各事件)
//int main(int argc, char *argv[])
//{
//    QApplication a(argc, argv);

//    QPushButton button("Quit");
//    QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
//    button.show();

//    return a.exec();
//}



//learn3: 自定义信号槽  with NewsPapaer Reader 文件

/**
总结一下自定义信号槽需要注意的事项：

发送者和接收者都需要是QObject的子类（当然，槽函数是全局函数、Lambda 表达式等无需接收者的时候除外）；
使用 signals 标记信号函数，信号是一个函数声明，返回 void，不需要实现函数代码；
槽函数是普通的成员函数，作为成员函数，会受到 public、private、protected 的影响；
使用 emit 在恰当的位置发送信号；
使用QObject::connect()函数连接信号和槽。
 */


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NewsPapaer newspaper("Newspaper A");
    Reader reader;

    QObject::connect(&newspaper,&NewsPapaer::newPaper,&reader,&Reader::receiveNewsPaper);
    newspaper.send();

    return a.exec();
}


