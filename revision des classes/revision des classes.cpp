// revision des classes.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "BreakableObject.h"
#include "StaticObject.h"
#include "Mob.h"
#include "Player.h"

int main()
{
    StaticObject Static(1, 1);
    BreakableObject breakable(5,5,1);
    Mob monster(10, 10, 100, 1, 0, 5);
    Player player(20, 20, 100, 0, 1, 10);
    Static.GetX();
    Static.SetY(300);
    Static.GetY();
    breakable.GetMaxHealth();
    breakable.GetHealth();
    breakable.TakeDamage(1);
    breakable.GetHealth();
    monster.move(15, 15,5,1,0);
    monster.GetX();
    monster.GetY();
    player.Attack(monster, 10);
}
