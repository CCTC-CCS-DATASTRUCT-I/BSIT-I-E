#include <iostream> 
using namespace std;
int main() {

  string names[5];

  for(int A = 0; A < names.lenght; A++){
    cout << "enter name "<< (A + 1) ":" <<  endl;
    getline(cin, names[A]);
  }
  cout << " enter the name you would like to select(1-5)";
  int selectionNumber;
  cin >> SelectionNumber;
  cin.ignore();
  if(selectedNumber >= 1 && SelectedNumber <=5 ){
    cout << "Selected name:" << names[selection -1] << endl;
    
  }else{
    cout <<"invalid selection" << endl;
  }
  return 0;
}
