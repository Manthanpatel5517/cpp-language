#include<iostream>
using namespace std;

class user{
    protected:
        string userName;
    
    public:
        void getuser(string name){
            userName = name;
    }
};

class buyer:public user{
    protected:
        int qty;

    public:
        void getbuyer(int quntity){
            qty = quntity;
        }

};

class seller{
    protected:
        int price;

    public:
        void getseller(int p){
            price = p;
        }
};

class final:public buyer,public seller{
    public:
        void displayinfo(){
            int total = price * qty;
            cout<<"||--ORDER INFO--||"<<endl;
            cout<<"CUSTOMER NAME:"<<buyer::userName<<endl;
            cout<<"TOTAL QTY:"<<qty<<endl;
            cout<<"PRICE:"<<price<<endl;
            cout<<"TOTAL PRICE:"<<total<<endl;
        }
};

int main(){
    final F1;

    F1.getuser("Manthan patel");
    F1.getbuyer(5);
    F1.getseller(2000);
    F1.displayinfo();
    return 0;
}