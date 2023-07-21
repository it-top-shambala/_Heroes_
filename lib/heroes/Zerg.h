#ifndef HEROES_ZERG_H
#define HEROES_ZERG_H

#include "../Hero.h"
#include "../ConfigGame.h"

class Zerg : public Hero {
public:
    Zerg(const string &name) : Hero(name, ConfigGame::GetHealthZerg(), ConfigGame::GetDamageZerg()) {}
};


#endif //HEROES_ZERG_H
