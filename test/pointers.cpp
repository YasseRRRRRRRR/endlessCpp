/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>


using namespace std;

int main()
{
    int givenInt = 5;
    float givenFloat = 50.5;
    double givenDouble = 6 ;
    std::string givenString = "VH is a terrible person";
    char givenChar;
    
    int *pointertogivenInt = &givenInt;
    float *pointertogivenFloat = &givenFloat;
    double *pointertogivenDouble = &givenDouble;
    std::string *pointertogivenString = &givenString;
    char *pointertogivenChar = &givenChar;
    
    cout<< *pointertogivenInt << " is the addresss and the value of "<< givenInt <<endl;
    cout<< *pointertogivenFloat << " is the addresss and the value of "<< givenFloat <<endl;
    cout<< *pointertogivenDouble << " is the addresss and the value of "<< givenDouble <<endl;
    cout<< *pointertogivenString << " is the addresss and the value of "<< givenString <<endl;
   // cout<< *pointertogivenChar << " is the addresss and the value of "<< givenChar <<endl;
    return 0;
}
