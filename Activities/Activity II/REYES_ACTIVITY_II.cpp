#include <iostream>

using namespace std;

int main() 
{
    int num1;
    int num2;

    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    
    int sum = num1 + num2;
    int diff = num1 - num2;
    int prod = num1 * num2;
    
    cout << "Sum = " << num1 + num2;
    cout << "Differince = " << num1 - num2;
    cout << "Product = " << num1 * num2;
}
