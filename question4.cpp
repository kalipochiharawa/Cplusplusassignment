#include <iostream>
#include <limits> // For std::numeric_limits

using namespace std;

int main() {
    int userValue;

    // Prompt the user for an integer value between 5 and 10
    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";
        cin >> userValue;

        // Check if the input is a valid integer
        if (cin.fail()) {
            cout << "Invalid input. Please enter a valid integer." << endl;
            cin.clear();
            cin.ignore(numeric_limits< streamsize>::max(), '\n');
        } else if (userValue >= 5 && userValue <= 10) {
            break; // Exit the loop if the input is within the valid range
        } else {
            cout << "Input value must be between 5 and 10." << endl;
        }
    }

    // Inform the user that their input value has been accepted
    cout << "Your input value (" << userValue << ") has been accepted." << endl;

    return 0;
}
