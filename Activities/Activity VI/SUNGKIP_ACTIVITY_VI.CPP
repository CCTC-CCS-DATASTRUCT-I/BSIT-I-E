#include <iostream>
using namespace std;
int main(){
    
    double price;
    double total;
    string answer;
    while (answer == "no") {
      cout << " do you want to start the transaction? (yes/no)" << endl;
    cin >> answer;

    cout << "enter the amount: " << endl;
    cin >> price;

    total +=price;
    
    cout << "do you want to continue the ? (yes/no)";
    cin >> answer;
  
    }
    cout << " total amount:<< total << endln;
}



