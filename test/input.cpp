#include <iostream>

using namespace std;


int main() {
    double inputDegree;
    double degreeCelcius = (inputDegree * 9) / 5 + 32;
    cout << "what is the temperature outside? ";
    cin >> inputDegree;
    cout << "what" << endl << "oh you mean " << degreeCelcius << " celcius" ;
    return 0;
}   