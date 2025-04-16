#include "Mammal.h"
#include <sstream>

using namespace std;

Mammal::Mammal(int animalId, const string &name, const string &species, int gestationPeriod)
    : Animal(animalId, name, species) {
    this->gestationPeriod = gestationPeriod;
}

Mammal::~Mammal() { }

void Mammal::feed() {
    updateFeedingStatus(true);
    cout << name << " the " << species << " (Mammal) is fed." << "\n";
}

string Mammal::displayInfo() const {
    ostringstream oss;
    oss << "Mammal [ID:" << animalId << ", Name:" << name
        << ", Species:" << species
        << ", Gestation Period:" << gestationPeriod << " days]";
    return oss.str();
}
