#include<iostream>
using namespace std;

class cricket{
    public:
        virtual void gettotalover(){
            cout<<"Start The Match.."<<endl;
        }
};

class t20Match:public cricket{
    public:
        void gettotalover(){
            cout<<"T20 match total over-20 over."<<endl;
        }
};

class testMatch:public cricket{
    public:
        void gettotalover(){
            cout<<"\nTest match total over-50 over."<<endl;
        }
};


int main(){
    cricket *c;

    t20Match t20;
    c = &t20;
    c->gettotalover();

    testMatch test;
    c = &test;
    c->gettotalover();

    return 0;
}