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
           cout << "Error: Division by zero is not allowed." << endl;
           return 0;
        }
}

int main()
{
    float num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Call the appropriate function based on user input
    switch(op)
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
