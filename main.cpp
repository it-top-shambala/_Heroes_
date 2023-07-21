#include <iostream>

#include "./lib/HeroBuilder.h"

#include <string>

using namespace std;

int main() {

    Hero* hero;
    Hero* enemy;

    HeroBuilder* heroBuilder;

    HeroType heroType;
    cout << "Type hero:" << endl;
    cout << "1 -> Zerg" << endl;
    cout << "2 -> Protos" << endl;
    char input_type_hero;
    cin >> input_type_hero;
    switch (input_type_hero) {
        case '1':
            heroType = HeroType::ZergT;
            break;
        case '2':
            heroType = HeroType::ProtosT;
            break;
    }
    heroBuilder->SetType(heroType);

    string name;
    cout << "Enter name: ";
    cin >> name;
    heroBuilder->SetName(name);

    ArmorType armorType;
    cout << "Type armor:" << endl;
    cout << "1 -> Light" << endl;
    cout << "2 -> Heavy" << endl;
    char input_type_armor;
    cin >> input_type_armor;
    switch (input_type_armor) {
        case '1':
            armorType = ArmorType::Light;
            break;
        case '2':
            armorType = ArmorType::Heavy;
            break;
    }
    heroBuilder->SetArmor(armorType);

    hero = heroBuilder->CreateHero();

    cout << hero->GetName() << ": " << endl;
    cout << "Health" << hero->GetHealth() << endl;
    cout << "Damage" << hero->GetDamage() << endl;

    return 0;
}
