#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app (argc, argv);
    mainWindow mainWin;
    mainWin.show();

    return app.exec();
}
