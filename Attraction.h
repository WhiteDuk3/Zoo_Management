#ifndef ATTRACTION_H
#define ATTRACTION_H

#include <string>

using namespace std;

class Attraction {
private:
    int attractionId;
    string name;
    string description;
    string status; // "open" or "closed"
    double ticketPrice;

public:
    Attraction();
    Attraction(int attractionId, const string &name, const string &description, double ticketPrice);
    ~Attraction();
    string viewAttractionInfo() const;
    void updateAttractionInfo(const string &newInfo);
    int getId() const;
};

#endif
