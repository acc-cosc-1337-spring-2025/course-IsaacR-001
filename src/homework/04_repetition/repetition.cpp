#include "repetition.h"

// Function to calculate factorial
int factorial(int num) 
{
    int result = 1; // Initialize result to 1

    // Multiply result by num, then decrement num until it reaches 1
    while (num > 0) 
    {
        result *= num;
        num--;
    }

    return result; // Return the final result
}

// Function to calculate GCD
int gcd(int num1, int num2) 
{
    // Loop until both numbers are equal
    while (num1 != num2) 
    {
        // If num1 is smaller, swap num1 and num2
        if (num1 < num2) 
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        // Subtract num2 from num1 if num1 is larger
        if (num1 > num2) 
        {
            num1 -= num2;
        }
    }

    return num1; // Return the GCD
}