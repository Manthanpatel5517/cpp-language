#include<iostream>
using namespace std;

class authUser{
    string userName;

    public:
        void loginuser(string name){
            userName = name;
            cout<<userName<<"Login successfully..";
        }
};

class payment{
    int amount;

    public:
        void setamont(int amt){
            amount = amt;
        }
};

class onlinePayment:public authUser,public payment{
    public:
        void paymentmsg(string username,int amt){
            loginuser(username);
            setamont(amt);
            cout<<endl<<amt<<"payment Successfully..";
        }
};

int main(){
    onlinePayment o1;

    o1.paymentmsg("manthan patel",50000);
    return 0;
}