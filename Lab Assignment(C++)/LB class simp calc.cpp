#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator
{
  public:
    // Function for addition
    double add(double a, double b)
    {
        return a + b;
    }

    // Function for subtraction
    double subtract(double a, double b)
    {
        return a - b;
    }

    // Function for multiplication
    double multiply(double a, double b)
    {
        return a * b;
    }

    // Function for division
    double divide(double a, double b)
    {
        if (b != 0)
            return a / b;
        else
        {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

// Main function
int main()
{
    Calculator calc; // Create object of Calculator

    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Using object to call the member functions
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;

    return 0;
}
