#include <iostream>
using namespace std;
int main () {
    int age;
    cout << "Free: 0-3" << endl;
    cout << "Discounted: 4-6" << endl;
    cout << "Normal: 7+" << endl;
    cout << "Enter your age:";
    cin >> age;
    if (age <= 3) {
        cout << "You are free!";
    } else if (age >=4 && age <=6) {
        cout << "You are discounted!";
    } else if (age >= 7) { 
        cout << "You are at a normal age.";
    }
   
}
