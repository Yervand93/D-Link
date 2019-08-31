#include "mypaint.h"


MyPaint::MyPaint(QWidget *parent) :
    QMainWindow(parent)
{
    pixmap_ = QPixmap(600,600);
    pixmap_.fill( 0xffffffff );
    but_clear = new QPushButton("Clear all",this);
	but_clear->setGeometry(QRect(600,540,60,60));
	connect(but_clear,SIGNAL(clicked()),this,SLOT(SignConstr()));
    QToolButton *btnLt = new QToolButton(this);
    btnLt->setText("-");
    btnLt->setGeometry(QRect(0,600,30,30));
    QToolButton *btnRt = new QToolButton(this);
    btnRt->setText("+");
    btnRt->setGeometry(QRect(150,600,30,30));
    spinBx = new QSpinBox(this);
    spinBx->setButtonSymbols(QAbstractSpinBox::NoButtons);
    spinBx->setGeometry(QRect(30,600,120,30));
    spinBx->setMaximum(20);
    connect(btnLt,SIGNAL(clicked()),this,SLOT(leftBtn()));
    connect(btnRt,SIGNAL(clicked()),this,SLOT(RightBtn()));
    pen_ = new QPen( QBrush( Qt::black ), spinBx->value());
    red = QRect(600,0,60,60);
    brush_red = QBrush(Qt::red);
    green = QRect(600,60,60,60);
    brush_green = QBrush(Qt::green);
    blue = QRect(600,120,60,60);
    brush_blue = QBrush(Qt::blue);
    yellow = QRect(600,180,60,60);
    brush_yel = QBrush(Qt::yellow);
    orange = QRect(600,240,60,60);
    brush_orange = QBrush(QColor(255,165,0));
    gray = QRect(600,300,60,60);
    brush_gray = QBrush(Qt::gray);
    magenta = QRect(600,360,60,60);
    brush_magenta = QBrush(Qt::magenta);
}

MyPaint::~MyPaint()
{
}
void MyPaint::paintEvent(QPaintEvent *event)
{
	Q_UNUSED(event);
    QPainter paint(this);
    paint.drawPixmap( QPoint(), pixmap_ );
    paint.setPen(Qt::red);
    paint.drawRect(red);
    paint.fillRect(red,brush_red);
    paint.setPen(Qt::green);
    paint.drawRect(green);
    paint.fillRect(green,brush_green);
    paint.setPen(Qt::blue);
    paint.drawRect(blue);
    paint.fillRect(blue,brush_blue);
    paint.setPen(Qt::yellow);
    paint.drawRect(yellow);
    paint.fillRect(yellow,brush_yel);
    paint.setPen(QColor(255,165,0));
    paint.drawRect(orange);
    paint.fillRect(orange,brush_orange);
    paint.setPen(Qt::gray);
    paint.drawRect(gray);
    paint.fillRect(gray,brush_gray);
    paint.setPen(Qt::magenta);
    paint.drawRect(magenta);
    paint.fillRect(magenta,brush_magenta);
}

void MyPaint::mousePressEvent(QMouseEvent *event)
{
    QPainter p(&pixmap_);
    if(event->button() == Qt::LeftButton)
    {
        if (red.contains(event->pos())) {
            *pen_ = QPen( QBrush( Qt::red ),spinBx->value() );
        }
        else if(green.contains(event->pos()))
		{
            *pen_= QPen(QBrush(Qt::green),spinBx->value());
		}
        else if(blue.contains(event->pos()))
		{
            *pen_ = QPen(QBrush(Qt::blue),spinBx->value());
		}
        else if(yellow.contains(event->pos()))
		{
            *pen_ = QPen(QBrush(Qt::yellow),spinBx->value());
		}
        else if(orange.contains(event->pos()))
        {
            *pen_ = QPen(QBrush(QColor(255,165,0)),spinBx->value());
        }
        else if(gray.contains(event->pos()))
        {
            *pen_ = QPen(QBrush(Qt::gray),spinBx->value());
        }
        else if(magenta.contains(event->pos()))
        {
            *pen_ = QPen(QBrush(Qt::magenta),spinBx->value());
        }

        p.setPen(*pen_);

        p.drawPoint(event->pos());
        p.end();

       lastPoint_ = event->pos();
       update();
    }
	else if(event->button() == Qt::RightButton)
	{
        *pen_ = QPen( QBrush( Qt::black ), spinBx->value());
	}
}



void MyPaint::mouseMoveEvent(QMouseEvent *event)
{
    if ( event->buttons() == Qt::LeftButton )
    {
         QPainter p(&pixmap_);

         p.setPen(*pen_);
         p.drawLine(lastPoint_,event->pos() );
         p.end();

         lastPoint_ = event->pos();

         update();
    }
}

void MyPaint::SignConstr()
{
    pixmap_.fill(0xffffffff);
	update();
}

void MyPaint::leftBtn()
{
   this->spinBx->setValue(this->spinBx->value()-1);
    pen_->setWidth(this->spinBx->value());
}
void MyPaint::RightBtn()
{
   this->spinBx->setValue(this->spinBx->value()+1);
   pen_->setWidth(this->spinBx->value());
}
