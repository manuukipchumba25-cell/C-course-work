/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 1: Task 2

  KIRINYAYA UNIVERSITY
*/

#include<iostream>
#include<string>//required to handle multi-word string like name
using namespace std;
int main ()
{
    string studentname;
    string testresults;
    int theorytestmarks;
    int practicaltestmarks;
    float averagescore;

     //prompts the user to input the details
    cout<<"student name:";
    getline(cin, studentname);

    cout<<"theory test marks:";
    cin>>theorytestmarks;

    cout<<"practical test marks:";
    cin>>practicaltestmarks;

     averagescore= (theorytestmarks+practicaltestmarks) /2.0;
    cout << "average score marks: ";
    cin>>averagescore;

    //A condition to determine whether a student has failed or not
    if(averagescore>=50)
{
    testresults="Passed";
}
else{
    testresults ="Failed";
}
    cout << endl;
    //displays what was entered by the user.
    cout<<"STUDENT INFORMATION"<<endl;
    cout<<"student name:"<<studentname<<endl;
    cout<<"theory test marks:"<<theorytestmarks<<endl;
    cout<<"practical test marks:"<<practicaltestmarks<<endl;
    cout<<"average score:"<<averagescore<<endl;
    cout<<"test results:"<<testresults<<endl;






    return 0;


}


