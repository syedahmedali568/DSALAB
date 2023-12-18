// DSA LAB 7
// <---Q2--->

// Write a program and recurrence relation to find the Factorial of n where n>2.

#include <iostream>
using namespace std;

// Function to find the factorial of a number using recursion
unsigned long long factorialRecursive(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorialRecursive(n - 1);
    }
}

int main()
{
    int n;

    // Input the value of n
    cout << "Enter the value of n (n > 2): ";
    cin >> n;

    // Check if n is greater than 2
    if (n <= 2)
    {
        cout << "Invalid input. Please enter n > 2." << endl;
        return 1; // Return an error code
    }

    // Using recursion to find the factorial of n
    cout << "Factorial using recursion: " << factorialRecursive(n) << endl;
    return 0;
}
