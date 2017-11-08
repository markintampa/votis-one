#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QGraphicsScene *scene = new QGraphicsScene( ui->graphicsView );
    scene->setSceneRect( ui->graphicsView->rect() );
    ui->graphicsView->setScene( scene );
    ui->graphicsView->setFixedSize( 400, 280 );
    QPixmap pix("/Users/markmniece/Projects/Qt/gui/res/images/colorbars.gif");
    QPixmap resizedPix = pix.scaled(QSize(400,280), Qt::KeepAspectRatio);
    scene->addPixmap(resizedPix);
    ui->graphicsView->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
