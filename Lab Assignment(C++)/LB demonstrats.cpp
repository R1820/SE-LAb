#include <iostream>
using namespace std;

int main()
{
    // Constant
    const float PI = 3.14159;

    // Variables of different data types
    int age = 20;
    float radius = 5.5;
    double salary = 50000.75;
    char grade = 'A';
    bool isStudent = true;
    string name = "Ravi";

    // Operations
    float area = PI * radius * radius;
    double yearlySalary = salary * 12;

    // Output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area of Circle: " << area << endl;
    cout << "Monthly Salary: " << salary << endl;
    cout << "Yearly Salary: " << yearlySalary << endl;
    cout << "Value of PI (constant): " << PI << endl;

    return 0;
}
