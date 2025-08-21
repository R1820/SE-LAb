#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;

int main()
{
    int secretNumber, guess;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the user guesses correctly
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }

        else if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }

        else
        {
            cout << "Congratulations! You guessed the correct number!" << endl;
        }

    } while (guess != secretNumber);

    return 0;
}
