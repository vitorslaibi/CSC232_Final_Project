
bool adminLogin()
{
    //return true when successfully logged in
    return true;
}

void changePassMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Change the Password.\n";
                    string id = getChkID();
                    for (int i = 0; i < chkList.size(); i++)
                    {
                        if (chkList[i].getID() == id)
                        {
                            found = true;
                            //changePassword(id);
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                break;
            }
            case 2:
            { 
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Change the Password.\n";
                    string id = getSavID();
                    for (int i = 0; i < savList.size(); i++)
                    {
                        if (savList[i].getID() == id)
                        {
                            found = true;
                            //changePassword(id);
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                break;
            }
            case 3:
            { 
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Change the Password.\n";
                    string id = getCDID();
                    for (int i = 0; i < cdList.size(); i++)
                    {
                        if (cdList[i].getID() == id)
                        {
                            found = true;
                            //changePassword(id);
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void adminMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Create New Bank Official Account\n";
        cout << "[2] Enable Bank Official Account\n";
        cout << "[3] Disable Bank Official Account\n";
        cout << "[4] Create New Bank Account Type\n";
        cout << "[5] Delete Bank Account Type\n";
        cout << "[6] Modify Bank Account Type\n";
        cout << "[7] Retrieve User ID\n";
        cout << "[8] Change User's Password\n";
        cout << "[9] Log out\n";
        
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //createOfficialAcc();
                cout << "\nNew Bank Official Created\n";
                break;
            }
            case 2:
            { 
                //changeLoginStatus(true);
                cout << "\nBank Official Enabled\n";
                break;
            }
            case 3:
            { 
                //changeLoginStatus(false);
                cout << "\nBank Official Disabled\n";
                break;
            }
            case 4:
            { 
                //newBankType();
                cout << "\nNew Bank Account Type Created\n";
                break;
            }
            case 5:
            { 
                //delBankType();
                cout << "\nBank Account Type Deleted\n";
                break;
            }
            case 6:
            { 
                //modBankType();
                cout << "\nBank Account Type Modified\n";
                break;
            }
            case 7:
            { 
                //retrieveUserID();
                cout << "\nUser's ID retrieved\n";
                break;
            }
            case 8:
            {
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
                    string id = getChkID();
                    for (int i = 0; i < chkList.size(); i++)
                    {
                        if (chkList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                            bool corPass = false;
                            while (!corPass)
                            {
                                string password = getPassword();
                                if (chkList[i].getPassword() == password)
                                {
                                    corPass = true;
                                    cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                                    double amount = getAmount();
                                    //officList[accNum].deposit(amount, chkList[i])
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
                //changePassMenu();
                cout << "\nUser's Password changed\n";
                break;
            }
            case 9:
            { 
                done = true;
                cout << "\nLogged Out Of System Adminastrator Account\n";
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}
