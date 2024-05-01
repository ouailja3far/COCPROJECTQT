#ifndef UNIT_H
#define UNIT_H
#include "element.h"

class Unit : public Element
{
    bool frozen;
public:
    Unit();
    Unit(int x, int y, int hp);
    void UpdatePosition();
};

#endif // UNIT_H
