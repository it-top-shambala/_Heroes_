#ifndef HEROES_CONFIGGAME_H
#define HEROES_CONFIGGAME_H


class ConfigGame {
private:
    static int _defenceLightArmor;
    static int _defenceHeavyArmor;
    static int _healthZerg;
    static int _damageZerg;
    static int _healthProtos;
    static int _damageProtos;

public:
    static void Init() {
        _defenceLightArmor = 5;
        _defenceHeavyArmor = 10;
        _healthZerg = 100;
        _damageZerg = 50;
        _healthProtos = 150;
        _damageProtos = 75;
    }

    static int GetDefenceLightArmor() {
        return _defenceLightArmor;
    }
    static int GetDefenceHeavyArmor() {
        return _defenceHeavyArmor;
    }
    static int GetHealthZerg() {
        return _healthZerg;
    }
    static int GetDamageZerg() {
        return _damageZerg;
    }
    static int GetHealthProtos() {
        return _healthProtos;
    }
    static int GetDamageProtos() {
        return _damageProtos;
    }
};

int ConfigGame::_defenceLightArmor = 0;
int ConfigGame::_defenceHeavyArmor = 0;
int ConfigGame::_healthZerg = 0;
int ConfigGame::_damageZerg = 0;
int ConfigGame::_healthProtos = 0;
int ConfigGame::_damageProtos = 0;

#endif //HEROES_CONFIGGAME_H
