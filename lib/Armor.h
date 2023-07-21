#ifndef HEROES_ARMOR_H
#define HEROES_ARMOR_H

#include <string>

using namespace std;

class Armor {
private:
    string _name;
    int _defence;

protected:
    Armor(const string &name, int defence) : _name(name), _defence(defence) {}

public:
    string GetName() {
        return _name;
    }
    int GetDefence() {
        return _defence;
    }

    Armor* Clone() {
        return new Armor(this->_name, this->_defence);
    }
};


#endif //HEROES_ARMOR_H
