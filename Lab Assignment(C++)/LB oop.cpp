#include <iostream>
using namespace std;

// Class to represent a Rectangle
class Rectangle
{
   private:
      int length;
      int width;

   public:

    // Method to set dimensions
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle rect;
    int l, w;

    cout << "Enter the length of the rectangle: ";
    cin >> l;

    cout << "Enter the width of the rectangle: ";
    cin >> w;

    rect.setDimensions(l, w);

    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
