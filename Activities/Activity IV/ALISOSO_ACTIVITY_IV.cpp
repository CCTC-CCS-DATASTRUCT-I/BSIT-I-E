#include <iostream>
using namespeace std;
int main () {
    int coffee;
    cout << "choice your coffee (Espresso,Americano,Cappucino,Latte:) ";
    
    cin>>coffee;
    switch (coffee) {
        case 1:
        cout << "Espresso";
        break;
        case 2:
        cout << "Americano";
        break;
        case 3:
        cout << "Cappucino";
        break;
        case 4:
        cout << "Latte";
        break;
        default:
        cout << "Invalid choice";
    }
}