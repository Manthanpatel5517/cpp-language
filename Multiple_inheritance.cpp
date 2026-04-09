#include<iostream>
using namespace std;

class employee1{
    int emp_1_Id;
    string emp_1_Name;
    string emp_1_Salary;

    public:
           void getemployee1detail(){
            cout<<"\nEnter emp_1_Id:";
            cin>>emp_1_Id;

            cin.ignore();
            cout<<"Enter emp_1_Name:";
            getline(cin,emp_1_Name);

            cout<<"Enter emp_1_Salary:";
            getline(cin,emp_1_Salary);
           }

           void displayemployee1info(){
            cout<<"\n--|EMPLOYEE[1]DETAIL|--"<<endl;
            cout<<"EMP_1_ID:"<<emp_1_Id<<endl;
            cout<<"EMP_1_NAME:"<<emp_1_Name<<endl;
            cout<<"EMP_1_SALARY:"<<emp_1_Salary<<endl;

           }

};

class employee2{
    int emp_2_Id;
    string emp_2_Name;
    string emp_2_Salary;

    public:
           void getemployee2detail(){
            cout<<"\nEnter emp_2_Id:";
            cin>>emp_2_Id;

            cin.ignore();
            cout<<"Enter emp_2_Name:";
            getline(cin,emp_2_Name);

            cout<<"Enter emp_2_Salary:";
            getline(cin,emp_2_Salary);
           }

           void displayemployee2info(){
            cout<<"\n--||EMPLOYEE[2]DETAIL||--"<<endl;
            cout<<"EMP_2_ID:"<<emp_2_Id<<endl;
            cout<<"EMP_2_NAME:"<<emp_2_Name<<endl;
            cout<<"EMP_2_SALARY:"<<emp_2_Salary<<endl;
           }
};

class employee3{
    int emp_3_Id;
    string emp_3_Name;
    string emp_3_Salary;

    public:
           void getemployee3detail(){
            cout<<"\nEnter emp_3_Id:";
            cin>>emp_3_Id;

            cin.ignore();
            cout<<"Enter emp_3_Name:";
            getline(cin,emp_3_Name);

            cout<<"Enter emp_3_Salary:";
            getline(cin,emp_3_Salary);
           }

           void displayemployee3info(){
            cout<<"\n--|||EMPLOYEE[3]DETAIL|||--"<<endl;
            cout<<"EMP_3_ID:"<<emp_3_Id<<endl;
            cout<<"EMP_3_NAME:"<<emp_3_Name<<endl;
            cout<<"EMP_3_SALARY:"<<emp_3_Salary<<endl;
           }
};

class manager:public employee1,public employee2,public employee3{
    string Name;
    
    public:
        void getmanagerdetail(string name){
            Name = name;
        }

        void displaymanagerdetail(){
            cout<<"\n\n--||MANAGERDETAIL||--"<<endl;
            cout<<"NAME:"<<Name<<endl;
        }
};



int main(){

    manager m1;

    m1.getemployee1detail();
    m1.getemployee2detail();
    m1.getemployee3detail();

    m1.getmanagerdetail("manthan patel");
    m1.displaymanagerdetail();

    m1.displayemployee1info();
    m1.displayemployee2info();
    m1.displayemployee3info();



    return 0;
}