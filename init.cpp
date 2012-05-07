#include <QtGui/QApplication>
#include "selection.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Selection s;
    s.setWindowTitle("dRasterBlaster (v .1)");
    s.show();
    
    return a.exec();
}
