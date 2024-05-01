#include "unit.h"

Unit::Unit(int x, int y, int hp) : Element (x, y, hp){}

void Unit::UpdatePosition()
{
    setPos(getX(), getY());
};


