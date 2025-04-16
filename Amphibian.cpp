#include "Amphibian.h"
#include <sstream>

using namespace std;

Amphibian::Amphibian(int animalId, const string &name, const string &species, const string &skinType)
    : Animal(animalId, name, species) {
    this->skinType = skinType;
}

Amphibian::~Amphibian() { }

void Amphibian::feed() {
    updateFeedingStatus(true);
    cout << name << " the " << species << " (Amphibian) is fed." << "\n";
}

string Amphibian::displayInfo() const {
    ostringstream oss;
    oss << "Amphibian [ID:" << animalId << ", Name:" << name
        << ", Species:" << species
        << ", Skin Type:" << skinType << "]";
    return oss.str();
}
