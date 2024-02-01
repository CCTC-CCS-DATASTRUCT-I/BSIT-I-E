#include <iostream>
using namespace std;

int main() {
    int coffee;
    cout << "Enter a number (1.Espresso, 2.Americano, 3.Cappuccino, 4.Latte):";
    cin >> coffee;

    switch (coffee){
        case '1':
        cout << 'Espresso';
        break;
        case '2':
        cout << 'Americano';
        break;
        case '3':
        cout << 'Cappuccino';
        case '4':
        cout << 'Latte';
        break;
    }

}