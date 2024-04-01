#include "widget.h"
#include "ui_widget.h"
#include "testwidget.h"
#include "testdialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    //ui->setupUi(this);
    //TestWidget* w=new TestWidget;
    //w->show();
    //explicit TestWidget(QWidget *parent = nullptr);
    //TestWidget* w=new TestWidget(this);
    //testdialog* dlg=new testdialog(this);
    //dlg->show();   非模态显示
    // dlg->exec();  模态显示
}

Widget::~Widget()
{
    delete ui;
}

