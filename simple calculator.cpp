/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 2: Task 3

  KIRINYAYA UNIVERSITY
*/
#include<iostream>
using namespace std;
int main()
{

float y;
float x;
int operation=4;
cout<< "Enter first value:"<<endl;
cin>>y;
cout<<"Enter second value:"<<endl;
cin>>x;
switch (operation)
{
case 1:
	cout<<"Addition:"<<y+x;
	break;	
case2:
cout<<"subtraction:"<<y-x;
break;
case 3:
cout<<"multiplication:"<<y*x;
break;
case 4:
	cout<<"Division:"<<y/x;
	break;
}
return 0;
}