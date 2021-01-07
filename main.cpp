#include "MainWidget.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWidget w;
    w.show();
    BriefModeWidget b;
    if(w.getBriefFlag()){
        qDebug()<<w.getBriefFlag();
        w.hide();
        b.show();
    }
    else{
        qDebug()<<w.getBriefFlag();
        w.show();
        b.hide();
    }
    return a.exec();
}
