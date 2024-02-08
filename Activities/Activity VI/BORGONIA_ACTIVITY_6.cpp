#include <iostream>
using namespace std;

int main()
{

    string response;
    int totalprice = 0;

    cout << "Do you want to start transaction? (Yes/NO): ";
    getline(cin, response);

    while (response == "yes")
    {
        int price;
        cout << "Enter the amount: ";
        cin >> price;

        totalprice += price;

        cout << "Do you want to continue? (yes/no)" << endl;
        cin.ignore();
        getline(cin, response);
    }

    cout << "The total amout is:" << totalprice << endl;
}