#ifndef BRIEFMODEWIDGET_H
#define BRIEFMODEWIDGET_H

#include <QWidget>

namespace Ui {
class BriefModeWidget;
}

class BriefModeWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BriefModeWidget(QWidget *parent = nullptr);
    ~BriefModeWidget();

protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::BriefModeWidget *ui;
};

#endif // BRIEFMODEWIDGET_H
