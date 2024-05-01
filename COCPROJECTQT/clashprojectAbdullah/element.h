#ifndef ELEMENT_H
#define ELEMENT_H
#include <QGraphicsPixmapItem>
#include <QObject>

class Element : public QObject, public QGraphicsPixmapItem
{
    int health;
public:
    Element();
    Element(int x, int y, int hp);
    //getters and setters
    int getX();
    int getY();
    int getHealth();
    void setHealth(int h);
    int getHeight();
    int getWidth();
    void setDimensions(int w, int h);
    void setSprite(QString path);
    bool isDead();
    void kill();
};

#endif // ELEMENT_H
