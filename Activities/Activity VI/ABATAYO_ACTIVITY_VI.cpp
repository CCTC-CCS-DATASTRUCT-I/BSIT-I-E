#include <iostream>
using namespace std;

int main () {
    string responsse;
    int totalPrice = 0;
    cout << "Do you want to start the transportation?(yes/no):";
    
    getline(cin,responsse);

  while(responsse == "yes"){
    int price;
    cout << "Enter the amount:";
    cin >> price;

    totalPrice += price;

    cout << "do you want to continue?(yes/no):" <<endl;
    cin.ignore();
    getline(cin,responsse);


  }
  cout << "The total amount is: " << totalPrice << endl;



}
