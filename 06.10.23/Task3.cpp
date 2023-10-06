#include <iostream>

using namespace std;

class Rectangle
{
public:
    int height;
    int footing;

    Rectangle(int _height, int _footing) // Constructor
    {
        height = _height;
        footing = _footing;
    }

    ~Rectangle() // Destructor
    {

    }

    int Area() // Method
    {
        return 0;
    }
};

class Pyramid : public Rectangle
{
    Pyramid(int height, int footing) : Rectangle(height, footing) {}

    int PyramidArea()
    {
        return 0;
    }
    int Volume()
    {
        return 0;
    }
};

int main()
{
    cout<<"Hello World";

    return 0;
}
