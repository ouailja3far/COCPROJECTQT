// #include "worker.h"
// #include "unit.h"
// #include <QDebug>
// #include <QTimer>
// #include <QGraphicsScene>
// #include "qgraphicsscene.h"
// using namespace std;

// // Worker::Worker(QObject *parent) : QObject(parent)
// // {
// //     m_health = 100;
// //     m_position = QPoint(0, 0);
// //     m_target = QPoint(-1, -1);
// // }


// Worker::Worker(int x, int y, int hp) : Unit(x, y,hp)
// {
//     setSprite(":/new/prefix1/worker.png");
//     setDimensions(100,100);
//     m_target = QPoint(-1, -1);
// }

// void Worker::createWorkers()
// {
//     int random_pos = rand() % 600;
//     Worker* worker = new Worker(random_pos, random_pos, 40);
//     scene()->addItem(worker);

// }

// void Worker::repair()
// {
//     // tmp worker repair logic
//     if (m_target != QPoint(-1, -1)) {
//         qDebug() << "repairing:" << m_target << "...";
//         qDebug() << "Repair complete!";
//     } else {
//         qDebug() << "No target to repair!";
//     }
// }
