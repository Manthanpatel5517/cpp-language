#include<iostream>
using namespace std;

int main(){

    int num;

    try{
        cout<<"Enter any number:";
        cin>>num;

        if(num < 0){
            throw "negative Number is not allowed!.";
        }
        cout<<"your num is:"<<num<<endl;
    }
    catch(const char *msg){
        cout<<msg<<endl;
    }

    return 0;
}