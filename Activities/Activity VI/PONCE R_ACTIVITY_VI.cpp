#include <iostream>

using namespace std;

int main() {
    double sum;
    double total;
    string answer;

    cout << "Do you want yo start the transaction? (yes/no)" <<
    endl;
    cin >> answer;

    while (answer == "yes") {
        cout << "Enter the amount: " << endl;
        cin >> price;
        total += price;

        cout << "Do you want to continue? (yes/no)" << endl;
        cin >> answer;
    }
    cout << "The total amount is: " << total << endl;


}
