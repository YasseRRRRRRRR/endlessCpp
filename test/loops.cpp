/*Write a program that asks a user for five numbers.
**Print out the sum and average of the five numbers.
*/

#include <iostream>
using namespace std;

int main() {
    
    int number[5];
    int sum = 0;
    
    cout << "give me five numbers off the top of your head"<< endl;
    for(int i =0; i<5 ; i++){
        cin >> number[i];
        sum = sum + number[i];
    }
    cout <<"the sum of these numbers ";
    for (int i = 0; i < 5; i++) {
        cout << number[i] << " ";
    }
    cout<< "is " << sum;
    
    
}
