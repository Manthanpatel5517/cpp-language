#include<iostream>
using namespace std;

class Timeconverter{

    int Hours,Minutes,Seconds;

    public:
         void getdata(){
            cout<<"Enter Hours:";
            cin>>Hours;

            cout<<"Enter Minutes:";
            cin>>Minutes;

            cout<<"Enter Seconds:";
            cin>>Seconds;
         }

         void printdata(){
            int Totalseconds = (Hours*3600) + (Minutes*60) + Seconds;
            cout<<"Totalseconds:"<<Totalseconds;
         }
};

int main(){

    Timeconverter m1;

    m1.getdata();
    m1.printdata();

    return 0;
}