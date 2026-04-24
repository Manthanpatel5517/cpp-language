#include<iostream>
using namespace std;

class authsystem{
    public:
        void login(string email,string password){
            cout<<"Login with Email & password.."<<endl;
        }

        void login(string mobile_No,long int otp){
            cout<<"Login with Mobile no and otp."<<endl;
        }
};


int main(){
    authsystem a1;

    a1.login("manthanpatel966@gmail.com","M5517m");
    a1.login("9106955621",123456);

    return 0;
}