#include <iostream>
using namespace std;

int main() {
    int Arrays = 5;
    string names[Arrays];

    for (int i = 0; i < Arrays; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        getline(cin, names[i]);
    }

    cout << "Enter the number on the list of names you want to display: ";
    int position;
    cin >> position;

    if (position >= 1 && position <= Arrays) {
        cout << "You have selected " << names[position - 1] << "." << endl;
    } else {
        cout << "Invalid index" << endl;
    }

   
}