#include <iostream>
using namespace std;

int main() {
    // i. Declare variables for account balance and withdrawal amount
    double balance = 50000.0; // Starting with a sample balance of 50,000
    double withdrawalAmount;

    cout << "--- Savings Withdrawal System ---" << endl;
    cout << "Initial Balance: KSh " << balance << endl;

    // ii. while loop to allow repeated withdrawals as long as balance is sufficient
    while (balance > 0) {
        cout << "\nEnter amount to withdraw: ";
        cin >> withdrawalAmount;

        // iv. The loop stops if the withdrawal amount is greater than the balance
        if (withdrawalAmount > balance) {
            cout << "Insufficient funds! You cannot withdraw more than your balance." << endl;
            break; 
        }

        // iii. Deduct the amount from the balance
        balance -= withdrawalAmount;

        // iii. Display the remaining balance
        cout << "Withdrawal Successful! Remaining Balance: KSh " << balance << endl;

        // iv. The loop should stop when the balance becomes zero
        if (balance == 0) {
            cout << "Your balance has reached zero. Account closed for transactions." << endl;
        }
    }

    cout << "\nThank you for using our Mobile Money service." << endl;
    return 0;
}
