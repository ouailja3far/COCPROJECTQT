#ifndef GAME_H
#define GAME_H

#include "enemy.h"
#include "player.h"
#include "worker.h"
#include <QGraphicsView>
#include <QMouseEvent>
#include <QPointF>

class game: public QGraphicsView
{
public:
    game();
    void mousePressEvent(QMouseEvent* event);
    QGraphicsScene* scene;
private:
    QPointF target;
    Player* player;
    Worker* worker;
    Enemy* enemy;
public slots:
    void attack();

};

#endif // GAME_H
