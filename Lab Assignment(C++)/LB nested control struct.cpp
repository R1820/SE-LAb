#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Ask user for the number of rows
    cout << "Enter the number of rows for the triangle: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; ++i)
        {
          // Inner loop to print stars
          for (int j = 1; j <= i; ++j)
          {
             cout << "* ";
          }
          // Move to the next line
          cout << endl;
        }

    return 0;
}
