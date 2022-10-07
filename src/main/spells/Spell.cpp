#ifndef SPELL
#define SPELL

#include <string>

using namespace std;

class Spell {
    private:
        string name;
        int damage;

    public:
        string getName() { return this->name; }
        int getDamage() { return this->damage; }

        Spell(string name, int damage) {
            this->name = name;
            this->damage = damage;
        }
};

#endif