#include<iostream>
using namespace std;

// base class
class student{

    int studentId;
    string studentname;
    string courseName;

    public:
          void getstudentdata(){
            cout<<"\nEnter studentId:";
            cin>>studentId;

            cin.ignore();
            cout<<"Enter studentName:";
            getline(cin,studentname);

            cout<<"Enter courseName:";
            cin>>courseName;
          }

          void displaystudentdata(){
            cout<<"\n--||STUDENT INFO||--"<<endl;
            cout<<"STUDNETID:"<<studentId<<endl;
            cout<<"STUDENTNAME:"<<studentname<<endl;
            cout<<"COURSENAME:"<<courseName<<endl;

          }


};

// derived calss
class faculty : public student{

    int facultyId;
    string facultyName;

    public:
          void getfacultydata(){
            cout<<"\nEnter facultyId:";
            cin>>facultyId;

            cin.ignore();
            cout<<"Enter facultyName:";
            getline(cin,facultyName);
          }

          void displayfacultydata(){
            cout<<"\n--||FACULTY INFO||--"<<endl;
            cout<<"facultyId:"<<facultyId<<endl;
            cout<<"facultyName:"<<facultyName<<endl;
          }
};

int main(){
    faculty f1;

    f1.getstudentdata();
    f1.getfacultydata();

    f1.displaystudentdata();
    f1.displayfacultydata();
    return 0;
}