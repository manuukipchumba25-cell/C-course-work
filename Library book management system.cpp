/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 6: Task 1

  KIRINYAYA UNIVERSITY
*/
#include<iostream> // Includes the Input/Output stream library for cout and cin
#include<string>   // Includes the string library to use the string data type
using namespace std; // Allows using standard library elements (like cout, cin) without the std:: prefix

// Defines a class named 'book' to serve as a blueprint for book objects
class book{
	public: // Access specifier: variables and functions below can be accessed outside the class
string booktitle; // Variable to store the title of the book
string author;    // Variable to store the name of the author
int copies;       // Variable to store the total stock of copies available
int borrowed;     // Variable to store the number of copies borrowed
int newcopies;    // Variable to store the remaining copies after borrowing

// Method/Function to get book specifications from the user via console input
void inputdetails()
{
cout<<"Enter book title:"<<endl;
cin>>booktitle; // Reads a single word for the book title
cout<<"Enter Author:"<<endl;
cin>>author;    // Reads a single word for the author's name
cout<<"Number of Copies:"<<endl;
cin>>copies;    // Reads the integer value for total copies
cout<<"Enter borrowed:"<<endl;
cin>>borrowed;  // Reads the integer value for borrowed copies
}

// Method/Function to process the borrowing logic and update inventory
int borrowbook()
{
	newcopies=copies-borrowed; // Subtracts borrowed copies from total stock
	return newcopies;          // Returns the calculated leftover stock amount
}

// Method/Function to output a clean, formatted receipt to the screen
void displaydetails()
{
	cout<<"\n BOOK INFORMATION"<<endl;
	cout<<"*******************"<<endl;
	cout<<"BOOK:"<<booktitle<<endl;
	cout<<"AUTHOR:"<<author<<endl;
	cout<<"NUMBER OF COPIES:"<<copies<<endl;
	cout<<"BORROWED COPIES:"<<borrowed<<endl;
	cout<<"NEW NUMBER OF COPIES:"<<newcopies<<endl;
	cout<<"*******************"<<endl;
}
}; // Semi-colon ends the class definition

// Main function where the program execution starts
int main()
{
	 book book1; // Instantiates (creates) an object named 'book1' from the 'book' class
	
	// Manually assigning specific values to the object's properties
	book1.booktitle="Samaritan"; // Assigns "Samaritan" to book1's title
	book1.author="MARK";         // Assigns "MARK" to book1's author
	book1.copies=45;             // Sets book1's total stock to 45
	book1.borrowed=24;           // Sets book1's borrowed quantity to 24
	
	book1.borrowbook();     // Calls the calculation method to update 'newcopies' (45 - 24 = 21)
	book1.displaydetails(); // Calls the printing method to display the final record details
	
return 0; // Signals to the operating system that the program finished successfully

}
