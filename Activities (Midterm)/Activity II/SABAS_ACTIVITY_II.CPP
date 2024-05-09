 #include <iostream>

using namespace std;

int main() {
    double scores[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
    }
    
    double sum = 0;
    for (double score : scores) {
        sum += score;
    } 
    double average = sum / 10;
    cout << "Average: " << average << endl;

    return 0;
}