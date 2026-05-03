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

    virtual void display()
    {
        cout << "Shape Color: " << color << endl;
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

    void display() override
    {
        cout << "Circle Color: " << color << endl;
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
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

    void display() override
    {
        cout << "Rectangle Color: " << color << endl;
        cout << "Rectangle Area: " << length * width << endl;
    }
};

int main()
{
    Shape *shapes[2];

    Circle c;
    c.setColor("Red");
    c.setRadius(5);

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4, 6);

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->display();
        cout << endl;
    }

    return 0;
}