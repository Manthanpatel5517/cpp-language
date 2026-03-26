#include<iostream>
using namespace std;

class Course{

    int CourseId;
    string Coursename;
    int Coursefees;
    string Coursejoiningdate;
    string CourseDuration;

    public:
    void getCoursedata(){
        cout<<"\nEnetr CourseId:";
        cin>>CourseId;

        cout<<"Enter Coursename:";
        cin>>Coursename;

        cout<<"Enter Coursefees:";
        cin>>Coursefees;

        cout<<"Enter Coursejoiningdate:";
        cin>>Coursejoiningdate;

        cout<<"Enter CourseDuration:";
        cin>>CourseDuration;
        
    }

    void printCoursedata(){
        cout<<"\nCourseId:"<<CourseId<<endl;
        cout<<"Coursename:"<<Coursename<<endl;
        cout<<"Coursefees:"<<Coursefees<<endl;
        cout<<"Coursejoiningdate:"<<Coursejoiningdate<<endl;
        cout<<"courseDuration:"<<CourseDuration<<endl;
    }
};

int main(){
    Course M[5];

    for(int i=0;i<5;i++){
        M[i].getCoursedata();
    }

     for(int i=0;i<5;i++){
        cout<<"\n\n--||Course||--"<<i+1<<endl;
        M[i].printCoursedata();
    }
    return 0;
}