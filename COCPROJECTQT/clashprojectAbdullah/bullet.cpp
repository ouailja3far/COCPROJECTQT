#include "bullet.h"
#include <QGraphicsItem>
#include <QTimer>
#include <qmath.h>
#include "game.h"

extern game* game;

Bullet::Bullet(QGraphicsItem* parent) {
    setPixmap(QPixmap(":/new/prefix1/pngwing.com.png").scaled(50,50));

    QTimer* bullet_time = new QTimer(this);
    connect(bullet_time,SIGNAL(timeout()),this,SLOT(move()));
    bullet_time->start(50);
}



void Bullet::move(){
    int speed = 20.0;

    if(pos().y()>250 && pos().x()>375){
        double dx = qCos(qDegreesToRadians(rotation())) * speed;
        double dy = qSin(qDegreesToRadians(rotation())) * speed;

        setPos(pos().x() + dx, pos().y() + dy);
    }
    else if(pos().y()<250 && pos().x()<400){
       double dx = -qCos(qDegreesToRadians(rotation())) * speed;
       double dy = -qSin(qDegreesToRadians(rotation())) * speed;

        setPos(pos().x() + dx, pos().y() + dy);
    }
    else if(pos().y()<250 && pos().x()>400){
        double dx = qCos(qDegreesToRadians(rotation())) * speed;
        double dy = -qSin(qDegreesToRadians(rotation())) * speed;

        setPos(pos().x() + dx, pos().y() + dy);
    }
    else if(pos().y()>250 && pos().x()<400){
        double dx = -qCos(qDegreesToRadians(rotation())) * speed;
        double dy = qSin(qDegreesToRadians(rotation())) * speed;

        setPos(pos().x() + dx, pos().y() + dy);
    }
    else if(pos().x() == 350 && pos().y() == 200){
        double dx = qCos(90) * speed;
        double dy = qSin(90) * speed;;

        setPos(pos().x() + dx, pos().y() + dy);
    }
    if (pos().y() + pixmap().height() < 0 || pos().y() > scene()->height() ||
        pos().x() + pixmap().width() < 0 || pos().x() > scene()->width()) {
        scene()->removeItem(this);
        delete this;
    }

    QList<QGraphicsItem*>colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; ++i){
        if(typeid(*(colliding_items[i])) == typeid(Enemy)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }
}
