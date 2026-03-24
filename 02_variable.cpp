#include<iostream>
using namespace std;

int main(){

    int studentId;
    string studentname;
    float percentage;
    string grade;

    cout<<"enter your studentId:";
    cin>>studentId;

    cout<<"enter your student name:";
    cin>>studentname;

    cout<<"enter your percentage:";
    cin>>percentage;

    cout<<"enter your grade:";
    cin>>grade;

    cout<<"\n\n --|| student info ||--"<<endl;
    cout<<"studentId:"<<studentId<<endl;
    cout<<"studentname:"<<studentname<<endl;
    cout<<"percentage:"<<percentage<<endl;
    cout<<"grade:"<<grade<<endl;

    return 0;
}