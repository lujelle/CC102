#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nResults:\n";

    // Sum
    cout << "Sum: " << num1 + num2 << endl;

    // Difference
    cout << "Difference: " << num1 - num2 << endl;

    // Quotient
    if (num2 != 0) {
        cout << "Quotient: " << num1 / num2 << endl;
    } else {
        cout << "Error: Cannot divide by zero." << endl;
    }

    // Product
    cout << "Product: " << num1 * num2 << endl;

    // Remainder
    cout << "Remainder: " << (int)num1 % (int)num2 << endl;

    return 0;
}