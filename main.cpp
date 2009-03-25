#include <QtGui/QApplication>
#include <stdlib.h>
#include <time.h>
#include "attackwindow.h"
#include "monster.h"
#include "creature.h"

int main(int argc, char *argv[])
{
    srand (time(NULL)) ;//initialize random seed
    QApplication a(argc, argv);
    AttackWindow w;
    w.show();
    return a.exec();
}
