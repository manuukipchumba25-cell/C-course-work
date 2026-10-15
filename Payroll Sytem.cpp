/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 3: Task 1

  KIRINYAYA UNIVERSITY
*/
#include<iostream>
#include<string>
using namespace std;
string employeename;
float basicsalary;
float overtimehours;
float rateperhour;
float overtimepay;
float netsalary;
void getemployeedetails()
{
cout<<"Enter Employee Name:"<<endl;
getline(cin,employeename);

cout<<"Enter Basic Salary:"<<endl;
cin>>basicsalary;

cout<<"Enter OverTime Hours:"<<endl;
cin>>overtimehours;

cout<<"Enter Rate Per Hour:"<<endl;
cin>>rateperhour;

}
float calculateovertimepay()
{
overtimepay=overtimehours*rateperhour;
return overtimepay;	
}
float calculatenetsalary()
{
	netsalary=basicsalary+overtimepay;
	return netsalary;
}
void displaypayslip()
{
	cout<<"\n PPAYSLIP INFORMATION"<<endl;
	cout<<"*********************"<<endl;
	cout<<"Employee Name:"<<employeename<<endl;
	cout<<"Basic Salary:"<<basicsalary<<endl;
	cout<<"Overtime Hours:"<<overtimehours<<endl;
	cout<<"Overtime Pay:"<<overtimepay<<endl;
	cout<<"Net salary:"<<netsalary<<endl;
	cout<<"*********************"<<endl;
}
int main()
{
	getemployeedetails();
	calculateovertimepay();
	calculatenetsalary();
	displaypayslip();


return 0;
}