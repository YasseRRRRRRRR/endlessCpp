#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>


using namespace std;


int main() {
    //elapsedSeconds since jan 1 1970 
    long elapsedSeconds = time(nullptr);

    srand(elapsedSeconds);
    //random number under 10
    int numb = rand() % 10;
    cout << numb;

    double result = pow(2,3);
    cout << result;
   
    return 0;
}   
