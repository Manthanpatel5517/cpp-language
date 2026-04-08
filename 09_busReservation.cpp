#include<iostream>
using namespace std;

class Bus{

    int busNo;
    string busName;
    string source;
    string destinition;
    string time;

    public:
          static int count;

          void getbusdata(){
             cout<<"Enter busNo:";
             cin>>busNo;

             cin.ignore();
             cout<<"Enter busName:";
             getline(cin,busName);

             cout<<"Enter source:";
             getline(cin,source);

             cout<<"Enter destinition:";
             getline(cin,destinition);

             cout<<"Enter time:";
             getline(cin,time);

             count++;

          }

          void displaybusdata(){
            cout<<"BUSNO:"<<busNo<<endl;
            cout<<"BUSNAME:"<<busName<<endl;
            cout<<"SOURCE:"<<source<<endl;
            cout<<"DESTINITION:"<<destinition<<endl;
            cout<<"TIME:"<<time<<endl;
          }

          int getbusNo(){
            return busNo;
          }
};

int Bus ::count=0;

int main(){
    Bus buses[100];

    int choice,i,searchNo;

    bool found=false;

    do{
        cout<<"\n\n--==||BUS RESERVATION SYSTEM||==--"<<endl;
        cout<<"\n1.Add Bus Record..";
        cout<<"\n2.display All Buses Record..";
        cout<<"\n3.search Bus by busno..";
        cout<<"\n4.Exit!..";

        cout<<"\n\nEnter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                  if(Bus ::count < 100){
                    buses[Bus :: count].getbusdata();
                  }

                  else{
                    cout<<"record system is full!.."<<endl;
                  }
                  break;

            case 2:
                  if(Bus ::count == 0){
                    cout<<"no buses record found..";
                  }

                  else{
                    for(i=0;i< Bus::count;i++){
                      cout<<"\n--||BUS"<<i+1<<"||--"<<endl;
                      buses[i].displaybusdata();
                    }
                  }
                  break;
            case 3:
                  if(Bus ::count == 0){
                    cout<<"no buses record found";
                  }
                  
                  else{
                    cout<<"Enter searchNo:";
                    cin>>searchNo;

                    found = false;

                    for(i=0;i<Bus::count;i++){
                      if(buses[i].getbusNo() == searchNo){
                        found =true;
                        buses[i].displaybusdata();
                        break;
                      }
                    }
                    if(!found){
                      cout<<"Bus record not found..";
                    }
                  }
                  break;

            case 4:
                  cout<<"Thank you for using Bus Reservation system.."<<endl;
                  break;

            default:
                  cout<<"\nInvalid choice..!!"<<endl;
        }

    }
    while(choice != 4);




    return 0;
}