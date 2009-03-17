#ifndef ATTACKWINDOW_H
#define ATTACKWINDOW_H

#include <QtGui/QWidget>

namespace Ui
{
    class AttackWindowClass;
}

class AttackWindow : public QWidget
{
    Q_OBJECT

public:
    AttackWindow(QWidget *parent = 0);
    ~AttackWindow();

private:
    Ui::AttackWindowClass *ui;
};

#endif // ATTACKWINDOW_H
