#include <QCoreApplication>
#include "Tests.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Tests test;
    return a.exec();
}
