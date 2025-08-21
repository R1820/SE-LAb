#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

// Function to demonstrate local scope
void showLocal()
{
    int localVar = 10;  // Local variable
    cout << "Inside showLocal() - Local variable: " << localVar << endl;
    cout << "Inside showLocal() - Global variable: " << globalVar << endl;
}

// Another function to show variable scope
void modifyGlobal()
{
    globalVar += 50;  // Modifying the global variable
    cout << "Inside modifyGlobal() - Modified global variable: " << globalVar << endl;
}

int main()
{
    int localVar = 5;  // Local variable in main()

    cout << "Inside main() - Local variable: " << localVar << endl;
    cout << "Inside main() - Global variable: " << globalVar << endl;

    // Call functions
    showLocal();
    modifyGlobal();

    // Check value after modification
    cout << "Back in main() - Global variable after modification: " << globalVar << endl;

    return 0;
}
