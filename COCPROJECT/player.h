#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QPointF>
#include <QObject>
#include <QGraphicsItem>

class Player : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    Player(QGraphicsItem* parent=0);
    void shoot(double angle);

private:
    QPointF target;
};

#endif // PLAYER_H
