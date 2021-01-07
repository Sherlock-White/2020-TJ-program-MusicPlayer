#include "MainWidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    BriefModeWidget briefWidget;
    w.show();

    if(w.getBriefFlag()){
        briefWidget.show();
        w.hide();
    }
    else{
        briefWidget.hide();
        w.show();
    }
    return a.exec();
}
