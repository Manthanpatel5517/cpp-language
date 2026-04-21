#include<iostream>
using namespace std;

class Array{
    int *arr;
    int size;

    public:
        Array(int n){
            size = n;
            arr = new int[n];
            cout<<size<<"Number of bytes memory allocated."<<endl;
        }

        void addElement(){
            for(int i=0;i<size;i++){
                cout<<"Enter Element:";
                cin>>arr[i];
            }
        }

        void displayElemnet(){
            cout<<"\nAll Element";
            for(int i=0;i<size;i++){
                cout<<arr[i]<<"|";
            }
            cout<<endl;
        }
        ~Array(){
            delete [] arr;
            cout<<"memory dealloacated successfully..";
        }

};


int main(){
    Array obj(5);
    obj.addElement();
    obj.displayElemnet();
    return 0;
}