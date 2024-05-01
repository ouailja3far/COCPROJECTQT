#include "player.h"
#include <QGraphicsItem>
#include <QGraphicsRectItem>
#include <QObject>
#include <QTimer>
#include "bullet.h"
#include "game.h"
#include <QPointF>

extern game* game;

Player::Player(QGraphicsItem* parent) : QObject(){
    setRect(0,0, 200, 200);

}

void Player::shoot(double angle)
{
    Bullet* bullet = new Bullet();
    bullet->setPos(this->pos());
    bullet->setRotation(angle);
    scene()->addItem(bullet);

}

