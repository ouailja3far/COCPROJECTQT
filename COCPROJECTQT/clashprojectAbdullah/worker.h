#ifndef WORKER_H
#define WORKER_H

#include <QPoint>
#include "unit.h"


class Worker : public Unit
{
    Q_OBJECT
public:
    Worker();

    void repair();

    Worker(int x, int y, int hp);

    QPoint m_target;

public slots:
    void createWorkers();

};

#endif
