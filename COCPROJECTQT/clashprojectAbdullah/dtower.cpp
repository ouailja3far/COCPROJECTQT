#include "dtower.h"
#include <QDebug>
#include <QPoint>
#include <QPixMap>
#include <QGraphicsItem>

using namespace std;


DTower::DTower(QGraphicsItem *parent)
{

    setPixmap(QPixmap(":/canons/Canons/Giant_Cannon1.png"));

    m_type = "Cannon";
    m_damage = 10;
    m_position = QPoint(0,0);
    level = 1;

}


// void DTower::aimAndShoot(QString target)
// {
//     // qDebug() << "aiming at target:" << target << "...";
//     // qDebug() << "shooting with" << m_type << "at target:" << target << "! damage:" << m_damage;

//     // emit shooting(target, m_damage);
// }

void DTower::upgradeDamage()
{
    int increase = m_damage * 0.1;
    m_damage += increase;


    if(level < 9)
    {

        level++;
        QString newlvl = QString(":/canons/Canons/Giant_Cannon%1.png").arg(level);
        setPixmap(QPixmap(newlvl));

    }

}

