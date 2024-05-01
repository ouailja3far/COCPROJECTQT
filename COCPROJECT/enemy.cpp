#include "enemy.h"
#include "qgraphicsscene.h"
#include "unit.h"
#include <QTimer>

Enemy::Enemy(int x, int y, int hp) : Unit(x, y,hp) {
    setSprite(":/new/prefix1/kisspng-pac-man-computer-icons-enemy-ghost-icon-5ab0cbae0e9506.6300061515215359180597.png");
    setDimensions(100,100);
}

void Enemy::createEnemy()
{
    int random_pos = rand() % 600;
    Enemy* enemy = new Enemy(random_pos, random_pos, 40);
    scene()->addItem(enemy);
}
