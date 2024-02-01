
 #include <iostream>
using namespace std;

int main()
{
    int Coffee;
    cout<<"We have 4 coffee flavors please press,1 for Espresso,2 for Americano,3 for Cappuccino,4 for Latte";
    cin>> Coffee;

    switch(Coffee){
        case 1:
        cout<< "Espresso";
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
        default:
        cout<<"tang ina mo";

        
    
        
    }
}