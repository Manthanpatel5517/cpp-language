#include <iostream>
using namespace std;

class Shape
{
protected:
    string color;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }
};

class Circle : public Shape
{
private:
    float radius;

public:
    void setRadius(float r)
    {
        radius = r;
    }

    float calculateArea()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    float length, width;

public:
    void setDimensions(float l, float w)
    {
        length = l;
        width = w;
    }

    float calculateArea()
    {
        return length * width;
    }
};

int main()
{
    Circle c1;
    c1.setColor("Red");
    c1.setRadius(5);

    Rectangle r1;
    r1.setColor("Blue");
    r1.setDimensions(4, 6);

    cout << "Circle Color: " << c1.getColor() << endl;
    cout << "Circle Area: " << c1.calculateArea() << endl;

    cout << "\nRectangle Color: " << r1.getColor() << endl;
    cout << "Rectangle Area: " << r1.calculateArea() << endl;

    return 0;
}