/*Emmanuel Kipchumba

 CT101/G/26599/25.

 Weekly assignment;

 week 2: Task 1.

 KIRINYAGA UNIVERSITY:
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string studentname;
    int exammarks;
    char grade;

    cout << "Student name: ";
    getline(cin, studentname);

    cout << "Exam marks: ";
    cin >> exammarks;

    if (exammarks >= 70 && exammarks <= 100)
    {
        grade = 'A';
    }
    else if (exammarks >= 60)
    {
        grade = 'B';
    }
    else if (exammarks >= 50)
    {
        grade = 'C';
    }
    else if (exammarks >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }
    cout << endl;

    cout << "Student name: " << studentname << endl;
    cout << "Exam marks: " << exammarks << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
