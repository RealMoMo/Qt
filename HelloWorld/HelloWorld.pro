#-------------------------------------------------
#
# Project created by QtCreator 2020-08-05T10:19:17
#
#-------------------------------------------------

#添加Core 和 gui 模块
QT       += core gui

#QT 主版本号 以及添加Widgets模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

#Target 是生成的程序名字
TARGET = HelloWorld
#是生成makefile 所使用的模块
#app是编译成一个可执行程序，而lib则是编译成一个链接库（默认是动态链接库）
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

#源代码
SOURCES += \
        main.cpp \
        mainwindow.cpp

#头文件
HEADERS += \
        mainwindow.h \
    newspaper.h \
    reader.h
