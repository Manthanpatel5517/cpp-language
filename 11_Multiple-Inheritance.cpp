#include <iostream>
using namespace std;

class userinfo
{
    string userName;
    string passWord;

protected:
    string role;

public:
    void getuserdata()
    {
        cout << "\nEnter userName:";
        getline(cin, userName);

        cout << "Enter passWord:";
        getline(cin, passWord);

        cout << "Enter role:";
        getline(cin, role);
    }

    void displayuserinfo()
    {
        cout << "\n--||USERDETAIL||--" << endl;
        cout << "USERNAME:" << userName << endl;
        cout << "PASSWORD:" << passWord << endl;
        cout << "ROLE:" << role << endl;
    }
};

class productManagement : public userinfo
{
    int productId;
    string productName;
    int productPrice;
    string category;

public:
    void getproductdata()
    {
        if (role == "admin")
        {
            cout << "\nEnter productId:";
            cin >> productId;

            cin.ignore();
            cout << "Enter productName:";
            getline(cin, productName);

            cout << "Enter productPrice:";
            cin >> productPrice;

            cin.ignore();
            cout << "Enter category:";
            getline(cin, category);
        }
        else
        {
            cout <<"\nAccess denied!.You are not admin!!.";
        }
    }

    void displayproductinfo()
    {
        if (role == "admin")
        {
            cout << "\n--||PRODUCTDETAIL||--" << endl;
            cout << "PRODUCTID" << productId << endl;
            cout << "PRODUCTNAME:" << productName << endl;
            cout << "PRODUCTPRICE:" << productPrice << endl;
            cout << "CATEGORY:" << category << endl;
        }
    }
};

int main()
{
    productManagement m1;

    m1.getuserdata();
    m1.getproductdata();

    m1.displayuserinfo();
    m1.displayproductinfo();
    return 0;
}