#include "Discount.h"

using namespace std;

Discount::Discount(int discountId, const string &category, double percentage) {
    this->discountId = discountId;
    this->category = category;
    this->percentage = percentage;
}

Discount::~Discount() { }

double Discount::getDiscountValue() const {
    return percentage;
}

int Discount::getId() const {
    return discountId;
}
