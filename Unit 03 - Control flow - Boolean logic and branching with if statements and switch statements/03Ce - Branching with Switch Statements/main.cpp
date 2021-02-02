#include <iostream>
#include <cmath>
using namespace std;

int main()
{

	char operation;

	cout << "Enter what kind of math operation you want to do:" << endl;
	cout << "+ for addition" << endl;
	cout << "- for subtraction" << endl;
	cout << "* for multiplication" << endl;
	cout << "/ for division" << endl;
	cout << "s for square root" << endl;
	cout << "p for power" << endl;
	cout << endl;

	cout << "Choice: ";
	cin >> operation;

    switch (operation)
    {
    case '+':
    {
        float num1, num2;
        cout << "Enter two numbers, separated by a space: ";
        cin >> num1 >> num2;
        cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    }
    break;

    case '-':
    {
        float num1, num2;
        cout << "Enter two numbers, separated by a space: ";
        cin >> num1 >> num2;
        cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    }
    break;

    case '*':
    {
        float num1, num2;
        cout << "Enter two numbers, separated by a space: ";
        cin >> num1 >> num2;
        cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
    }
    break;

    case '/':
    {
        float num1, num2;
        cout << "Enter two numbers, separated by a space: ";
        cin >> num1 >> num2;
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    }
    break;

    case 's':
    {
        int num;
        cout << "Enter the number to get the square root of: ";
        cin >> num;
        float root = sqrt(num);
        cout << "sqrt(" << num << ") = " << root << endl;
    }
    break;

    case 'p':
    {
        int base, exponent;
        cout << "Enter the base number: ";
        cin >> base;
        cout << "Enter the exponent: ";
        cin >> exponent;
        int result = pow(base, exponent);
        cout << base << "^" << exponent << " = " << result << endl;
    }
    break;

    default:
        cout << "Invalid choice!" << endl;
    }

	return 0;
}