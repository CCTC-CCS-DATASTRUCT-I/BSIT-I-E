#include <iostream>

using namespace std;

int main() {
    double scores[10];
    double sum = 0;

    cout << "Enter 10 scores:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    double average = sum / 10;
    cout << "Average: " << average << endl;

    return 0;
}
