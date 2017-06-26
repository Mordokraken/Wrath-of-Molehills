#include<game.h>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include<QImage>
#include<QBrush>
#include<QMovie>




Game::Game(QWidget *parent)
{
//create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0, 0, 800, 600);
//create the background
    setBackgroundBrush(QBrush(QImage(":/image/mole_backgraund600_800.png")));
    setScene(scene);


    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

   player = new Player();
   player->setPos(40, 400); // posicion player on scene
   player->setFlag(QGraphicsItem::ItemIsFocusable);
   player->setFocus();

   scene->addItem(player);







show();
}

