#include<iostream>
using namespace std;

int main(){

    int num[5]={10,20,30,40,50};
    int index;

    try{
        cout<<"Enter an index:";
        cin>>index;

        if(index >= 5 || index < 0){
            throw "invalid index number!..";
        }
        cout<<"Element is:"<<num[index]<<endl;
    }

    catch(const char *msg){
        cout<<"Errorr"<<msg<<endl;

    }

    return 0;
}