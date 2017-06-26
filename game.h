#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QGraphicsView>
#include <QWidget>
#include <QMovie>
#include <QGraphicsScene>
#include <player.h>




class Game: public QGraphicsView
{
public:

    Game(QWidget * parent=0);

    QGraphicsScene * scene;
    Player *player;

};
