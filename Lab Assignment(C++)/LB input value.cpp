#include <iostream>
#include <string>  // For string data type

using namespace std;

int main()
{
    string name;
    int age;

    // Asking user for their name
    cout << "Enter your name: ";
    getline(cin, name); // Allows full name with spaces

    // Asking user for their age
    cout << "Enter your age: ";
    cin >> age;

    // Displaying personalized greeting
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
