#include <iostream>
using namespace std;

int main()
{
    // The computer selects a random number between a specified range
    // (e.g., 1 to 100).
    srand(time(0));
    int number = rand() % 100;
    int guess;
    // The player has a limited number of attempts to guess the number.
    int counter = 0;

    while (counter <= 4)
    {
        cout << "pick a number from 1 to 100";
        cin >> guess;
        // After each guess, the game provides feedback to the player whether
        // their guess was too high, too low, or correct.
        if (guess > number)
        {
            cout << "too high there buddy \n";
            counter++;
            cout << "try again";
        }
        else if (guess < number)
        {
            cout << "too low there buddy \n";
            counter++;
            cout << "try again";
        }
        else if (guess == number)
        {
            cout << "spot on";
            break;
        }
    }
}
