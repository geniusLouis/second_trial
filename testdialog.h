#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>

namespace Ui {
class testdialog;
}

class testdialog : public QDialog
{
    Q_OBJECT

public:
    explicit testdialog(QWidget *parent = nullptr);
    ~testdialog();

private:
    Ui::testdialog *ui;
};

#endif // TESTDIALOG_H
