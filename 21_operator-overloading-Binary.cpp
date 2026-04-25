#include<iostream>
using namespace std;

class Number{
    int number;

    public:
        Number(int n){
            number = n;
        }
        bool operator < (Number obj){
            return obj.number;
        }

        void displayinfo(){
            cout<<number<<endl;
        }
};


int main(){

    Number obj1(44),obj2(42);

    if(obj1 < obj2){
        cout<<"maximum number is:";
        obj1.displayinfo();
    }
    else{
        cout<<"maximum number is:";
        obj2.displayinfo();
    }
    return 0;
}