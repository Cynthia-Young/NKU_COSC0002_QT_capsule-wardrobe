#include "mybutton.h"
#include "QTime"
#include "QDebug"
#include "QMouseEvent"

MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{
 setMouseTracking(true);
 qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}
void MyButton::mouseMoveEvent(QMouseEvent *e){
    QWidget *parentW =this->parentWidget();
    int current_wid_x =this->x();
    int current_wid_y =this->y();
    int mouse_x=e->x();
    int mouse_y=e->y();

   if((mouse_x + current_wid_x >= current_wid_x)&&(mouse_x +current_wid_x <= current_wid_x+this->width())){
       if((mouse_y + current_wid_y>=current_wid_y)&&(mouse_y +current_wid_y<=current_wid_y+this->height())){
           QWidget *parentW=this->parentWidget();
           int btn_x=qrand()%(parentW->width()-this->width());
           int btn_y=qrand()%(parentW->height()-this->height());
           this->move(btn_x,btn_y);
           this->setText("点不着 嘿就是玩");
       }
   }

}
