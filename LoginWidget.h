#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QWidget>

namespace Ui {
class LoginWidget;
}

class LoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();
    void init_UI();


protected:
    void paintEvent(QPaintEvent *event);
private:
    Ui::LoginWidget *ui;
};

#endif // LOGINWIDGET_H
