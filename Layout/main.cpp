#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>

//learn6 :布局管理器
/*
 * Qt 提供了几种布局管理器供我们选择：

QHBoxLayout：按照水平方向从左到右布局；
QVBoxLayout：按照竖直方向从上到下布局；
QGridLayout：在一个网格中进行布局，类似于 HTML 的 table；
QFormLayout：按照表格布局，每一行前面是一段文本，文本后面跟随一个组件（通常是输入框），类似 HTML 的 form；
QStackedLayout：层叠的布局，允许我们将几个组件按照 Z 轴方向堆叠，可以形成向导那种一页一页的效果。
 *
 * /
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget window;
      window.setWindowTitle("Enter your age");

      //只能输入数字的输入框
      QSpinBox *spinBox = new QSpinBox(&window);
      //拖动条
      QSlider *slider = new QSlider(Qt::Horizontal, &window);
      spinBox->setRange(0, 130);
      slider->setRange(0, 130);

      //双向绑定
      QObject::connect(slider, &QSlider::valueChanged, spinBox, &QSpinBox::setValue);
      void (QSpinBox:: *spinBoxSignal)(int) = &QSpinBox::valueChanged;
      QObject::connect(spinBox, spinBoxSignal, slider, &QSlider::setValue);


      spinBox->setValue(35);

      QHBoxLayout *layout = new QHBoxLayout;
      layout->addWidget(spinBox);
      layout->addWidget(slider);
      window.setLayout(layout);

      window.show();


    return a.exec();
}
