    #include <iostream>
    using namespace std;

    int main() {
    double sum = 0.0;
    std::string userInput;

    do {
        double number;
        
        std::cout << "Enter a Number : ";
        std::cin >> number;
        
        sum += number;

        std::cout << "Do you want to continue? (yes/no): ";
        std::cin >> userInput;
    } while (userInput == "yes" || userInput == "Yes" || userInput == "YES");
    std::cout << "The total amount is: " << sum << std::endl;
    return 0;
}