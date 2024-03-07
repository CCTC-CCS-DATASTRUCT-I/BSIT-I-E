#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        getline(cin, names[i]);
    }

    cout << "Enter the number of the name you would like to select (1-5): ";
    int selectedNumber;
    cin >> selectedNumber;
    cin.ignore(); 

    if (selectedNumber >= 1 && selectedNumber <= 5) {
        cout << "Selected name: " << names[selectedNumber - 1] << endl;
    } else {
        cout << "Invalid selection. Please choose a number between 1 and 5." << endl;
    }

    return 0;
}