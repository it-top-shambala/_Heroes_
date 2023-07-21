#ifndef HEROES_LIGHTARMOR_H
#define HEROES_LIGHTARMOR_H

#include "../Armor.h"
#include "../ConfigGame.h"

class LightArmor : public Armor {
public:
    LightArmor(const string &name) : Armor(name, ConfigGame::GetDefenceLightArmor()) {}
};


#endif //HEROES_LIGHTARMOR_H
