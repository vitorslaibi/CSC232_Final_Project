/* Name:Huy Doan Minh Huynh; M-number: M03321126;
*/

#include "include.h"

using namespace std;

int main()
{
    vector <SavAcc> savList;
    vector <ChkAcc> chkList;
    // vector <CD> cdList;
    // vector <BankOfficial> officList;
    // vector <SystemAdmin> adminList;



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
                int accNum;
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getAdminID();
                    for (int i = 0; i < adminList.size(); i++)
                    {
                        if (adminList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (adminList[i].getPassword() == password)
                                {
                                    corPass = true;
                                    accNum = i;
                                }
                                else
                                {
                                    cout << "\nIncorrect Password\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                cout << "\nSuccessfully Logged In\n";
                adminMenu(chkList, savList, cdList, officList, adminList, accNum);
                break;
            }
            case 2:
            { 
                int accNum;
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getOffID();
                    for (int i = 0; i < officList.size(); i++)
                    {
                        if (officList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (officList[i].getPassword() == password)
                                {
                                    corPass = true;
                                    accNum = i;
                                }
                                else
                                {
                                    cout << "\nIncorrect Password\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                officialMenu(chkList, savList, cdList, officList, adminList, accNum);
                break;
            }
            case 3:
            {
                cout << "\nChoose An Account To Interact With.\n";
                customerMenu(chkList, savList, cdList, officList, adminList);
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
