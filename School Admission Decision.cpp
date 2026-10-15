/*
  Emmanuel Kipchumba
  CT101/G/26599/25
  Week 2: Task 2
  KIRINYAGA UNIVERSITY
*/

#include <iostream>
#include <string> // Included to properly support the std::string data type
using namespace std;

int main()
{
    // --- Variable Declarations ---
    string studentname; // Stores the full name of the student
    int age;            // Stores the student's age
    int score;          // Stores the student's exam score

    // --- User Input Section ---
    // Prompt the user and capture the student's full name (including spaces)
    cout << "Enter Name:" << endl;
    getline(cin, studentname);

    // Prompt the user and capture the student's age
    cout << "Enter age:" << endl;
    cin >> age;

    // Prompt the user and capture the student's exam score
    cout << "Enter Exam score:" << endl;
    cin >> score;

    // --- Admission Logic (Nested Conditions) ---
    // Check if the student meets the minimum age requirement (18 years or older)
    if (age >= 18)
    {
        // If they are an adult, check if their exam score is a pass (50 or higher)
        if (score >= 50)
        {
            cout << "Admitted" << endl;
        }
    }
    // If the student is under 18, trigger this block
    else
    {
        cout << "Not Admitted: Underage" << endl;
    }
	
    return 0; // Indicate successful execution of the program
}
