
#include <iostream>
using namespace std;

// Abstract class
class Shape
{
protected:
    float l;

public:
    void getData()
    {
        cin >> l;
    }

    // virtual Function
    virtual float calculateArea() = 0;
};

class Square : public Shape
{
public:
    float calculateArea()
    {
        return l * l;
    }
};

class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * l * l;
    }
};

int main()
{
    Square s;
    Circle c;

    cout << "Enter length to calculate the area of a square: ";
    s.getData();
    cout << "Area of square: " << s.calculateArea();
    cout << "\nEnter radius to calculate the area of a circle: ";
    c.getData();
    cout << "Area of circle: " << c.calculateArea();

    return 0;
}