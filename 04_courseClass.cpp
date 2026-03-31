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

        cin.ignore();
        cout<<"Enter Coursename:";
        getline(cin,Coursename);

        cout<<"Enter Coursefees:";
        cin>>Coursefees;

        cout<<"Enter Coursejoiningdate:";
        cin>>Coursejoiningdate;

        cin.ignore();
        cout<<"Enter CourseDuration:";
        getline(cin,CourseDuration);
        
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
    Course M[2];

    for(int i=0;i<2;i++){
        M[i].getCoursedata();
    }

     for(int i=0;i<2;i++){
        cout<<"\n\n--||Course||--"<<i+1<<endl;
        M[i].printCoursedata();
    }
    return 0;
}