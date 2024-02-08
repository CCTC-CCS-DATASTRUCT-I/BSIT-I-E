#include <iostream>
using namespace std;

int main() {
    double price;
    double total;
    string answer;
    
    cout << "do you want to start the transaction? (yes or no)" <<
    endl;
    cin >> answer;
    
    while(answer == "yes"){
        cout << "enter amount: " << endl;
        cin >> price;
        total += price;
    }
}
