#include <iostream>
using namespace std;

int main(); {
    int age;
    cout << "enter your age: "; 
    cin << "age";
    cout << ("free, Discounted, normal");
    if (age >= 3){
        cout << " free ticket";
    }else if(age >= 4){
         cout << "you are discounted";
    }else if (age >= 7) {
         cout << " just a normal payment";
    }
  }