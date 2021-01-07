#include "BriefModeWidget.h"
#include "ui_BriefModeWidget.h"
#include <QPainter>

BriefModeWidget::BriefModeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BriefModeWidget)
{
    setWindowFlags(Qt::FramelessWindowHint);
    ui->setupUi(this);
}

BriefModeWidget::~BriefModeWidget()
{
    delete ui;
}

void BriefModeWidget::paintEvent(QPaintEvent *event){
    //需要添加以下代码，才能正常在主窗口Widget中显示背景图片（https://blog.csdn.net/xiejie0226/article/details/81165379）
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
