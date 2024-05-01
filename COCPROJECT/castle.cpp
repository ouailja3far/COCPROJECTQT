#include "castle.h"

Castle::Castle(int x, int y ,int hp): Structure(x,y,hp) {
    setSprite(":/new/prefix1/resources/clancastle.png");
    setDimensions(100,100);
}
