#ifndef SPELL
#define SPELL

#include <string>

using namespace std;

class Target; // Чтобы избежать циклических зависимостей

class Spell {
    private:
        string name;

    public:
        string getName() { return this->name; }

        Spell(string name) {
            this->name = name;
        }

        virtual int getDamage(int hp, int maxHp) = 0;
        virtual int attack(Target* target) = 0;
};

#endif