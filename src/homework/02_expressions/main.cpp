//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using namespace std;

int main()
{
 // Declare variables
 double meal_amount, tip_rate, tip_amount, tax_amount, total;

 // Capture meal amount from the user
 cout << "Enter the meal amount: ";
 cin >> meal_amount;

 // Calculate tax amount
 tax_amount = get_sales_tax_amount(meal_amount);

 // Capture tip rate from the user
 cout << "Enter the tip rate (as a percentage): ";
 cin >> tip_rate;

 // Calculate tip amount
 tip_amount = get_tip_amount(meal_amount, tip_rate);

 // Calculate total amount
 total = meal_amount + tax_amount + tip_amount;

 // Display the receipt
 cout << "\nReceipt:\n";
 cout << "Meal Amount:   " << meal_amount << endl;
 cout << "Sales Tax:     " << tax_amount << endl;
 cout << "Tip Amount:    " << tip_amount << endl;
 cout << "Total:         " << total << endl;

 return 0;
}