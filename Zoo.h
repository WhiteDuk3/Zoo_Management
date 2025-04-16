// Zoo.h

#ifndef ZOO_H
#define ZOO_H

#include "ManagementContainer.h"
#include "Attraction.h"
#include "Animal.h"
#include "Visitor.h"
#include "Event.h"
#include "Discount.h"
#include "SpecialDeal.h"
#include "Feedback.h"
#include <string>

using namespace std;

class Zoo {
private:
    ManagementContainer<Attraction> attractions;
    ManagementContainer<Animal*> animals; // using pointers for polymorphism
    ManagementContainer<Visitor> visitors;
    ManagementContainer<Event> events;
    ManagementContainer<Discount> discounts;
    ManagementContainer<SpecialDeal> specialDeals;
    ManagementContainer<Feedback> feedbackList;
    double defaultTicketPrice;
public:
    Zoo();
    ~Zoo();
    void addAnimal(Animal* animal);
    void removeAnimal(int animalId);
    void updateAnimalDetails(int animalId, const string &details);
    void addAttraction(const Attraction &attraction);
    void removeAttraction(int attractionId);
    void scheduleEvent(const Event &event);
    void updateTicketPrice(double newPrice);
    void addDiscount(const Discount &discount);
    void removeDiscount(int discountId);
    void addSpecialDeal(const SpecialDeal &deal);
    void removeSpecialDeal(int dealId);
    string getVisitorStats() const;
    void displayAnimals() const; // For testing purposes

    // NEW: Visitor tracking
    void addVisitor(const Visitor &visitor);

    // NEW: Helper method to retrieve an Attraction by ID (for dynamic event creation)
    Attraction getAttractionById(int attractionId) const;
};

#endif
