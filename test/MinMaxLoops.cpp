#include <iostream>
using namespace std;

int main() {
    int maxNumber = -1; // initialize maxNumber to a very small value
    int minNumber = 101; // initialize minNumber to a very large value
    int sumTotal = 0;
    int count = 0;
    int inputs[15];

    for (int i = 0; i < 15; i++) {
        cout << "Enter a number: ";
        cin >> inputs[i];
        cout << endl;

        if (inputs[i] > maxNumber) {
            maxNumber = inputs[i];
        }
        if (inputs[i] < minNumber) {
            minNumber = inputs[i];
        }
        sumTotal += inputs[i];
        count++;
    }

    double average = static_cast<double>(sumTotal) / count;

    cout << "Inputs: ";
    for (int i = 0; i < count; i++) {
        cout << inputs[i] << " ";
    }
    cout << endl;

    cout << "Max number: " << maxNumber << endl;
    cout << "Min number: " << minNumber << endl;
    cout << "Average: " << average << endl;

    return 0;
}