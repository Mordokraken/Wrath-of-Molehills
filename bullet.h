#ifndef BULET_H
#define BULET_H



#include <QGraphicsItem>
#include <QObject>
#include <QGraphicsPixmapItem>

class Bullet: public QObject,public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bullet(QGraphicsItem * parent=0);
public slots:
    void move();
};



#endif // BULET_H
