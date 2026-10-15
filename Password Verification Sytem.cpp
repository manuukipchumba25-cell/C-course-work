#include <iostream>
#include <string>
using namespace std;

int main() {
    // i. Predefined username and password
    const string CORRECT_USERNAME = "agent254";
    const string CORRECT_PASSWORD = "SecurePassword123";

    string inputUsername;
    string inputPassword;
    bool accessGranted = false;

    cout << "--- Login System ---" << endl;

    // ii. do-while loop to repeatedly prompt the user
    do {
        cout << "Enter Username: ";
        cin >> inputUsername;
        cout << "Enter Password: ";
        cin >> inputPassword;

        // iii. Check the input credentials
        if (inputUsername == CORRECT_USERNAME && inputPassword == CORRECT_PASSWORD) {
            cout << "\nAccess Granted! Welcome to the system." << endl;
            accessGranted = true; // iv. Exits loop organically when condition is false
        } else {
            cout << "\nIncorrect credentials, try again.\n" << endl;
        }

    } while (!accessGranted); // iv. Continues until correct credentials are entered

    return 0;
}
