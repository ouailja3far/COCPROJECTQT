// #include "tower.h"
// #include "game.h"
// #include <QDebug>
// #include <QPoint>
// #include <QGraphicsRectItem>

// extern game* game;

// DTower::DTower(QObject *parent) : QObject(parent)
// {
//     m_type = "Cannon";
//     m_damage = 10;
//     m_position = QPoint(0,0);
// }

// void DTower::aimAndShoot(QString target)
// {
//     qDebug() << "aiming at target:" << target << "...";
//     qDebug() << "shooting with" << m_type << "at target:" << target << "! damage:" << m_damage;

//     emit shooting(target, m_damage);
// }

// void DTower::upgradeDamage()
// {
//     m_damage += 1;
// }
