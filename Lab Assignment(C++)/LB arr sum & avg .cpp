#include <iostream>
using namespace std;

int main()
{
    int size;

    // Ask user for number of elements
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];  // Declare array
    int sum = 0;
    float average;

    // Input elements
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
        sum += arr[i];  // Add to sum
    }

    // Calculate average
    average = static_cast<float>(sum) / size;

    // Display results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
