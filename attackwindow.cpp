#include "attackwindow.h"
#include "ui_attackwindow.h"

AttackWindow::AttackWindow(QWidget *parent)
    : QWidget(parent), ui(new Ui::AttackWindowClass)
{
    ui->setupUi(this);
}

AttackWindow::~AttackWindow()
{
    delete ui;
}
