#include "Feedback.h"
#include <sstream>

using namespace std;

Feedback::Feedback(int feedbackId, int visitorId, const string &message, time_t date) {
    this->feedbackId = feedbackId;
    this->visitorId = visitorId;
    this->message = message;
    this->date = date;
}

Feedback::~Feedback() { }

string Feedback::getFeedbackMessage() const {
    ostringstream oss;
    oss << "Feedback [ID:" << feedbackId
        << ", VisitorID:" << visitorId
        << ", Message:" << message << "]";
    return oss.str();
}

int Feedback::getId() const {
    return feedbackId;
}
