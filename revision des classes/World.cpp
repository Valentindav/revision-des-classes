#include "World.h"

void World::init() {
    StaticObject Static(1, 1);
    entity.push_back(&Static);
    BreakableObject breakable(5, 5, 1);
    entity.push_back(&breakable);
    Mob monster(10, 10, 20, 1, 0, 5);
    entity.push_back(&monster);
    Player player(20, 20, 10, 0, 1, 10);
    entity.push_back(&player);
}

void World::step() {

}
