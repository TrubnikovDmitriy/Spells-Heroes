#include <iostream>
#include <list>

#include "spells/Fireball.cpp"
#include "spells/LifeDrain.cpp"
#include "spells/PoisonCloud.cpp"

#include "targets/Target.cpp"
#include "targets/ArmorKnight.cpp"
#include "targets/Ogre.cpp"
#include "targets/StoneGolem.cpp"

#include "hack.cpp"

using namespace std;

void printDamage(Spell* spell, Target* target, int damage) {
    cout << spell->getName() << " наносит " << damage << " урона по " << target->getName() << " (" << target->getHp() << "/" << target->getMaxHp() << ")." << endl;
}

int main() {
    std::list<Spell*> spells;
    spells.push_back(new Fireball());
    spells.push_back(new LifeDrain());
    spells.push_back(new PoisonCloud());

    std::list<Target*> targets;
    targets.push_back(new ArmorKnight());
    targets.push_back(new Ogre());
    targets.push_back(new StoneGolem());

    int deaths = 0;
    while (deaths < targets.size()) {
        for (Target* target : targets) {
            if (target->getHp() == 0) {
                continue;
            }
            for (Spell* spell : spells) {
                int damage = spell->attack(target);
                printDamage(spell, target, damage);
                if (target->getHp() == 0) {
                    cout << target->getName() << " уничтожен." << endl;
                    ++deaths;
                    break;
                }
            }
            cout << endl;
        }
    }

    return 0;
}