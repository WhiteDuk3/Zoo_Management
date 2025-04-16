#ifndef EVENT_H
#define EVENT_H

#include <string>
#include <ctime>
#include "Attraction.h"

using namespace std;

class Event {
private:
    int eventId;
    string name;
    time_t date;
    Attraction relatedAttraction;

public:
    Event(int eventId, const string &name, time_t date, const Attraction &relatedAttraction);
    ~Event();

    void schedule();
    void update();
    void cancel();
    int getId() const;
};

#endif
