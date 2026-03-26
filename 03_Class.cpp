#include<iostream>
using namespace std;

class Employe{

    private:
        //  data member
        int EmployeId;
        string Employename;
        float Percentage;

    public:
        // member function
        void getEmployedata(){
            cout<<"Enter EmployeId:";
            cin>>EmployeId;

            cout<<"Enter Employename:";
            cin>>Employename;

            cout<<"Enter Percentage:";
            cin>>Percentage;
        }

        void printEmployedata(){
            cout<<"\n--|| Employedata ||--"<<endl;
            cout<<"EmployeId:"<<EmployeId<<endl;
            cout<<"Employename:"<<Employename<<endl;
            cout<<"Percentage:"<<Percentage<<endl;
        }
};

int main(){

    Employe M1;
    M1.getEmployedata();
    M1.printEmployedata();
    return 0;
}