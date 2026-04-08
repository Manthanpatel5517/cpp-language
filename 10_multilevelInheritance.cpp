#include<iostream>
using namespace std;

class Employee{
    int empId;
    string empName;
    int completeTask;
    int pendingTask;

    public:
          void getemployeedata(int id,string name,int C_task,int P_task){
            empId = id;
            empName = name;
            completeTask = C_task;
            pendingTask = P_task;
          }

          void displayemployeReport(){
            cout<<"\n--||EMPLOYEEREPORT--||"<<endl;
            cout<<"EMPID:"<<empId<<endl;
            cout<<"EMPNAME:"<<empName<<endl;
            cout<<"COMPLETETASK:"<<completeTask<<endl;
            cout<<"PENDINGTASK:"<<pendingTask<<endl;

          }
};

class Manager:public Employee{
    int managerId;
    string managerName;

    public:
           void getmanagerdata(int Id,string Name){
             managerId = Id;
             managerName = Name;
           }

           void displaymanagerinfo(){
            cout<<"\n--||MANAGERDETAIL||--"<<endl;
            cout<<"MANAGERID:"<<managerId<<endl;
            cout<<"MANAGERNAME:"<<managerName<<endl;
           }
};

class CEO:public Manager{
    string ceo_Name;

    public:
           void getCEOdata(string Name){
            ceo_Name = Name;
           }

           void displayCEOinfo(){
            cout<<"\n--||CEODETAIL||--"<<endl;
            cout<<"CEO_NAME:"<<ceo_Name<<endl;
           }
};
int main(){
    CEO c1;

    c1.getCEOdata("Manthan patel");
    c1.getmanagerdata(1100,"Darshil chaudhary");
    c1.getemployeedata(1,"jaynti Thakor",12,8);

    c1.displayCEOinfo();
    c1.displaymanagerinfo();
    c1.displayemployeReport();

    return 0;
}