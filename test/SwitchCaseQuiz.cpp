/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>

using namespace std;

int main()
{
    char opperator;
    float in1, in2;
    float result;
    cout<<"Enter two numbers:\n";
    cin >> in1;
    cin >> in2;
    cout << in1 << " " << in2 <<endl ;
    
    cout << "Enter the operation '+','-','*','/':\n";
    cin >> opperator ;
    cout<< endl;

    
    switch(opperator)
    {
        
        case('+'):
        {
            result = in1 + in2;
            cout<< "result is: " <<result;
            break;
        }
        case('-'):
       {
            result = in1 - in2;
            cout<< "result is: " <<result;
            break;
        }
        case('*'):
       {
            result = in1 * in2;
            cout<< "result is: " <<result;
            break;
        }
        case('/'):
       {
            result = in1 / in2;
            cout<< "result is: " <<result;
            break;
        }
    }
    
    return 0;
}