#include <iostream>
using namespace std;

int main(){
    double  amount;
    double total;
    string answer;
    cout<<"Do you want to start the transaction? (yes/no)" <<endl;
    
    cin >> answer;
    while (answer == "yes"){
      cout<< "Enter the amount:" << endl;
      cin>>amount;
      total+=amount;
      
      cout<<"DO you want to continue? (yes/no)" <<endl;
      cin>>answer;
   
    }
    cout<<"The total amount is :"<<total <<endl;
}
 
