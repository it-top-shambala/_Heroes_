#ifndef HEROES_HEROBUILDER_H
#define HEROES_HEROBUILDER_H

#include "./heroes/Zerg.h"
#include "./heroes/Protos.h"
#include "./heroes/HeroType.h"

#include "./armors/LightArmor.h"
#include "./armors/HeavyArmor.h"
#include "./armors/ArmorType.h"

class HeroBuilder {
private:
    string _name;
    Armor* _armor;
    HeroType _type;

public:
    HeroBuilder() {}

    void SetName(string name) {
        _name = name;
    }

    void SetArmor(ArmorType type) {
        switch (type) {
            case ArmorType::Light:
                _armor = new LightArmor();
                break;
            case ArmorType::Heavy:
                _armor = new HeavyArmor();
                break;
        }
    }

    void SetType(HeroType type) {
        _type = type;
    }

    Hero* CreateHero() {
        Hero* hero;
        switch (_type) {
            case HeroType::ZergT:
                hero = new Zerg(_name);
                break;
            case HeroType::ProtosT:
                hero = new Protos(_name);
                break;
        }
        hero->SetArmor(_armor);

        return hero;
    }

};


#endif //HEROES_HEROBUILDER_H
