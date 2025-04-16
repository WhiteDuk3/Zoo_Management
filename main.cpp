// #include <iostream>
// #include <ctime>
// #include "Zoo.h"
// #include "Admin.h"
// #include "Visitor.h"
// #include "Mammal.h"
// #include "Reptile.h"
// #include "Amphibian.h"
// #include "Attraction.h"
// #include "Event.h"
// #include "Discount.h"
// #include "SpecialDeal.h"
// #include "Feedback.h"
// #include "ZooException.h"
//
// using namespace std;
//
// int main() {
//     try {
//         Zoo zoo;
//
//         // Create hardcoded animals
//         Animal* simba = new Mammal(1, "Simba", "Lion", 110);
//         Animal* coco  = new Mammal(2, "Coco", "Chimpanzee", 230);
//         Animal* komodo = new Reptile(3, "KomodoDragon", "Komodo Dragon", "Rough");
//         Animal* rattler = new Reptile(4, "Rattler", "Rattlesnake", "Smooth");
//         Animal* frog = new Amphibian(5, "Frog", "Bullfrog", "Moist");
//         Animal* stripes = new Amphibian(6, "Stripes", "Tiger Salamander", "Rough");
//
//         zoo.addAnimal(simba);
//         zoo.addAnimal(coco);
//         zoo.addAnimal(komodo);
//         zoo.addAnimal(rattler);
//         zoo.addAnimal(frog);
//         zoo.addAnimal(stripes);
//
//         // Display animals (demonstrates polymorphism)
//         cout << "Zoo Animals:\n";
//         zoo.displayAnimals();
//
//         // Create an Attraction
//         Attraction lionEnclosure(101, "Lion Enclosure", "Home of the lions", 15.0);
//         zoo.addAttraction(lionEnclosure);
//
//         // Create an Event (using current time)
//         time_t now = time(nullptr);
//         Event lionShow(201, "Lion Show", now, lionEnclosure);
//         zoo.scheduleEvent(lionShow);
//
//         // Create Discounts and Special Deals
//         Discount discountMinor(301, "Minor", 10.0);
//         Discount discountSenior(302, "Senior", 15.0);
//         zoo.addDiscount(discountMinor);
//         zoo.addDiscount(discountSenior);
//
//         SpecialDeal dealAttraction(401, "Visit 3 attractions get free ticket", "visit3", 100.0);
//         zoo.addSpecialDeal(dealAttraction);
//
//         // Create a Visitor and test functionalities
//         Visitor visitor1(501, "Alice");
//         cout << visitor1.exploreZoo() << "\n";
//         visitor1.buyMembership();
//         visitor1.buyTickets();
//         cout << visitor1.visitAnimal(1) << "\n";
//         cout << visitor1.visitAttraction(101) << "\n";
//         visitor1.leaveFeedback("Great zoo experience!");
//         visitor1.exitZoo(time(nullptr));
//
//         // Admin operations
//         Admin admin1(601, "admin", "password");
//         admin1.manageAnimals();
//         cout << admin1.viewVisitorStats() << "\n";
//
//         // Update ticket price
//         zoo.updateTicketPrice(120.0);
//
//         // Simulate exception handling
//         throw ZooException("Sample exception: Invalid input encountered!");
//
//     } catch (const ZooException &ex) {
//         cerr << "ZooException caught: " << ex.what() << "\n";
//     } catch (const exception &ex) {
//         cerr << "Standard exception caught: " << ex.what() << "\n";
//     }
//
//     return 0;
// }
//
//

#include <iostream>
#include <string>
#include <ctime>
#include "Zoo.h"
#include "Admin.h"
#include "Visitor.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Amphibian.h"
#include "Attraction.h"
#include "Event.h"
#include "Discount.h"
#include "SpecialDeal.h"
#include "Feedback.h"
#include "ZooException.h"

using namespace std;

