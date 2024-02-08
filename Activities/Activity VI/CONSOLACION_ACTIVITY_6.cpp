#include <iostream>
using namespace std;

int main(){
    string response;
    int totalPrice = 0;

    cout << "Do you want to start the transaction? (yes/no): ";
    getline(cin, response);

    while (response == "yes"){
        int price;
        cout << "Enter the amount: ";
        cin >> price;

        totalPrice += price;

        cout << "Do you want to continue? (yes/no)" << endl;
        cin.ignore();
        getline(cin, response);
    }
    cout << "The total amount is: " << totalPrice << endl;
}