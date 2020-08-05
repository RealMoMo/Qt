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
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    NewsPapaer newspaper("Newspaper A");
    Reader reader;

    QObject::connect(&newspaper,&NewsPapaer::newPaper,&reader,&Reader::receiveNewsPaper);
    newspaper.send();

    return a.exec();
}


