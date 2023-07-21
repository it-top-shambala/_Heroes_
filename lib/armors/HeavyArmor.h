#ifndef HEROES_HEAVYARMOR_H
#define HEROES_HEAVYARMOR_H

#include "../Armor.h"
#include "../ConfigGame.h"

class HeavyArmor : public Armor {
public:
    HeavyArmor(const string &name) : Armor(name, ConfigGame::GetDefenceHeavyArmor()) {}
};


#endif //HEROES_HEAVYARMOR_H
