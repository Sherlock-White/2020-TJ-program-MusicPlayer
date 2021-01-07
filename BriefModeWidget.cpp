#include "BriefModeWidget.h"
#include "ui_BriefModeWidget.h"
#include <QPainter>
#include <QMouseEvent>

BriefModeWidget::BriefModeWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BriefModeWidget)
{
    init_UI();
    ui->setupUi(this);
}

BriefModeWidget::~BriefModeWidget()
{
    delete ui;
}

//UI组件额外的一些处理
void BriefModeWidget::init_UI(){
    //去除标题栏
    setWindowFlags(Qt::FramelessWindowHint);
    //设置鼠标响应的flag
    m_move = false;
}

void BriefModeWidget::init_play()
{
    //播放器初始化
    /*player= new QMediaPlayer(this);
    playlist=new QMediaPlaylist;
    playlist->setPlaybackMode(QMediaPlaylist::Loop);
    player->setPlaylist(playlist);*/

}

void BriefModeWidget::paintEvent(QPaintEvent *event){
    //需要添加以下代码，才能正常在主窗口Widget中显示背景图片（https://blog.csdn.net/xiejie0226/article/details/81165379）
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
    QWidget::paintEvent(event);
}
//---------------------------------------------------------
void BriefModeWidget::mousePressEvent(QMouseEvent *event)
{
    //当鼠标左键点击时.
    if (event->button() == Qt::LeftButton)
    {
        m_move = true;
        //记录鼠标的世界坐标.
        m_startPoint = event->globalPos();
        //记录窗体的世界坐标.
        m_windowPoint = this->frameGeometry().topLeft();
    }
}
void BriefModeWidget::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        //移动中的鼠标位置相对于初始位置的相对位置.
        QPoint relativePos = event->globalPos() - m_startPoint;
        //然后移动窗体即可.
        this->move(m_windowPoint + relativePos );
    }
}
void BriefModeWidget::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        //改变移动状态.
        m_move = false;
    }
}
//--------------------------------------------------------
void BriefModeWidget::on_btnPre_clicked()
{

}

void BriefModeWidget::on_btnPlay_clicked()
{

}

void BriefModeWidget::on_btnNext_clicked()
{

}

void BriefModeWidget::on_btnLike_clicked()
{

}

void BriefModeWidget::on_btnExit_clicked()
{
    QCoreApplication::quit();
}

void BriefModeWidget::on_btnZoom_clicked()
{

}