int main() {
    Zoo zoo;

    // Pre-load some default data into the zoo

    // Create some animals (example animals)
    Animal* simba   = new Mammal(1, "Simba", "Lion", 110);
    Animal* coco    = new Mammal(2, "Coco", "Chimpanzee", 230);
    Animal* komodo  = new Reptile(3, "Komodo", "Komodo Dragon", "Rough");
    Animal* rattler = new Reptile(4, "Rattler", "Rattlesnake", "Smooth");
    Animal* frog    = new Amphibian(5, "Frog", "Bullfrog", "Moist");

    // Add animals to the zoo
    zoo.addAnimal(simba);
    zoo.addAnimal(coco);
    zoo.addAnimal(komodo);
    zoo.addAnimal(rattler);
    zoo.addAnimal(frog);

    // Create an example attraction and add it
    Attraction lionEnclosure(101, "Lion Enclosure", "Home of the lions", 15.0);
    zoo.addAttraction(lionEnclosure);

    // Create an example event and schedule it (pre-loaded event)
    time_t now = time(nullptr);
    Event lionShow(201, "Lion Show", now, lionEnclosure);
    zoo.scheduleEvent(lionShow);

    // Create example discounts and special deals
    Discount discountMinor(301, "Minor", 10.0);
    Discount discountSenior(302, "Senior", 15.0);
    zoo.addDiscount(discountMinor);
    zoo.addDiscount(discountSenior);

    SpecialDeal dealAttraction(401, "Visit 3 attractions get free ticket", "visit3", 100.0);
    zoo.addSpecialDeal(dealAttraction);

    bool running = true;
    while (running) {
        cout << "\n--- Welcome to the Interactive Zoo System ---\n";
        cout << "Select Role:\n";
        cout << "1. Visitor\n";
        cout << "2. Admin\n";
        cout << "0. Exit Application\n";
        cout << "Choice: ";

        int roleChoice;
        cin >> roleChoice;

        switch (roleChoice) {
            case 1: { // Visitor Mode
                string visitorName;
                cout << "\nEnter your name: ";
                cin >> visitorName;

                // Create a Visitor object and add it to the zoo's visitor list
                Visitor visitor(501, visitorName);
                zoo.addVisitor(visitor);

                bool visitorMenu = true;
                while (visitorMenu) {
                    cout << "\n--- Visitor Menu ---\n";
                    cout << "1. Explore Zoo\n";
                    cout << "2. Buy Membership\n";
                    cout << "3. Buy Tickets\n";
                    cout << "4. View Animals\n";
                    cout << "5. View Discounts\n";
                    cout << "6. View Special Deals\n";
                    cout << "7. Visit an Animal (by ID)\n";
                    cout << "8. Visit an Attraction (by ID)\n";
                    cout << "9. Leave Feedback\n";
                    cout << "0. Exit Visitor Mode\n";
                    cout << "Choice: ";

                    int visitorChoice;
                    cin >> visitorChoice;

                    switch (visitorChoice) {
                        case 1:
                            cout << "\n" << visitor.exploreZoo() << "\n";
                            break;
                        case 2:
                            visitor.buyMembership();
                            break;
                        case 3:
                            visitor.buyTickets();
                            break;
                        case 4:
                            cout << "\n--- Zoo Animals ---\n";
                            zoo.displayAnimals();
                            break;
                        case 5:
                            cout << "\n" << visitor.viewDiscounts() << "\n";
                            break;
                        case 6:
                            cout << "\n" << visitor.viewSpecialDeals() << "\n";
                            break;
                        case 7: {
                            int animalId;
                            cout << "Enter Animal ID to visit: ";
                            cin >> animalId;
                            cout << "\n" << visitor.visitAnimal(animalId) << "\n";
                            break;
                        }
                        case 8: {
                            int attractionId;
                            cout << "Enter Attraction ID to visit: ";
                            cin >> attractionId;
                            cout << "\n" << visitor.visitAttraction(attractionId) << "\n";
                            break;
                        }
                        case 9: {
                            cout << "Enter your feedback: ";
                            cin.ignore(); // Clear the input buffer
                            string feedback;
                            getline(cin, feedback);
                            visitor.leaveFeedback(feedback);
                            break;
                        }
                        case 0:
                            visitor.exitZoo(time(nullptr));
                            visitorMenu = false;
                            break;
                        default:
                            cout << "Invalid option. Please try again.\n";
                            break;
                    }
                }
                break;
            }
            case 2: { // Admin Mode
                string username, password;
                cout << "\nEnter admin username: ";
                cin >> username;
                cout << "Enter admin password: ";
                cin >> password;
                // Simple instantiation (no complex verification here)
                Admin admin(601, username, password);

                bool adminMenu = true;
                while (adminMenu) {
                    cout << "\n--- Admin Menu ---\n";
                    cout << "1. Manage Animals\n";
                    cout << "2. Manage Attractions\n";
                    cout << "3. Create a New Event\n";
                    cout << "4. Update Ticket Price\n";
                    cout << "5. View Visitor Stats\n";
                    cout << "6. View Feedback\n";
                    cout << "0. Exit Admin Mode\n";
                    cout << "Choice: ";

                    int adminChoice;
                    cin >> adminChoice;

                    switch (adminChoice) {
                        case 1:
                            admin.manageAnimals();
                            break;
                        case 2:
                            admin.manageAttractions();
                            break;
                        case 3: { // Dynamic event creation
                            int eventId, attractionId;
                            string eventName;
                            cout << "Enter new Event ID: ";
                            cin >> eventId;
                            cout << "Enter new Event Name: ";
                            cin.ignore(); // Clear input buffer
                            getline(cin, eventName);
                            cout << "Enter Attraction ID for the event: ";
                            cin >> attractionId;

                            // Retrieve the attraction (if exists)
                            Attraction relatedAttraction = zoo.getAttractionById(attractionId);
                            if (relatedAttraction.getId() == 0) {
                                cout << "Attraction with ID " << attractionId << " not found. Event creation failed.\n";
                            } else {
                                Event newEvent(eventId, eventName, time(nullptr), relatedAttraction);
                                zoo.scheduleEvent(newEvent);
                                cout << "Event created and scheduled successfully.\n";
                            }
                            break;
                        }
                        case 4: {
                            double newPrice;
                            cout << "Enter new ticket price: ";
                            cin >> newPrice;
                            zoo.updateTicketPrice(newPrice);
                            break;
                        }
                        case 5:
                            cout << "\n" << zoo.getVisitorStats() << "\n";
                            break;
                        case 6:
                            cout << "\n" << admin.viewFeedback() << "\n";
                            break;
                        case 0:
                            adminMenu = false;
                            break;
                        default:
                            cout << "Invalid option. Please try again.\n";
                            break;
                    }
                }
                break;
            }
            case 0:
                running = false;
                break;
            default:
                cout << "Invalid selection. Please try again.\n";
                break;
        }
    }

    cout << "\nExiting application. Goodbye!\n";
    return 0;
}
