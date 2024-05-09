#include <iostream>
using namespace std;

int name(){
    int arraySize = 5;
    string names[arraySize];

    for (int i = 0; i < arraySize; i++) {
        cout << "Enter name " << (i + 1) << ": ";
        (cin,names[i]);
    }

    cout<< "Enter the number on the list of the names you want to display: ";
    int position;
    cin >> position;
     
     if (position >= 1 && position <= arraySize) {
        cout << "You have selected: " << names[position - 1] << endl;
     } else {
        cout << "Invalid Index" << endl;
     }
}
