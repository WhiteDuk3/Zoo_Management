#include "Animal.h"
#include <ctime>
using namespace std;

Animal::Animal(int animalId, const string &name, const string &species) {
    this->animalId = animalId;
    this->name = name;
    this->species = species;
    this->feedingStatus = false;
    this->lastFed = 0;
}

Animal::~Animal() { }

void Animal::updateFeedingStatus(bool status) {
    feedingStatus = status;
    if(status)
        lastFed = time(nullptr);
}

int Animal::getId() const {
    return animalId;
}

string Animal::getName() const {
    return name;
}

string Animal::getSpecies() const {
    return species;
}
