#include <iostream.

using namespace std;
int main(){
    int num1;
    int num2;

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    int sum = num1 + num2;
    int diff = num1 / num2;
    int prod = num1 * num2;

    cout << "sum =" << sum <<endl;
    cout << "diff =" << diff <<endl;
    cout << "prod =" << prod <<endl;
    
    return 0;
}