#ifndef AMPHIBIAN_H
#define AMPHIBIAN_H

#include "Animal.h"
#include <string>

using namespace std;

class Amphibian : public Animal {
private:
    string skinType;

public:
    Amphibian(int animalId, const string &name, const string &species, const string &skinType);
    virtual ~Amphibian();
    void feed() override;
    string displayInfo() const override;
};

#endif
