// ============================================================
//  Simple Console Calculator
//  Author : Amir
//  Date   : June 2026
//  Lang   : C++
//  Desc   : Supports +  -  *  /  % with input validation
//           and divide-by-zero protection.
// ============================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char again = 'y';

    while (again == 'y' || again == 'Y') {

        double num1, num2;
        char op;

        // --- Get first number ---
        cout << "\nEnter the first number  : ";
        cin  >> num1;

        // --- Get operator ---
        cout << "Enter operator (+,-,*,/,%): ";
        cin  >> op;

        // --- Get second number ---
        cout << "Enter the second number : ";
        cin  >> num2;

        // --- Calculate ---
        cout << fixed << setprecision(2);

        if (op == '+') {
            cout << "\nResult: " << num1 << " + " << num2
                 << " = " << num1 + num2 << endl;

        } else if (op == '-') {
            cout << "\nResult: " << num1 << " - " << num2
                 << " = " << num1 - num2 << endl;

        } else if (op == '*') {
            cout << "\nResult: " << num1 << " * " << num2
                 << " = " << num1 * num2 << endl;

        } else if (op == '/') {
            if (num2 == 0) {
                cout << "\nError: Cannot divide by zero." << endl;
            } else {
                cout << "\nResult: " << num1 << " / " << num2
                     << " = " << num1 / num2 << endl;
            }

        } else if (op == '%') {
            // Modulo only works on whole numbers
            int n1 = (int)num1;
            int n2 = (int)num2;
            if (n2 == 0) {
                cout << "\nError: Cannot calculate modulo by zero." << endl;
            } else {
                cout << "\nResult: " << n1 << " % " << n2
                     << " = " << n1 % n2 << endl;
            }

        } else {
            cout << "\nError: Invalid operator. Use +  -  *  /  %" << endl;
        }

        // --- Ask to continue ---
        cout << "\nCalculate again? (y/n): ";
        cin  >> again;
    }

    cout << "\nGoodbye!\n";
    return 0;
}