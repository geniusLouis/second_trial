#include "testdialog.h"
#include "ui_testdialog.h"

testdialog::testdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testdialog)
{
    ui->setupUi(this);
}

testdialog::~testdialog()
{
    delete ui;
}
