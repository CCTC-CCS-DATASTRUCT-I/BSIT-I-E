#include <iostream>

using namespace std;
int main()
{
    int num1;
    int num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;

    cout << "sum = " << sum << endl;
    cout << "sub = " << sub << endl;
    cout << "mul = " << mul << endl;

    return 0;
}