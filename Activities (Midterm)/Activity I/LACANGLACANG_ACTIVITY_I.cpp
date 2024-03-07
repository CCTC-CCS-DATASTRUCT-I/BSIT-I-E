#include <iostream>
using namespace std;

int main(){
    string name[5];

     for(int i = 0; i < 5; i++){
        cout<< " Enter name :" <<(i + 1) <<":"<<endl;
        cin>>name[i];

     }
     cout<<" enter the list of the name "<<endl;
     int  position;
     cin>>position;
     if ( position >=1 && position <=5){
        cout<<" you have selected " << name[position-1]<<endl;

     }else{
        cout<<("invalid");
     }

}