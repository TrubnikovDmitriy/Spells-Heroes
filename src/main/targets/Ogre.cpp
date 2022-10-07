#ifndef OGRE
#define OGRE

#include "Target.cpp"

class Ogre : public Target {
    public:
        Ogre() : Target("Ogre", 300) {};
};

#endif