#ifndef LIFE_DRAIN
#define LIFE_DRAIN

#include "Spell.cpp"

class LifeDrain : public Spell {
    public:
        LifeDrain() : Spell("LifeDrain") {};

        int attack(Target* target) override;

        int getDamage(int hp, int maxHp) override {
            int damage = hp / 10;
            if (damage <= 0) {
                return 1;
            } else {
                return damage;
            }
        }
};

#endif