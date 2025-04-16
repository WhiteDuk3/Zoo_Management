#include "Admin.h"
#include <iostream>

using namespace std;

Admin::Admin(int adminId, const string &username, const string &password) {
    this->adminId = adminId;
    this->username = username;
    this->password = password;
}

Admin::~Admin() { }

void Admin::manageAttractions() {
    cout << "Admin is managing attractions." << "\n";
}

void Admin::manageAnimals() {
    cout << "Admin is managing animals." << "\n";
}

void Admin::scheduleEvents() {
    cout << "Admin is scheduling events." << "\n";
}

void Admin::setDiscounts() {
    cout << "Admin is setting discounts." << "\n";
}

void Admin::setSpecialDeals() {
    cout << "Admin is setting special deals." << "\n";
}

string Admin::viewVisitorStats() {
    return "Admin viewing visitor stats.";
}

string Admin::viewFeedback() {
    return "Admin reviewing feedback.";
}
