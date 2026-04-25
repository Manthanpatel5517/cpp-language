#include<iostream>
using namespace std;

class Bankaccount{
    int balance;

    public:
        Bankaccount(int b){
            balance = b;
        }

        void operator ++(){
            balance += 1000;
        }

        void displayinfo(){
            cout<<"Your balance is:"<<balance<<endl;
        }
};


int main(){
    Bankaccount b1(5000);

    b1.displayinfo();
    // ++b1;
    b1.operator++();

    b1.displayinfo();

    return 0;
}