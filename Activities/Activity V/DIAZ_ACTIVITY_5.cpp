#include <iostream>
using namespace std;

 int main() {
    int age; 

    cout << "Free ticket Age 0-3" << endl;
    cout << "Discounted Age 4-6" << endl;
    cout << "Normal Age 7+" << endl;
    cout << "Enter your Age: ";

    cin >> age;

    if (age <= 3) {
        cout << "You are Free!";
    } else if (age >= 4 && age <= 6) {
        cout << "You are discounted";
    } else if (age >= 7) {
        cout << "You have a normal ticket";
    }
 }
    