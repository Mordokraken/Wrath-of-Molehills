#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include "game.h"

extern Game * game;

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsPixmapItem(parent)
{
    //set random x position
    //int random_number = rand() % 700;
  //  setPos(random_number,0);
    setPos(500, 0);
    // drew the rect
    //setRect(0,0,100,100);
    setPixmap(QPixmap(":/image/enemy_2.png"));


    // make/connect a timer to move() the enemy every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);
}

void Enemy::move()
{
    // move enemy down
    setPos(x()-5,y());

    // destroy enemy when it goes out of the screen
   /* if (pos().x() > 0)
    {
        //decrease the health
       // game->health->decrease();
        scene()->removeItem(this);
        delete this;
    }
    */
}
