#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;



    /*QGraphicsView* w = new QGraphicsView();
    QGraphicsScene *scn = new QGraphicsScene( w );
    scn->setSceneRect( w->rect() );
    w->setScene( scn );
    w->setFixedSize( 400, 400 );
    QPixmap pix( "c:\\pix_jpg.jpg" );
    scn->addPixmap( pix );*/

    w.show();

    return a.exec();
}
