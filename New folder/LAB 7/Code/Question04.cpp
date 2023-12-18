// DSA LAB 7
// <---Q4--->

// Write a recursive function which will raise a number (double) to a non-negative integer
// power n. The function receives the double value and integer as arguments.

#include <iostream>

using namespace std;

// Recursive function to calculate the power of a double value
double power(double base, int exponent) {
    // Base case: Any number raised to the power of 0 is 1
    if (exponent == 0) {
        return 1.0;
    }

    // Recursive case: Multiply the base by the result of the recursive call
    // with a reduced exponent
    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    // Input the base and exponent
    cout << "Enter the base (double): ";
    cin >> base;

    cout << "Enter the exponent (non-negative integer): ";
    cin >> exponent;

    // Check if the exponent is non-negative
    if (exponent < 0) {
        cout << "Invalid exponent. Please enter a non-negative integer." << endl;
        return 1; // Return an error code
    }

    // Calculate and print the result
    double result = power(base, exponent);
    cout << base << " raised to the power " << exponent << " is: " << result << endl;

    return 0;
}
