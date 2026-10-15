/*Emmanuel Kipchumba

  CT101/G/26599/25

  Week 3: Task 2

  KIRINYAYA UNIVERSITY
*/
#include<iostream> 
#include<string> 

using namespace std; 

// Global variables to store customer and bill details
string customername; 
int unitsconsumed; 
float waterbill; 
float discount; 
float finalamount; 
float rateperunit; 

// Function to collect input from the user
void getcustomerdetails() { 
    cout << "Customer Name:" << endl; 
    getline(cin, customername); // Reads the full name, including spaces
    
    cout << "Number of Units Consumed:" << endl; 
    cin >> unitsconsumed; 
    
    cout << "Rate per Unit:" << endl; 
    cin >> rateperunit; 
} 

// Function to calculate the initial bill before discount
float calculatebills() { 
    waterbill = unitsconsumed * rateperunit; 
    return waterbill; 
} 

// Function to calculate rewards/discounts and find the final amount due
float applydiscount() { 
    // Users get a 10% discount if they consume more than 100 units
    if (unitsconsumed > 100) { 
        discount = 0.1 * waterbill; 
    } else { 
        discount = 0; 
    } 
    finalamount = waterbill - discount; 
    return finalamount; 
} 

// Function to output the receipt layout to the console
void displaybill() { 
    cout << "\n WATERBILLS INFORMATION" << endl; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
    cout << "Customer Name:" << customername << endl; 
    cout << "Units Consumed:" << unitsconsumed << endl; 
    cout << "Total Bill Before Discount:" << waterbill << endl; 
    cout << "discount:" << discount << endl; 
    cout << "Final Amount Payable:" << finalamount << endl; 
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
} 

int main() { 
    // FIXED: Removed return types (void/float) to call the functions instead of re-declaring them.
    getcustomerdetails(); 
    calculatebills(); 
    applydiscount(); 
    
    // FIXED: Corrected the spelling typo from 'diplayill()' to 'displaybill()'
    displaybill(); 
    
    return 0; 
}
