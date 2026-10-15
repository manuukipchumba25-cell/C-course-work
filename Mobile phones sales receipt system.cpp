/*Emmanuel Kipchumba

 CT101/G/26599/25.

 Weekly assignment;

 week 1: Task 1.

 KIRINYAGA UNIVERSITY:
 */




#include <iostream>
using namespace std;

int main() {
    //Declaring variables to store the given information.
    string customer_name;
    string phone_model;
    int quantitybought;
    float price_perphone;
    float Total_salesAmount;

    //prompting the user to enter the given details.
    cout << "Customer name: ";
    getline(cin,customer_name); /*it gets both names without having to
    put horizontal tab on next task*/
    cout << "Phone model: ";
    cin >> phone_model ;
    cout << "Quantity bought: ";
    cin >> quantitybought ;
    cout << "Price per phone: ";
    cin >> price_perphone ;
     //calculates the total sales.
    Total_salesAmount = quantitybought * price_perphone;
    //prompts the user to calculate the total sales.
    cout << "Total sales Amount: ";
    cin >> Total_salesAmount;

    cout << "           " << endl;
    //displays a well formatted receipt showing the details
    cout << "SALES RECEIPT" << endl;
    cout << "=============" << endl;
    cout << "Customer name: " << customer_name << endl;
    cout << "=============" << endl;
    cout << "phone model: " << phone_model << endl;
    cout << "=============" << endl;
    cout << "quantity bought: " << quantitybought << endl;
    cout << "=================" << endl;
    cout << "price per phone: " << price_perphone << endl;
    cout << "=================" << endl;
    cout << "Total sales Amount: " << Total_salesAmount << endl;
    cout << "=================" << endl;


    return 0;
}




