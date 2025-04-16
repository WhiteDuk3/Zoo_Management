#include "SpecialDeal.h"
#include <sstream>

using namespace std;

SpecialDeal::SpecialDeal(int dealId, const string &description, const string &condition, double dealValue) {
    this->dealId = dealId;
    this->description = description;
    this->condition = condition;
    this->dealValue = dealValue;
}

SpecialDeal::~SpecialDeal() { }

string SpecialDeal::getDealDetails() const {
    ostringstream oss;
    oss << "SpecialDeal [ID:" << dealId
        << ", Description:" << description
        << ", Condition:" << condition
        << ", Value:" << dealValue << "]";
    return oss.str();
}

int SpecialDeal::getId() const {
    return dealId;
}
