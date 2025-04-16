#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>

using namespace std;

class Mammal : public Animal {
private:
    int gestationPeriod; // in days
public:
    Mammal(int animalId, const string &name, const string &species, int gestationPeriod);
    virtual ~Mammal();
    void feed() override;
    string displayInfo() const override;
};

#endif
