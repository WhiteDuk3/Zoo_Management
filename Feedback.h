#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <string>
#include <ctime>

using namespace std;

class Feedback {
private:
    int feedbackId;
    int visitorId;
    string message;
    time_t date;
public:
    Feedback(int feedbackId, int visitorId, const string &message, time_t date);
    ~Feedback();
    string getFeedbackMessage() const;
    int getId() const;
};

#endif
