#include <iostream>

using namespace std;
int main()
{
    int num1;
    int num2;

    cout << "Enter the fist number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int Sum = num1 + num2;
    int Sub = num1 - num2;
    int Mul = num1 * num2;

    cout << "Sum = " << Sum <<endl;
    cout << "Sub = " << Sub <<endl;
    cout << "Mul = " << Mul <<endl;

    return 0;
}