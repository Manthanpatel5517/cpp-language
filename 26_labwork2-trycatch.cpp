#include <iostream>
using namespace std;

int main()
{

    string Password;
    bool uppercase = false;

    cout << "Enter your Password:";
    cin >> Password;

    try
    {
        for (int i = 0; i < Password.length(); i++)
        {
            if (Password[i] >= 'A' && Password[i] <= 'Z')
            {
                uppercase = true;
                break;
            }
        }

        if (uppercase)
        {
            cout << "Password is Valid..";
        }
        else
        {
            throw "Letter is not an Uppercase!..";
        }
    }

    catch (const char *msg)
    {
        cout << "Errorr." << msg << endl;
    }

    return 0;
}