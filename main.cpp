#include "connectionmariadb.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConnectionMariaDB w;
    w.show();
    return a.exec();
}
