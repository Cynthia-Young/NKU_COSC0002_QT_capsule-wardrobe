#include "widget.h"
#include <QApplication>
#include"QSplashScreen"
#include"QPixmap"
#include"QDateTime"
#include"unistd.h"
#include"QMovie"
#include"QCoreApplication"
#include"QLabel"
#include <QTextCodec>
#include <QtGui>

#include <ActiveQt/QAxWidget>



int main(int argc, char *argv[])
{

    QApplication::addLibraryPath("D:\qt\plugins");
    QApplication a(argc, argv);
    QPixmap pixmap(":/C:/Users/DELL/Desktop/20161206163757_mkKnr(1).gif");
   QSplashScreen splash(pixmap);
   QLabel label(&splash);
   label.setGeometry(300,300,500,500);
   label.setScaledContents(true);
   QMovie *mv=new QMovie (":/C:/Users/DELL/Desktop/20161206163757_mkKnr(1).gif");
   label.setMovie(mv);
   mv->start();
 splash.show();
   splash.setCursor(Qt::BlankCursor);
   for(int i=0;i<10000;i+=mv->speed()){
       QCoreApplication::processEvents();
       usleep(500*static_cast<useconds_t>(mv->speed()));


   }



Widget w;
w.show();

splash.finish(&w);

    return a.exec();
}
