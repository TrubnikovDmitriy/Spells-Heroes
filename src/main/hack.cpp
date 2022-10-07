#include "spells/Spell.cpp"
#include "spells/Fireball.cpp"
#include "spells/LifeDrain.cpp"
#include "spells/PoisonCloud.cpp"
#include "targets/Target.cpp"

int Fireball::attack(Target* target) {
    return target->hitBy(this);
}

int LifeDrain::attack(Target* target) {
    return target->hitBy(this);
}

int PoisonCloud::attack(Target* target) {
    return target->hitBy(this);
}
