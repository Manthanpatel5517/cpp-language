#include<iostream>
using namespace std;

class calc{
    public:
        int add(int a , int b){
            cout<<"Addition:"<<a+b<<endl;
        }

        double add(double a,double b,double c){
            cout<<"Addition:"<<a+b+c<<endl;
        }

        string add(string n,string l){
            cout<<"Addition:"<<n+l<<endl;
        }
        int add(int a,int b,int c,int d){
            cout<<"Addition:"<<a+b+c+d<<endl;
        }
};

int main(){
    calc A;
    A.add(23,26);
    A.add(12,12,12);
    A.add("manthan","patel");
    A.add(14,15,16,15);

    return 0;
}