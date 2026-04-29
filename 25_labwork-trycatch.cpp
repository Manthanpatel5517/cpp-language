#include<iostream>
using namespace std;

int main(){

    int age;

    try{
        cout<<"Enter age:";
        cin>>age;

        if(age < 18){
            throw "Not able to vote!..";
        }
    }

    catch(const char *msg){
        cout<<msg<<endl;
    }

    return 0;
}