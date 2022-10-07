#include "Target.cpp"

class ArmorKnight : public Target {
    public:
        ArmorKnight() : Target("ArmorKnight", 150) {};

        int hitBy(Spell* spell) override {
            int damage = spell->getDamage(getHp(), getMaxHp()) / 2;
            cout << "~ " << this->getName() << " снижает полученный урон вдвое. ~" << endl;
            dealDamage(damage);
            return damage;
        }
};


