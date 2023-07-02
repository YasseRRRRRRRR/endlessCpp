#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int searchArray[10] = {324, 4567, 6789, 5421345, 7, 65, 8965, 12, 342, 485};
    int searchKey, location;
    
    cout << "Give us a number and we'll see if it's in the array (-1 to exit): ";
    cin >> searchKey;
    
    while (searchKey != -1)
    {
        location = -1; // Reset location for each search
        
        for (int j = 0; j < 10; j++)
        {    
            if (searchKey == searchArray[j])  
            {
                location = j;
                break;
            }
        }
        
        if (location != -1)
        {
            cout << "The number " << searchKey << " is at location " << location << " in the array." << endl;
        }
        else
        {
            cout << "The number " << searchKey << " is not in the array." << endl;
        }
        
        cout << "Give us a number and we'll see if it's in the array (-1 to exit): ";
        cin >> searchKey;
    }
    
    return 0;
}