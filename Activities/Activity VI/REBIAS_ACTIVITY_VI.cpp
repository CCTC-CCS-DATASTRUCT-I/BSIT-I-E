#include <iostream>
using namespace std;

int main() {
    int price;
    cout << "Do you want to start the transaction?"; // Type yes or no and press enter
    cin >> amount; // Get user input from the keyboard
    int price1 = 0;
    int price2 = 0;

    while(price2 <= amount){
        price1+=price2;
        price2++;
    }
    cout << price1;
}


