#ifndef FIREBALL
#define FIREBALL

#include "Spell.cpp"

class Fireball : public Spell {
    public:
        Fireball() : Spell("Fireball", 10) {};
};

#endif