#include <iostream>
using namespace std;

class Animal {
public:
    // Pure virtual functions
    virtual void sound() = 0;
    virtual void move() = 0;
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }

    void move() override {
        cout << "Dog runs" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird chirps" << endl;
    }

    void move() override {
        cout << "Bird flies" << endl;
    }
};

int main() {
    Animal* animals[2];

    Dog d;
    Bird b;

    animals[0] = &d;
    animals[1] = &b;

    for (int i = 0; i < 2; i++) {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}