#include<iostream>
using namespace std;

int main(){

    int num;

    try{
        cout<<"Enter any number:";
        cin>>num;

        if(num == 0){
            throw "Not allow using 0 to division..";
        }

        cout<<"division is:"<<num / 2<<endl;
    }

    catch(const char *msg){
        cout<<"Error!.."<<msg<<endl;
    }

    return 0;
}