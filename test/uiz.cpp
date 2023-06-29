//43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 90 87 96 4 55 3 7 2 1 67 89 543 567 985 34 975 890 4567 23 33 9 56 345
//43 32 21 23 43 98 90 65 53 42 69 79 82 7 1 63 64 90 87 96 4 55 3 7 2 1 67 89 543 567 985 34 975 890 4567 23 33 9 56 345 9865
#include <iostream>
#include <stdio.h>


using namespace std;
int main()
{
    int userInput[40];
    cout << "input 40 integers please "<< endl;
    for(int i = 0; i <40; i++)
    {
        cin >> userInput[i]; 
        cout << endl;
        
        
    }
    cout <<  "your inputs are: " << endl;
    for(int i = 0; i < 40; i++)
    {
        cout << userInput[i] << " ";
    }
    return 0;
}