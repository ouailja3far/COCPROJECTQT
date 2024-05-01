#ifndef ENEMY_H
#define ENEMY_H
#include "unit.h"
class Enemy : public Unit
{
public:
    Enemy();
    Enemy(int x, int y, int hp);
public slots:
    void createEnemy();
};

#endif // ENEMY_H
