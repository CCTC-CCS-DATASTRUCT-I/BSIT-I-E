#include <iostream>
using namespace std;

int main(){
    string answer ;
   double total;
    cout << "Do you want to start the transaction? (yes/no)";
    cin >> answer ;


   while(answer == "yes"){
    double price;

    cout << "Enter amount: ";
    cin >> price;

    total += price;

    cout << " Do you want to proceed? (yes?no) ";
    cin  >> answer ;

   }
   cout << "total amount:" << total << endl;
}
