#include<iostream>
using namespace std;

class Demo{
    int num;
    
    public:
        Demo(int n){
            num = n;
        }

        void operator ++(){
            num += 5;
        }

        void printinfo(){
            cout<<"Number is:"<<num<<endl;
        }
};

int main(){
    Demo D(35);

    for(int i=1;i<10;i++){
    
    // ++d;
    D.operator++();
    D.printinfo();
    }
    
    return 0;
}