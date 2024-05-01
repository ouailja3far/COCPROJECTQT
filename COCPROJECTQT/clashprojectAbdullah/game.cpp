#include "game.h"
#include "worker.h"
#include <QGraphicsScene>
#include <QGraphicsItem>
#include <QMouseEvent>
#include "bullet.h"
#include "player.h"
#include "enemy.h"
#include <QTimer>
#include "dtower.h"

game::game() {
    scene = new QGraphicsScene(this);
    setScene(scene);
    player = new Player();
    scene->addItem(player);
    bulletCounter = 0;

    QGraphicsView *view  = new QGraphicsView(scene);

    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);

    player->setPos(300, 200);

    enemy = new Enemy(20, 20 , 40);

    scene->addItem(enemy);

    QTimer * time = new QTimer();
    QObject::connect(time, SIGNAL(timeout()),player,SLOT(createEnemy()));
    time->start(2000);




    Tower = new DTower();
    scene->addItem(Tower);
    Tower->setPos(300,200);
}

void game::mousePressEvent(QMouseEvent *event){

    Bullet * bullet = new Bullet();
    bullet->setPos(Tower->pos());
    bullet->setRotation(40);
    scene->addItem(bullet);

    bulletCounter++;

    if (bulletCounter >= 5) {
        bulletCounter = 0;

        Tower->upgradeDamage();
    }

    // deadEnemyCounter++;
    // if (deadEnemyCounter >= 20) {
    //     deadEnemyCounter = 0;

    //     Tower->upgradeDamage();
    // }

}

