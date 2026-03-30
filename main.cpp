#include "functions.h"


int main() {
    int n;  // Variable to store user input

    // Ask user to enter a number
    cout << "Enter a number: ";
    cin >> n;

    // Display sum of squares from 1 to n
    cout << "Sum of squares: " << sumOfSquares(n);

    // Display factorial of the number
    cout << "\nFactorial: " << findFactorial(n);

    return 0;  // Indicate successful program execution
}