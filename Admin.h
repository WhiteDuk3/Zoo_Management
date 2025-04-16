#ifndef ADMIN_H
#define ADMIN_H

#include <string>

using namespace std;

class Admin {
private:
    int adminId;
    string username;
    string password;

public:
    Admin(int adminId, const string &username, const string &password);
    ~Admin();
    void manageAttractions();
    void manageAnimals();
    void scheduleEvents();
    void setDiscounts();
    void setSpecialDeals();

    string viewVisitorStats();
    string viewFeedback();
};

#endif
