#include<iostream>
using namespace std;

class Timeconverter{
    int Totalseconds;

    public:
         void getconverterdata(){
            cout<<"Enter your seconds:";
            cin>>Totalseconds;
         }

         void printcoverterdata(){
            int Hours = Totalseconds / 3600;
            int Minutes = (Totalseconds % 3600) / 60;
            int Second = Totalseconds % 60;

            cout<<"HH:MM:SS";

            if(Hours<10){
                cout<<0<<Hours<<":";
            }
            else{
                cout<<Hours<<":";
            }

            if(Minutes<10){
                cout<<0<<Minutes<<":";
            }
            else{
                cout<<Minutes<<":";
            }

            if(Second<10){
                cout<<0<<Second;
            }
            else{
                cout<<Second;
            }
         }

};


int main(){

    Timeconverter m1;

    m1.getconverterdata();
    m1.printcoverterdata();

    return 0;
}