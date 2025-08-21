#include <iostream>
#include <string>
class Car
{
  public:

    std::string brand;
    std::string model;
    int year;

    void drive()
    {
        std::cout << brand << " " << model << " is driving." << std::endl;
    }
};

int main()
{
    // Create an object of the Car class
    Car myCar; // This line creates the object 'myCar'

    // Access attributes and set values
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2023;

    // Call a member function
    myCar.drive(); // Output: Toyota Camry is driving.

    // Create another object
    Car anotherCar;
    anotherCar.brand = "Honda";
    anotherCar.model = "Civic";
    anotherCar.year = 2024;
    anotherCar.drive(); // Output: Honda Civic is driving.

    return 0;
}
