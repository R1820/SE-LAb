#include <iostream>
using namespace std;

int main()
{
    // Implicit Type Conversion
    int intVal = 10;
    float floatVal = intVal;  // int to float (implicit)

    cout << "Implicit Type Conversion:" << endl;
    cout << "Integer value: " << intVal << endl;
    cout << "Converted to float: " << floatVal << endl << endl;

    // Explicit Type Conversion
    float num = 9.75;
    int convertedInt = (int)num;  // float to int (explicit)

    cout << "Explicit Type Conversion:" << endl;
    cout << "Float value: " << num << endl;
    cout << "Converted to integer: " << convertedInt << endl;

    return 0;
}
