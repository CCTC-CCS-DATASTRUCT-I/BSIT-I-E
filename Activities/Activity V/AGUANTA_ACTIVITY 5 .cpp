
#include <iostream>
using namespace std;

int main () {
    int age;
    
    cout << "Free: Age 0-3 get free tickets." << endl;
    cout << "Discounted: Ages 4-6 get discounted tickets." << endl;
    cout << "Normal: Ages 7+ get a normal ticket." << endl;
    cout << "Enter your age here: ";

    cin >> age;

    if (age >= 0 && age <=3) {
        cout << "You received a trial ticket!";
    } else if (age <= 4 && age <=6) {
       cout << "You received discounted ticket!";
    } else if (age >= 7) {  
       cout << "You received basic ticket!";
    }
}
