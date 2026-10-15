/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 6: Task 2

  KIRINYAYA UNIVERSITY
*/
#include<iostream>
#include<string>
using namespace std;

// Define the student class to manage information and financial tracking
class student {
public:
    // Attributes / Member variables
    string studentname;    
    int admission;
    float feebalance;
    float paidfee;
    float finalbalance;    

    // Method to collect details directly into the object's variables
    void inputstudent()
    {
        cout << "Enter Student Name:" << endl;
        // CHANGED: Using standard 'cin >>' instead of 'getline' because cin.ignore() was removed.
        // This prevents the buffer from skipping the prompt on subsequent runs.
        getline(cin,studentname); 
        
        cout << "Enter Admission Number:" << endl;
        cin >> admission;
        
        cout << "Enter Fee Balance:" << endl;
        cin >> feebalance;
        
        cout << "Paid Fee:" << endl;
        cin >> paidfee;
        
        // No cin.ignore() is used here anymore
    }    

    // Method to handle financial processing
    float makepayment()
    {
        // Computes new remaining balance after factoring in the payment
        finalbalance = feebalance - paidfee;
        return finalbalance; 
    }

    // Method to print out a structured statement receipt
    void diplaystatus()
    {
        cout << "\nSTUDENT STATUS" << endl;
        cout << "#######################" << endl;
        cout << "STUDENT NAME: " << studentname << endl;
        cout << "ADMISSION NUMBER: " << admission << endl;
        cout << "INITIAL FEE BALANCE: " << feebalance << endl;
        cout << "PAID FEE: " << paidfee << endl;
        cout << "FINAL FEE BALANCE: " << finalbalance << endl; 
        cout << "#######################" << endl;
    }
};

int main()
{
    // Instantiate an object named 'student1'
    student student1;

    // Call the input method to collect student data safely without buffer issues
    student1.inputstudent();

    // Execute the payment function to process the balance calculations
    student1.makepayment();

    // Displays the compiled report layout to the console
    student1.diplaystatus();

    return 0;
}
