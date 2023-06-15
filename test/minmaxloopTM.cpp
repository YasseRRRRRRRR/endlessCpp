#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int sum = 0;
    int userInput;
    vector<int> inputs;
    
    //get the numbers from the user and store them in the array
    while(true) {
        cout << "Enter a number: (-1 to quit)";
        cin >> userInput;

        if(userInput == -1) {
            break;
        }

            inputs.push_back(userInput);
    }
    //calculate sum for the avereage    
    for(int i = 0; i < inputs.size(); i++) {
        sum += inputs[i];
    }
    float average = static_cast<float>(sum) / inputs.size();

    //min and max calculation this is efficent for large ammount 
    //of numbers but the one in the other example is more efficient for less ammount of number
    auto min = min_element(inputs.begin(), inputs.end());
    auto max = max_element(inputs.begin(), inputs.end());


    cout << "The minimum element is " << *min << endl;
    cout << "The maximum element is " << *max<< endl;
    cout << "The sum of all is " << sum;
    cout << "The avereage of all is " << average;
    
    return 0;
}