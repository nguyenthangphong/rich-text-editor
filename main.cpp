#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName("Nguyen Thang Phong");
    a.setOrganizationDomain("https://github.com/nguyenthangphong");
    a.setApplicationName("Rich Text Editor");
    a.setApplicationDisplayName("Rich Text Editor Application");
    a.setApplicationVersion("0.0.1");
    MainWindow w;
    w.show();
    return a.exec();
}
