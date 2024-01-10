#include "mainwindow.h"

#include <QApplication>
#include "membermanager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MemberManager mManager;
    MainWindow w;

    w.show();
    return a.exec();
}
