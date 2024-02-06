#include <iostream> 
using namespace std;

string geTicketCategory(int age) {
    if (age >= 0 && age <= 3) {
        return "Free Ticket";
    else if (age >= 4 && age <= 6) {
        return "Discounted Ticket";
    else {
        return "Normal Ticket";
        
    }
    }
    }
}