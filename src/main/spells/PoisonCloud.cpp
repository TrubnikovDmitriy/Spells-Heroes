#ifndef POISON_CLOUD
#define POISON_CLOUD

#include "Spell.cpp"

class PoisonCloud : public Spell {
    public:
        PoisonCloud() : Spell("PoisonCloud") {};

        int getDamage(int hp, int maxHp) override {
            int damage = maxHp / 50;
            if (damage <= 0) {
                return 1;
            } else {
                return damage;
            }
        }
};

#endif