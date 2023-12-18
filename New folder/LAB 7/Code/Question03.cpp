// DSA LAB 7
// <---Q3--->

// Write a recursive function which will take input from the user until a special character
// (also selected by the user) is not entered. Then print all the input in reverse.
// Sample Input:
// Enter Special Character: !
// Enter Character: A
// Enter Character: B
// Enter Character: C
// Enter Character: !
// Sample Output: C B A


#include <iostream>
#include <string>

using namespace std;

// Recursive function to read input until a special character is encountered
void readInputAndReverse(char specialCharacter)
{
    char ch;
    cout << "Enter Character: ";
    cin >> ch;

    // Check if the entered character is the special character
    if (ch == specialCharacter)
    {
        // Base case: Stop recursion
        return;
    }

    // Recursive call for the next character
    readInputAndReverse(specialCharacter);

    // Print the entered character after the recursive call (post-order)
    cout << ch << " ";
}

int main()
{
    char specialCharacter;

    // Input the special character
    cout << "Enter Special Character: ";
    cin >> specialCharacter;
    cout << endl;

    // Read input until the special character is encountered and print in reverse
    readInputAndReverse(specialCharacter);
    cout << "Sample Output ";
    cout << endl;

    return 0;
}
