#ifndef TARGET
#define TARGET

#include <string>
#include "../spells/Spell.cpp"
#include "../spells/Fireball.cpp"

using namespace std;

class Target {
    private:
        string name;
        int maxHp;
        int hp;

    protected:
        void dealDamage(int damage) {
            if (damage > this->hp) {
                this->hp = 0;
            } else {
                this->hp = this->hp - damage;
            }
        }

        /**
         * Получает значение урона от заклинания и наносит его себе.
         *
         * Убрано из публичного API, чтобы заставить вызывать либо
         * конкретные заклинания, либо [Spell#attack] самого заклинания.
         *
         * @param spell атакующее заклинание
         * @return количество нанесенного урона damage
         */
        virtual int hitBySpell(Spell* spell) {
            int damage = spell->getDamage(hp, maxHp);
            dealDamage(damage);
            return damage;
        }

    public:
        string getName() { return this->name; }
        int getMaxHp() { return this->maxHp; }
        int getHp() { return this->hp; }

        Target(string name, int maxHp) {
            this->name = name;
            this->maxHp = maxHp;
            this->hp = maxHp;
        }

        virtual int hitBy(Fireball* spell) {
            return hitBySpell(spell);
        }

        virtual int hitBy(LifeDrain* spell) {
            return hitBySpell(spell);
        }

        virtual int hitBy(PoisonCloud* spell) {
            return hitBySpell(spell);
        }
};

#endif