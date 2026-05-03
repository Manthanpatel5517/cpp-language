#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;

public:
    void setlength(float l)
    {
        length = l;
    }

    void setwidth(float w)
    {
        width = w;
    }

    float getlength()
    {
        return length;
    }
    float getwidth()
    {
        return width;
    }
    float calculatearea()
    {
        return length * width;
    }
};

int main()
{

    Rectangle r1;

    r1.setlength(10.5);
    r1.setwidth(5.2);

    cout << "Length: " << r1.getlength() << endl;
    cout << "Width: " << r1.getwidth() << endl;

    cout << "\nArea of Rectangle=" << r1. calculatearea() << endl;

    return 0;
}