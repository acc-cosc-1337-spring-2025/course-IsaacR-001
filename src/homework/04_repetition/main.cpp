#include <iostream>
#include "repetition.h"

using namespace std;

int main() 
{
    int choice;
    char confirm;

    do 
    {
        cout << "1-Factorial" << endl;
        cout << "2-Greatest Common Divisor" << endl;
        cout << "3-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) 
        {
            int num;
            cout << "Enter a number to calculate its factorial: ";
            cin >> num;
            cout << "Factorial of " << num << " is: " << factorial(num) << endl;
        } 
        else if (choice == 2) 
        {
            int num1, num2;
            cout << "Enter two numbers to find their GCD: ";
            cin >> num1 >> num2;
            cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
        } 
        else if (choice == 3) 
        {
            cout << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y') 
            {
                break;
            }
        } 
        else 
        {
            cout << "Invalid choice. Please try again." << endl;
        }
    } 
    while (true);

    return 0;
}