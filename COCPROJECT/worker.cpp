#include "worker.h"
#include "game.h"
#include <QDebug>

extern game* game;


Worker::Worker(QGraphicsItem* parent) : QObject()
{
    setRect(0, 0, 25, 25);
    m_health = 100;
    m_position = QPoint(0, 0);
    m_target = QPoint(-1, -1);

}

void Worker::move(QPoint target)
{
    qDebug() << "moving worker to repair:" << target << "...";
    m_target = target;
}

void Worker::repair()
{
    // tmp worker repair logic
    if (m_target != QPoint(-1, -1)) {
        qDebug() << "repairing:" << m_target << "...";
        qDebug() << "Repair complete!";
    } else {
        qDebug() << "No target to repair!";
    }
}
