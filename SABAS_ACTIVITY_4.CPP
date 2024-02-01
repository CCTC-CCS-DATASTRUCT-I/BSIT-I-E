#include <iostream>
using namespace std;

int main(){
    char coffee;
    int Coffee;
    cout<<"choose your coffee (1.Espresso 2.Americano 3.Cappuccino 4.Latte): ";
    cin>> Coffee;
    switch(Coffee){
        case 1:
        cout << "Espresso";
        break;
        case 2:
        cout << "Americano";
        break;
        case 3;
        cout << "Cappuccino";
        case 4:
        cout << "Latte";
        break;
        default:
        cout << "Invalid choice:";
    }
}