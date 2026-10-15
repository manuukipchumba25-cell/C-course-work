/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 4: Task 1

  KIRINYAYA UNIVERSITY
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Variable declarations
    string employeename;
    float basicsalary;
    float bonus;
    float totalsalary;

    // Loop to process exactly 5 employees
    for(int i = 1; i <= 5; i++)
    {
        cout << "\n Enter employee details " << i << endl;
        
        cout << "Enter Employee Name: ";
        // Reads the full name, including spaces
        getline(cin, employeename);
        
        cout << "Enter basic salary: ";
        cin >> basicsalary;
        
        // FIX: Clear the newline character left in the buffer by 'cin >> basicsalary'
        // Without this, the next 'getline' will be skipped entirely.
        cin.ignore();
        
        // Calculate 5% bonus and total salary
        bonus = 0.05 * basicsalary;
        totalsalary = basicsalary + bonus;
        
        // Output the structured text report
        cout << "\n EMPLOYEE REPORT" << endl;
        cout << ":::::::::::::::::::::" << endl;
        cout << "Employee name: " << employeename << endl;
        // Added missing 'endl' here to prevent the next line from crowding
        cout << "Basic Salary: " << basicsalary << endl; 
        cout << "Bonus: " << bonus << endl;
        cout << "Total salary: " << totalsalary << endl;
        cout << ":::::::::::::::::::::" << endl;
    }

    return 0;
}
