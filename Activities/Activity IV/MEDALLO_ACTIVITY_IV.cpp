#include <iostream>
using namespace std;
int main (){

    int coffee;
    cout <<"choose your coffe (1.Espresso, 2.Americano, 3.Cappuccino, 4.Latte): ";
    cia >> coffee;
    switch (coffee) {
        case "1";
        cout <<"Espresso";
        case "2";
        cout <<"Americano";
        case "3";
        cout <<"Cappuccino";
        case "4";
        cout <<"Latte";
        break;
       
        default;
        cout <<"Invalid choices";
    }  
}