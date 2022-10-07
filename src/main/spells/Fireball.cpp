#ifndef FIREBALL
#define FIREBALL

#include "Spell.cpp"

class Fireball : public Spell {
    public:
        Fireball() : Spell("Fireball") {};

        int getDamage(int hp, int maxHp) override {
            return 10;
        }
};

#endif