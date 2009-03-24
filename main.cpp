#include <QtGui/QApplication>
#include "attackwindow.h"
#include "monster.h"
#include "creature.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AttackWindow w;
    w.show();
    return a.exec();
}
