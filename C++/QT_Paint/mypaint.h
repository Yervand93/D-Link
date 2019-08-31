#ifndef MYPAINT_H
#define MYPAINT_H

#include <QMainWindow>
#include <QRect>
#include <QPoint>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QBrush>
#include <QDebug>
#include <QCheckBox>
#include <QGraphicsPixmapItem>
#include <QPen>
#include <QPushButton>
#include <QSpinBox>
#include <QToolButton>

class MyPaint : public QMainWindow
{
    Q_OBJECT
public:
    explicit MyPaint(QWidget *parent = 0);
    ~MyPaint();

private:
    QPoint lastPoint_;
    QPen *pen_;
    QPixmap pixmap_;
    QRect red;
    QRect green;
    QRect blue;
    QRect yellow;
    QRect orange;
    QRect gray;
    QRect magenta;
	QPushButton *but_clear;
    QSpinBox *spinBx;
    QBrush brush_red;
    QBrush brush_green;
    QBrush brush_blue;
    QBrush brush_yel;
    QBrush brush_orange;
    QBrush brush_gray;
    QBrush brush_magenta;

protected:
    virtual void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
private slots:
	void SignConstr();
    void leftBtn();
    void RightBtn();
};

#endif // MYPAINT_H
