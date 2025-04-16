#include "Visitor.h"
#include <iostream>
#include <sstream>
#include <ctime>

using namespace std;

Visitor::Visitor(int visitorId, const string &name) {
    this->visitorId = visitorId;
    this->name = name;
    this->membershipStatus = false;
    this->entryTime = time(nullptr);
    this->exitTime = 0;
}

Visitor::~Visitor() { }

string Visitor::exploreZoo() {
    return name + " is exploring the zoo.";
}

void Visitor::buyMembership() {
    membershipStatus = true;
    cout << name << " purchased a membership." << "\n";
}

void Visitor::buyTickets() {
    cout << name << " bought tickets." << "\n";
}

string Visitor::viewDiscounts() {
    return "Viewing available discounts.";
}

string Visitor::viewSpecialDeals() {
    return "Viewing special deals.";
}

string Visitor::visitAnimal(int animalId) {
    ostringstream oss;
    oss << name << " is visiting animal with ID " << animalId << ".";
    return oss.str();
}

string Visitor::visitAttraction(int attractionId) {
    ostringstream oss;
    oss << name << " is visiting attraction with ID " << attractionId << ".";
    return oss.str();
}

void Visitor::leaveFeedback(const string &feedback) {
    cout << "Feedback from " << name << ": " << feedback << "\n";
}

void Visitor::exitZoo(time_t time) {
    exitTime = time;
    cout << name << " exited the zoo at " << ctime(&exitTime);
}
