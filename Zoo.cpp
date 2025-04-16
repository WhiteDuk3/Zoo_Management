// Zoo.cpp

#include "Zoo.h"
#include <iostream>
#include <sstream>

using namespace std;

Zoo::Zoo() {
    defaultTicketPrice = 101.0;
}

Zoo::~Zoo() {
    // Clean up dynamic Animal objects
    for (int i = 0; i < animals.size(); i++) {
        delete animals.getItem(i);
    }
}

void Zoo::addAnimal(Animal* animal) {
    animals.addItem(animal);
}

void Zoo::removeAnimal(int animalId) {
    for (int i = 0; i < animals.size(); i++) {
        Animal* a = animals.getItem(i);
        if (a->getId() == animalId) {
            delete a;
            animals.removeItem(i);
            break;
        }
    }
}

void Zoo::updateAnimalDetails(int animalId, const string &details) {
    cout << "Animal " << animalId << " details updated: " << details << "\n";
}

void Zoo::addAttraction(const Attraction &attraction) {
    attractions.addItem(attraction);
}

void Zoo::removeAttraction(int attractionId) {
    int count = attractions.getAllItems().size();
    for (int i = 0; i < count; i++) {
        if (attractions.getItem(i).getId() == attractionId) {
            attractions.removeItem(i);
            break;
        }
    }
}

void Zoo::scheduleEvent(const Event &event) {
    events.addItem(event);
}

void Zoo::updateTicketPrice(double newPrice) {
    defaultTicketPrice = newPrice;
    cout << "Ticket price updated to: " << defaultTicketPrice << "\n";
}

void Zoo::addDiscount(const Discount &discount) {
    discounts.addItem(discount);
}

void Zoo::removeDiscount(int discountId) {
    int count = discounts.getAllItems().size();
    for (int i = 0; i < count; i++) {
        if (discounts.getItem(i).getId() == discountId) {
            discounts.removeItem(i);
            break;
        }
    }
}

void Zoo::addSpecialDeal(const SpecialDeal &deal) {
    specialDeals.addItem(deal);
}

void Zoo::removeSpecialDeal(int dealId) {
    int count = specialDeals.getAllItems().size();
    for (int i = 0; i < count; i++) {
        if (specialDeals.getItem(i).getId() == dealId) {
            specialDeals.removeItem(i);
            break;
        }
    }
}

string Zoo::getVisitorStats() const {
    ostringstream oss;
    oss << "Total Visitors: " << visitors.size() << "\n";
    return oss.str();
}

void Zoo::displayAnimals() const {
    for (int i = 0; i < animals.size(); i++) {
        Animal* a = animals.getItem(i);
        cout << a->displayInfo() << "\n";
    }
}

// NEW: Add visitor tracking - store visitor data
void Zoo::addVisitor(const Visitor &visitor) {
    visitors.addItem(visitor);
}

// NEW: Helper method for dynamic event creation.
// Returns an Attraction from the container (if not found, returns a default Attraction).
Attraction Zoo::getAttractionById(int attractionId) const {
    vector<Attraction> allAttractions = attractions.getAllItems();
    for (size_t i = 0; i < allAttractions.size(); i++) {
        if (allAttractions[i].getId() == attractionId)
            return allAttractions[i];
    }
    // If not found, return a default attraction (ID 0 indicates an invalid attraction).
    return Attraction(0, "Not Found", "Attraction not found", 0.0);
}
