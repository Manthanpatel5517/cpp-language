#include<iostream>
using namespace std;

class company{

    int comp_Id;
    string comp_name;
    int comp_staff_quantity;
    long int comp_revenue;
    string comp_ceo;

    public:
    // Constructor class(company)
    company(int id,string name,int quantity,long int revenue,string ceo){
        comp_Id = id;
        comp_name = name;
        comp_staff_quantity = quantity;
        comp_revenue = revenue;
        comp_ceo = ceo;
    }

    void printcompanydata(){
        cout<<"\n\n----||Company details||----"<<endl;
        cout<<"comp_Id:"<<comp_Id<<endl;
        cout<<"comp_name:"<<comp_name<<endl;
        cout<<"comp_staff_quantity:"<<comp_staff_quantity<<endl;
        cout<<"comp_revenue:"<<comp_revenue<<endl;
        cout<<"comp_ceo:"<<comp_ceo<<endl;
    }

};


int main(){

    company m(1,"Rolex",50,1200000,"Darshil");

    m.printcompanydata();

    return 0;
}