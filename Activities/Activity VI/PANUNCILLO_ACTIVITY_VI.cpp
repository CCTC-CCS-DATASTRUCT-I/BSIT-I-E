#include <iostream>
using namespace std;

int main(){
    double price;
    double total;
    string answer;

    cout << " Do you want to start the transaction? (yes/no)"<<
    endl;
    cin >> answer;

    while (answer == "yes"){
        cout << "enter the amount: " << endl;
        cin >> price;
        total +=price;

        cout << "Do you want to start the transaction? (yes/no)" << endl;
        cin >> answer; 
    }
    cout << " THE total amount is: " << total << endl;
}
    