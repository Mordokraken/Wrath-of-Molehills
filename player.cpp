#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>


Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
setPixmap(QPixmap(":/image/new_mole_150-200.png"));

}

void Player::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_A)
    {
        if (pos().x() > 0)
        setPos(x()-10,y());

    }
    else if (event->key() == Qt::Key_D)
    {
        if (pos().x() + 150 < 800)
        setPos(x()+10,y());
    }
    // shoot with the F
    else if(event->key()== Qt::Key_L)//shotgun key
    {
        // create a bullet

        Bullet * bullet = new Bullet();
        bullet->setPos(x()+150,y()+123);
        scene()->addItem(bullet);

    }
    else if (event->key() == Qt::Key_Space) //prigok personaja
    {

        for (int i = 600; i > 500; i--)
        {
        setPos(x(),y()- 1);
        }


    }
}

void Player::spawn()
{
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);

}
