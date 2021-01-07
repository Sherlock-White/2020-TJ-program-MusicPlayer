#ifndef BRIEFMODEWIDGET_H
#define BRIEFMODEWIDGET_H

#include <QWidget>
#include <QMediaPlaylist>
#include <QMediaPlayer>

namespace Ui {
class BriefModeWidget;
}

class BriefModeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BriefModeWidget(QWidget *parent = nullptr);
    ~BriefModeWidget()override;

protected:
    void paintEvent(QPaintEvent *event)override;

    /*重写Widget的一些方法*/
    //实现窗口可拖动
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    friend class MainWidget;

    Ui::BriefModeWidget *ui;

    //当前播放器
    QMediaPlayer *player;
    //当前播放列表
    QMediaPlaylist *playlist;

    //鼠标拖拽相关变量
    bool m_move;
    QPoint m_startPoint;
    QPoint m_windowPoint;

    //UI组件额外的一些处理
    void init_UI();
    //设置播放的初始化
    void init_play();

private slots:
    void on_btnPre_clicked();
    void on_btnPlay_clicked();
    void on_btnNext_clicked();
    void on_btnLike_clicked();
    void on_btnExit_clicked();
    void on_btnZoom_clicked();


};

#endif // BRIEFMODEWIDGET_H
