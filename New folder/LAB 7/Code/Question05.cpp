// DSA LAB 7
// <---Q5--->

// Write a recursive method that for a positive integer n prints odd numbers

// a. between 1 and n
// b. between n and 1


#include <iostream>
using namespace std;
void printOddNumbersUpToN(int n) {
    if (n >= 1) {
        printOddNumbersUpToN(n - 1);
        if (n % 2 != 0) {
            cout << n << " ";
        }
    }
}
void printOddNumbersDownTo1(int n) {
    if (n >= 1) {
        if (n % 2 != 0) {
            cout << n << " ";
        }
        printOddNumbersDownTo1(n - 1);
    }
}
int main() {
    int n;
    do {
        cout << "Enter a positive integer (n): ";
        cin >> n;
    } while (n <= 0);
    cout << "a. Odd numbers between 1 and " << n << ": ";
    printOddNumbersUpToN(n);
    cout << "\nb. Odd numbers between " << n << " and 1: ";
    printOddNumbersDownTo1(n);
    cout << endl;
    return 0;
}
