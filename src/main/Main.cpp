#include <iostream>

#include "spells/Fireball.cpp"

#include "targets/Ogre.cpp"

using namespace std;

void printDamage(Spell* spell, Target* target, int damage) {
    cout << spell->getName() << " наносит " << damage << " урона по " << target->getName() << " (" << target->getHp() << "/" << target->getMaxHp() << ")." << endl;
}

int main() {
    Spell* spell = new Fireball();
    Target* target = new Ogre();

    while (target->getHp() != 0) {
        int damage = target->hitBy(spell);
        printDamage(spell, target, damage);
    }

    return 0;
}