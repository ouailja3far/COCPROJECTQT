#include "element.h"
#include <QPixmap>
Element::Element(int x, int y, int hp): health(hp){
    setPos(x, y);
}

int Element::getX()
{
    return pos().x();
}

int Element::getY()
{
    return pos().y();
}

int Element::getHealth()
{
    return health;
}

void Element::setHealth(int h)
{
    health = h;
}

int Element::getHeight()
{
    QRectF rect;
    rect = boundingRect();
    return rect.height();
}

int Element::getWidth()
{
    QRectF rect;
    rect = boundingRect();
    return rect.width();
}

void Element::setDimensions(int w, int h)
{
    QPixmap temp = pixmap();
    temp = temp.scaled(w,h);
    setPixmap(temp);
}

void Element::setSprite(QString path)
{
    QPixmap pixmap(path);
    setPixmap(pixmap);
}

bool Element::isDead()
{
    return health <= 0;
}

void Element::kill()
{
    if (isDead()) delete this;
}
