#include "mainwindow.h"
#include <QApplication>
#include <QString>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QString subject[8][10];
    float grade[8][10];
    int score[8][10];
    return a.exec();
}
