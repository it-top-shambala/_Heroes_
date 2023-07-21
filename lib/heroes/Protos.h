#ifndef HEROES_PROTOS_H
#define HEROES_PROTOS_H

#include "../Hero.h"
#include "../ConfigGame.h"

class Protos : public Hero {
public:
    Protos(const string &name) : Hero(name, ConfigGame::GetHealthProtos(), ConfigGame::GetDamageProtos()) {}
};


#endif //HEROES_PROTOS_H
