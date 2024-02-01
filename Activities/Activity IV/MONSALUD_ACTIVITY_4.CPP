#include <iostream>
using namespace std;
int main () {
    char coffee;
    cout << "choose your coffee (1. espresso, 2. americano, 3. cappuccino, 4. latte): ";
    cin >> coffee;
    switch (coffee) {
        case '1':
        cout << "espresso";
        break;
        case '2':
        cout << "americano";
        break;
        case '3':
        cout << "cappuccino";
        break;
        case '4':
        cout << "latte";
        break;
        default:
        cout << "invalid choice";
    }

}