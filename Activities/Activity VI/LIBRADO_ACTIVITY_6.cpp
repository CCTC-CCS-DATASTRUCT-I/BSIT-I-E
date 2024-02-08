#include <iostream>
using namespace std;

int main() {
   
    string answer;
    double totalPrice;
    double price; 
    cout << "Do you want to start the transaction? (yes/no): ";
    cin >> answer;
    while (answer == "yes") { 
        cout << "Enter the amount: ";
        cin >> price;    
        totalPrice += price;    
        cout << "Do you want to continue? (yes/no): ";
        cin >> answer;
    }

    cout << "Total amount: " << totalPrice << endl;

   
}
