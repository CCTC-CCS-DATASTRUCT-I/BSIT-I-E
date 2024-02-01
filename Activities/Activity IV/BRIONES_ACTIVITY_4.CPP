#include <iostream>
using namespace std;

int main()
{
    int Coffee;
    cout<<"Espresso,Americano,Cappuccino,Latte";
    cin>> Coffee;

    switch(Coffee){
        case 1:
        cout<<"Espresso";
        break;
        case 2:
        cout<<"Americano";
        break;
        case 3:
        cout<<"Cappuccino";
        break;
        case 4:
        cout<<"Latte";
        break;
        defualt:
        cout<<"gwapo ka";
    }

}