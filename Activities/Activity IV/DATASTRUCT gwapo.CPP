#include <iostream> 
using namespace std;

int main(){
    int coffee = 1;
    switch(coffee){
    case 1:
    cout<< "expresso";
        break;
    case 2:
    cout<< "americano";
        break;
    case 3:
    cout<< "cappuccino";
        break;

    
    default:
    cout<< "latte";
        break;
    }
    
}