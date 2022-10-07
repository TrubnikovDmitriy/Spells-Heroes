#include "Target.cpp"

class StoneGolem : public Target {
    public:
        StoneGolem() : Target("StoneGolem", 150) {};

        int hitBy(Fireball* fireball) override {
            cout << "~ " << this->getName() << " имеет иммунитет к " << fireball->getName() << "! ~" << endl;
            return 0;
        }

        int hitBy(PoisonCloud* cloud) override {
            cout << "~ " << this->getName() << " имеет иммунитет к " << cloud->getName() << "! ~" << endl;
            return 0;
        }
};