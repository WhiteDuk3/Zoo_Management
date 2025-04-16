#ifndef SPECIALDEAL_H
#define SPECIALDEAL_H

#include <string>

using namespace std;

class SpecialDeal {
private:
    int dealId;
    string description;
    string condition; // e.g., "visit3"
    double dealValue;

public:
    SpecialDeal(int dealId, const string &description, const string &condition, double dealValue);
    ~SpecialDeal();
    string getDealDetails() const;
    int getId() const;
};

#endif
