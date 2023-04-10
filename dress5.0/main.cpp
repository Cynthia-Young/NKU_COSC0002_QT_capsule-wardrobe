#include "widget.h"
#include <QApplication>
#include"QSplashScreen"
#include"QPixmap"
#include"QDateTime"
#include"unistd.h"
#include"QMovie"
#include"QCoreApplication"
#include"QLabel"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/../../Qpic/20161206163757_mkKnr(1).gif"));

splash->show();
splash->setCursor(Qt::BlankCursor);
a.processEvents();
QDateTime n=QDateTime::currentDateTime();
QDateTime now;
do{
    now=QDateTime::currentDateTime();
}while(n.secsTo(now)<=5);
for(int i=0;i<200;i++){
    splash->repaint();
}

Widget w;
w.show();
/*w->move(((QApplication::desktop()->width()-w.width())/2,(QApplication::desktop()->height()-w.height())/2);
splash->finish(&w);
delete splash;*/
    return a.exec();
}
