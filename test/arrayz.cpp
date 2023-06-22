#include <iostream>


using namespace std;
int main()  {
    int minNum = 100;
    int maxNum = 0;
    int randNum[15];
    for(int i = 0 ; i < 15 ; i++){
    cout << "Enter a random numbers bb";
    cin >> randNum[i]; cout << endl;

    if(randNum[i] < minNum)
    {
        minNum = randNum[i];
    }
      if(randNum[i] > maxNum)
    {
        maxNum = randNum[i];
    }


    }

    cout << "the minimum number is " << minNum << endl;
    cout << "the maximum number is " << maxNum << endl;
}