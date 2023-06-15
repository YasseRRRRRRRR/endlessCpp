#include <iostream>
#include <io.h>



using namespace std; 
int main()
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;
    int count = 0;
    
    //get the numbers from the user
    while(true)
    {
        cout << "Enter a number (or -1 to quit): ";
        scanf("%d", &userInput);
        cout << "\n";
        
        if(userInput == -1)
        {
            break;
        }
        
        if(userInput > maxNumber)
        {//the biggest number entered so far is the max number
            maxNumber = userInput;
        }
        if(userInput < minNumber)
        {//the lowest number entered so far is the min number
            minNumber = userInput;
        }
        sumTotal = sumTotal + userInput;
        count++;
    }
    cout << "Maximum number = " << maxNumber << "\n";
    cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / count;
    cout << "Average = " << average << "\n";
    return 0;
}