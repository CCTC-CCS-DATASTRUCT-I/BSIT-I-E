#include <iostream>
using namespace std;

int main(){
    int age;
    cout<< "Enter your age";
    cin>>age;

    if(age >=0 && age <=3){
        cout<<"FREE";
    }
    else if(age >=4 && age <=6){
        cout<<"DISCOUNTED";
    }
    else if(age >=7){
        cout<<"NORMAL";
    }
    
}
    
    
        
    



