#include <iostream>
using namespace std;

int  main() {
    int num2;
    int num3;

    cout << "Enter first number: ";
    cin >> num2;
    cout << "Enter second number:";
    cin >> num3;

    int sum = num2 + num3;
    int diff = num2 - num3;
    int prod = num2 * num3;

    cout << "sum =  " << sum  << endl;
    cout << "diff = " << diff << endl;
    cout << "prod = " << prod << endl;

}