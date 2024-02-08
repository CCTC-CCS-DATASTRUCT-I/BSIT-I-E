#include <iostream>
#include <string>
using namespace std;

int main() {
    double sum;
    string userInput;

    do {
        double number;
        
        
        cout << "Enter a number: ";
        cin >> number;

        
        sum += number;

        
        cout << "Do you want to continue? (yes/no): ";
        cin >> userInput;

    } while (userInput == "yes" || userInput == "Yes" || userInput == "YES");

    
    cout << "The total amount is: " << sum << endl;

    return 0;
}