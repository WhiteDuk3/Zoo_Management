#include "Event.h"
#include <iostream>
#include <ctime>

using namespace std;

Event::Event(int eventId, const string &name, time_t date, const Attraction &relatedAttraction) {
    this->eventId = eventId;
    this->name = name;
    this->date = date;
    this->relatedAttraction = relatedAttraction;
}

Event::~Event() { }

void Event::schedule() {
    cout << "Event '" << name << "' scheduled at " << ctime(&date);
}

void Event::update() {
    cout << "Event '" << name << "' updated." << "\n";
}

void Event::cancel() {
    cout << "Event '" << name << "' cancelled." << "\n";
}

int Event::getId() const {
    return eventId;
}
