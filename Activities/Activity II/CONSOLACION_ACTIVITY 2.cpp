#include <iostream>

using namespace std;

int main() 
{
    int num1;
    int num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
 
    cout << "Sum = " << sum <<endl;
    cout << "Sub = " << sub <<endl;
    cout << "Mul = " << mul <<endl;

    return 0;
}