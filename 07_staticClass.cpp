#include<iostream>
using namespace std;

class Bankaccount{
    string accountNo;
    string customerName;
    int accountBalance;


    static int totalAccount;
    static int totalBalance;

    public:
          void createaccount(string acc_No,string cus_Name,int acc_Bal){
            
            accountNo = acc_No;
            customerName = cus_Name;
            accountBalance = acc_Bal;

            totalAccount++;
            totalBalance += accountBalance;
          }

          void printdata(){
            cout<<"\nACCOUNTNUMBER:"<<accountNo<<endl;
            cout<<"CUSTOMERNAME:"<<customerName<<endl;
            cout<<"ACCOUNTBALANCE:"<<accountBalance<<endl;
          }

          static void Bankreport(){
            cout<<"\n\n---=||BANK REPORT||=---"<<endl;
            cout<<"TOTALACCOUNT:"<<totalAccount<<endl;
            cout<<"TOTALBALANCE:"<<totalBalance<<endl;
          }
          
};

int Bankaccount :: totalAccount=0;
int Bankaccount :: totalBalance=5000;


int main(){

    Bankaccount m1,m2;

    m1.createaccount("909090909090","manthan patel",20000);
    m2.createaccount("989898989898","darshil chaudhary",10000);

    m1.printdata();
    m2.printdata();

    Bankaccount::Bankreport();

    return 0;
}