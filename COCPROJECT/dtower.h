#ifndef DTOWER_H
#define DTOWER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsPolygonItem>
#include <QGraphicsItem>
#include <QPoint>


class DTower : public QGraphicsPixmapItem
{
public:
    DTower(QGraphicsItem * parent = 0);

  //  void aimAndShoot(QString target);
    void upgradeDamage();

signals:
    void shooting(QString target, int damage);

private:
    QGraphicsPolygonItem * attack_area;
    QString m_type;// cannon ,archer or wizard
    int m_damage;
    QPoint m_position;
    int level;
};

#endif // DTOWER_H
