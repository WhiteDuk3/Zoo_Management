#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <ctime>
#include <iostream>
using namespace std;

// Abstract Class: Animal
class Animal {
protected:
    int animalId;
    string name;
     string species;
    bool feedingStatus;
    time_t lastFed;  // store when last fed

public:
    Animal(int animalId, const string &name, const string &species);
    virtual ~Animal();
    virtual void feed() = 0;   // pure virtual: subclasses must override
    virtual string displayInfo() const = 0; // pure virtual
    void updateFeedingStatus(bool status);

    int getId() const;
    string getName() const;
    string getSpecies() const;
};

#endif
