#include<iostream>
using namespace std;

class Train{
    int trainNo;
    string trainName;
    string source;
    string destinition;
    string trainTime;

    public:
            static int count;

           void gettraindetail(){
                cout<<"\nEnter TrainNo:";
                cin>>trainNo;

                cin.ignore();
                cout<<"Enter trainName:";
                getline(cin,trainName);

                cout<<"Enter source:";
                getline(cin,source);

                cout<<"Enter destinition:";
                getline(cin,destinition);

                cout<<"Enter Traintime:";
                getline(cin,trainTime);

                count++;
                cout<<"\nAdded Record Sucessfully..";
           }

           void displaytrainInfo(){
                cout<<"TRAINNO:"<<trainNo<<endl;
                cout<<"TRAINNAME:"<<trainName<<endl;
                cout<<"SOURCE:"<<source<<endl;
                cout<<"DESTINITION:"<<destinition<<endl;
                cout<<"TRAINTIME:"<<trainTime<<endl;
           }

           int gettrainNo(){
                    return trainNo;
           }
};

int Train ::count =0;


int main(){
    Train t1[100];

    int i,choice,searchNo;

    bool found=false;


    do{
        cout<<"\n\n--||TRAIN RESERVATION SYSTEM||--"<<endl;
        cout<<"\n1.Add New Train record!..";
        cout<<"\n2.Display All Train Record!..";
        cout<<"\n3.Search Train By Number!..";
        cout<<"\n4.Exit.";

        cout<<"\n\nEnter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                if(Train::count < 100){
                    t1[Train::count].gettraindetail();
                }
                else{
                    cout<<"\nRecord System is Full!!..";
                }
                break;
            case 2:
                if(Train:: count == 0){
                    cout<<"\nNo Train Record Found!!.";
                }
                else{
                    for(i=0;i<Train::count;i++){
                        cout<<"\n--||Train"<<i+1<<"||--"<<endl;
                        t1[i].displaytrainInfo();
                    }
                }
                break;
            
            case 3:
                if(Train::count == 0){
                    cout<<"\nNo Train Record Found!..";
                }
                else{
                    cout<<"Enter Train No:";
                    cin>>searchNo;

                    found= false;

                    for(i=0;i<Train::count;i++){
                        if(t1[i].gettrainNo() == searchNo);
                        found = true;
                        t1[i].displaytrainInfo();
                        break;
                    }
                    if(!found){
                        cout<<"\nTrain Record Not Found!..";
                    }
                }
                break;
            
            case 4:
                cout<<"\nThank you for Train Reservation..";
                break;

            default:
                    cout<<"\nInvalid Choice...."<<endl;
        }

    }
    while(choice != 4);
    return 0;
}