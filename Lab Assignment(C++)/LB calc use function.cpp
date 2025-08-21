#include <iostream>
using namespace std;

// Function to add two numbers
float add(float a, float b)
{
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b)
{
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b)
{
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        cout << "Error: Cannot divide by zero." << endl;
        return 0;
    }
}

int main()
{
    float num1, num2;
    char operation;

    // Take input from the user
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    // Call the appropriate function based on the operation
    switch(operation)
    {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }

    return 0;
}
