#include <QAction>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QToolBar>

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    /*
     * tr()函数 是一个用于Qt国际化函数
     * 可以使用 Qt 提供的国际化工具，将tr()函数的字符串提取出来，进行国际化。
     * 由于所需进行国际化的文本应该被大多数人认识，所以，tr()函数里面一般会是英文文本。
    */
    setWindowTitle(tr("RealMo Main Window"));


    //第二参数，文本值前加&，意味着这将成为一个快捷键
    openAction = new QAction(QIcon(":/image/realmo_icon"),tr("&Open..."),this);
    //设置快捷键 Open:ctrl+o
    openAction->setShortcuts(QKeySequence::Open);
    //setStatusTip()则实现了当用户鼠标滑过这个 action 时，会在主窗口下方的状态栏显示相应的提示。
    openAction->setStatusTip(tr("Open an existing file"));

    connect(openAction,&QAction::triggered,this,&MainWindow::open);

    //菜单栏
    QMenu *menu = menuBar()->addMenu(tr("&Menu Bar Title"));
    menu->addAction(openAction);

    //工具栏
    QToolBar *toolbar = addToolBar(tr("&Toolbar File"));
    toolbar->addAction(openAction);

    //c创建状态栏，显示 tip信息
    statusBar();
}

MainWindow::~MainWindow()
{

}


void MainWindow::open()
{
    //提示框
    QMessageBox::information(this,tr("Dialog Tilte"),tr("Open"));
}
