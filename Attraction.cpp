#include "Attraction.h"
#include <sstream>

using namespace std;
// default initialization to be able to use it in Event
Attraction::Attraction() {
    this->attractionId = 0;
    this->name = "";
    this->description = "";
    this->status = "closed";
    this->ticketPrice = 0.0;
}

Attraction::Attraction(int attractionId, const string &name, const string &description, double ticketPrice) {
    this->attractionId = attractionId;
    this->name = name;
    this->description = description;
    this->status = "open";
    this->ticketPrice = ticketPrice;
}

Attraction::~Attraction() { }

string Attraction::viewAttractionInfo() const {
    ostringstream oss;
    oss << "Attraction [ID:" << attractionId
        << ", Name:" << name
        << ", Description:" << description
        << ", Status:" << status
        << ", Ticket Price:" << ticketPrice << "]";
    return oss.str();
}

void Attraction::updateAttractionInfo(const string &newInfo) {
    description = newInfo;
}

int Attraction::getId() const {
    return attractionId;
}
