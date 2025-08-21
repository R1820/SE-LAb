#include <iostream>
using namespace std;

// Recursive function to calculate factorial
long long factorial(int n)
{
    if (n <= 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0)
        {
           cout << "Error: Factorial of a negative number doesn't exist." << endl;
        }
    else
    {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}
