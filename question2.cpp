#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Check the subscription status based on the conditions using a switch statement
    switch (daysUntilExpiration) {
        case 1:
            cout << "Your subscription expires within a day! Renew now and save 20%!" << endl;
            break;
        case 2: case 3: case 4: case 5:
            cout << "Your subscription expires in " << daysUntilExpiration
                      << " days. Renew now and save 10%!" << endl;
            break;
        case 0: case 6: case 7: case 8: case 9: case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            if (daysUntilExpiration < 0) {
                cout << "Your subscription has expired." << endl;
            }
    }

    return 0;
}
