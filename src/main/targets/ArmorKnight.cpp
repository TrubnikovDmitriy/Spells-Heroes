#include "Target.cpp"

class ArmorKnight : public Target {
    protected:
        int hitBySpell(Spell* spell) override {
            int damage = spell->getDamage(getHp(), getMaxHp()) / 2;
            cout << "~ " << this->getName() << " снижает полученный урон вдвое. ~" << endl;
            dealDamage(damage);
            return damage;
        }

    public:
        ArmorKnight() : Target("ArmorKnight", 200) {};
};


