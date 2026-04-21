#include<iostream>
using namespace std;

class perform{
    public:
        int division(int a,int b){
            cout<<"Division:"<<a/b<<endl;
        }

        int substraction(int a,int b,int c){
            cout<<"Substraction:"<<a-b-c<<endl;
        }

        int multiplication(int a,int b,int c,int d){
            cout<<"Multiplication:"<<a*b*c*d<<endl;
        }

        int addition(int a,int b,int c,int d,int e){
            cout<<"Addition:"<<a+b+c+d+e<<endl;
        }
};

class calculate:public perform{
    public:
         int add(int a,int b){
            cout<<"Division:"<<a/b<<endl;
        }

        int add(int a,int b,int c){
            cout<<"Substraction:"<<a-b-c<<endl;
        }

        int add(int a,int b,int c,int d){
            cout<<"Multiplication:"<<a*b*c*d<<endl;
        }

        int add(int a,int b,int c,int d,int e){
            cout<<"Addition:"<<a+b+c+d+e<<endl;
        }
};


int main(){
    calculate c1;

    c1.add(120,2);
    c1.add(120,100,10);
    c1.add(2,2,2,2);
    c1.add(12,12,12,12,12);


    return 0;
}