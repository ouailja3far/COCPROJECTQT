#ifndef WORKER_H
#define WORKER_H

#include <QGraphicsItem>
#include <QObject>
#include <QPoint>

class Worker : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    explicit Worker(QGraphicsItem *parent = nullptr);

    void move(QPoint target);
    void repair();

private:
    int m_health;
    QPoint m_position;
    QPoint m_target;
};

#endif
