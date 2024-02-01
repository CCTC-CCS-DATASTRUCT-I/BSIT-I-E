#include <iostream>

using namespace std;

int main(){
    int coffee;
    cout << "Select your coffee ( 1. Espresso, 2.Americano, 3.Cappucinno, 4.Latte): ";
    cin >> coffee;

    switch (coffee){
        case '1':
        cout << "Espresso";
        break;

        case '2':
        cout << "Americano";
        break;

        case '3':
        cout << "Cappucinno";
        break;

        case '4':
        cout << "Latte";
        break;
        
        default:
        cout << "Invalid";
        break;
    }