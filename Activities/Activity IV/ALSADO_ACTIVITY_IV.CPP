#include <iostream>
 using namespace std;
int main() {
    cout<<"Enter the number corresponding to the coffee type (1. Espresso, 2. Americano, 3. Cappucino 4. Latte ): ";

    switch (choice) {
        case 1:
              cout<< "Espresso" << endl;
        case 2:
              cout<< "Amercano" << endl;
        case 3:
            cout<< "Cappucino" << endl;
        case 4:
            cout<< "Latte" << endl;
            break;
        default:
        cout << "Invalid choice. Plese enter a number between 1 and 4." << endl;
    }
    
}
