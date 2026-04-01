#include<iostream>
using namespace std;

class course{
    int courseId;
    string courseName;
    string courseDuration;
    long int courseFees;
    string facultyName;

    public:
         void getdata(){
            cout<<"\nEnter CourseId:";
            cin>>courseId;

            cin.ignore();
            cout<<"Enter courseName:";
            getline(cin,courseName);

            cout<<"Enter courseDuration:";
            cin>>courseDuration;

            cout<<"Enter courseFees:";
            cin>>courseFees;

            cin.ignore();
            cout<<"Enter facultyename:";
            getline(cin,facultyName);


         }
         void printdata();
};

void course::printdata(){
    cout<<"\nCOURSEID:"<<courseId<<endl;
    cout<<"COURSENAME:"<<courseName<<endl;
    cout<<"COURSEDURATION:"<<courseDuration<<endl;
    cout<<"COURSEFEES:"<<courseFees<<endl;
    cout<<"FACULTYNAME:"<<facultyName<<endl;
}
int main(){
    course c1;


    c1.getdata();
    c1.printdata();
    return 0;
}