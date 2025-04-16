#ifndef VISITOR_H
#define VISITOR_H

#include <string>
#include <ctime>

using namespace std;

class Visitor {
private:
    int visitorId;
    string name;
    bool membershipStatus;
    time_t entryTime;
    time_t exitTime;

public:
    Visitor(int visitorId, const string &name);
    ~Visitor();
    string exploreZoo();
    void buyMembership();
    void buyTickets();

    string viewDiscounts();
    string viewSpecialDeals();
    string visitAnimal(int animalId);
    string visitAttraction(int attractionId);

    void leaveFeedback(const string &feedback);
    void exitZoo(time_t time);
};

#endif
