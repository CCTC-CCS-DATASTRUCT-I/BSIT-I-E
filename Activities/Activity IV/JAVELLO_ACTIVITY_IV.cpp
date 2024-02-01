#include <iostream>
using namespace std;
int main () {
    
    int coffee;
    cout << "choose your coffee (1. espreso, 2. americano, 3. cappuccino, 4. latte): ";
    cin >> coffee;
    switch (coffee) {
        case '1':
        cout << "espreso";
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