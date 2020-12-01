/* Name:Huy Doan Minh Huynh; M-number: M03321126;
*/

#include "include.h"

using namespace std;

int main()
{
    vector <SavAcc> SavAccList;
    vector <ChkAcc> ChkAccList;

    bool done = false;
    while (!done)
    {
        cout << "Log in as:\n";
        cout << "[1] System Adminastrator\n";
        cout << "[2] Bear Officials\n";
        cout << "[3] Customers\n";
        cout << "[4] Exit\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease enter login id and password:\n\n";
                // while(!adminLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }

                cout << "\nSuccessfully Logged In\n";
                adminMenu();
                break;
            }
            case 2:
            { 
                cout << "\nPlease enter login id and password:\n\n";
                // while(!officialLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }
                
                cout << "\nSuccessfully Logged In.\n";
                officialMenu();
                break;
            }
            case 3:
            { 
                cout << "\nPlease enter login id and password:\n\n";
                // while(!customerLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }

                cout << "\nSuccessfully Logged In.\n";
                cout << "\nChoose An Account To Interact With.\n"
                //display information after each successful log in
                customerMenu();
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
                break;
        }
        cout << endl;
    }
    cout << "\nGoodbye\n";
    return 1;
}
