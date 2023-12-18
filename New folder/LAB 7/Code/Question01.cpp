// DSA LAB 7
// <---Q1--->
// Write a program and recurrence relation to find the Fibonacci series of n where n>2.

#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number using recursion
int fibonacciRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
};

int main() {
    int n;

    // Input the value of n
    cout << "Enter the value of n (n > 2): ";
    cin >> n;

    // Check if n is greater than 2
    if (n <= 2) {
        cout << "Invalid input. Please enter n > 2." << endl;
        return 1; // Return an error code
    }

    // Using recursion to find the nth Fibonacci number
    cout << "Fibonacci series using recursion:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacciRecursive(i) << " ";
    }
    cout << endl;

    return 0;
}
