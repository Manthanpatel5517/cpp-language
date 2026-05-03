#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    string designation;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSalary(float s)
    {
        salary = s;
    }

    void setDesignation(string d)
    {
        designation = d;
    }

    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    string getDesignation()
    {
        return designation;
    }
};

int main()
{
    Employee e1;

    e1.setName("Manthan Patel");
    e1.setSalary(50000);
    e1.setDesignation("Full Stack Developer");

    cout << "Employee Name: " << e1.getName() << endl;
    cout << "Salary: " << e1.getSalary() << endl;
    cout << "Designation: " << e1.getDesignation() << endl;

    return 0;
}