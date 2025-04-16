#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <string>

using namespace std;

class Discount {
private:
    int discountId;
    string category; // e.g., "Minor", "Student", "Senior"
    double percentage;

public:
    Discount(int discountId, const string &category, double percentage);
    ~Discount();
    double getDiscountValue() const;
    int getId() const;
};

#endif
