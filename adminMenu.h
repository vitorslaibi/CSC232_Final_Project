void createAccMenu(vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Create U Account\n";
        cout << "[2] Create V Account\n";
        cout << "[3] Create X Account\n";
        cout << "[4] Create Y Account\n";
        cout << "[5] Create Z Account\n";
        cout << "[6] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                adminList[accNum].createUacc();
                break;
            }
            case 2:
            { 
                adminList[accNum].createVacc();
                break;
            }
            case 3:
            { 
                adminList[accNum].createXacc();
                break;
            }
            case 4:
            { 
                adminList[accNum].createYacc();
                break;
            }
            case 5:
            { 
                adminList[accNum].createZacc();
                break;
            }
            case 6:
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

void deleteAccMenu(vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Create U Account\n";
        cout << "[2] Create V Account\n";
        cout << "[3] Create X Account\n";
        cout << "[4] Create Y Account\n";
        cout << "[5] Create Z Account\n";
        cout << "[6] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                adminList[accNum].deleteUacc();
                break;
            }
            case 2:
            { 
                adminList[accNum].deleteVacc();
                break;
            }
            case 3:
            { 
                adminList[accNum].deleteXacc();
                break;
            }
            case 4:
            { 
                adminList[accNum].deleteYacc();
                break;
            }
            case 5:
            { 
                adminList[accNum].deleteZacc();
                break;
            }
            case 6:
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

void adminMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string uStat, string vStat, string xStat, string yStat, string zStat)
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
                cout << "\nYour Bank Official Account ID Is B" << to_string(officList.size()) << "\n";
                string id = to_string(officList.size());
                cout << "\nPlease Enter Your New Password\n";
                string password = getPassword();
                cout << "\nPlease Enter Your First Name\n";
                string fName = getFirstName();
                cout << "\nPLease Enter Your Last Name\n";
                string lName = getLastName();

                adminList[accNum].createOfficialAcc(id, password, fName,lName);
                cout << "\nNew Bank Official Created\n";
                break;
            }
            case 2:
            {
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
                    string id = getOffID();
                    for (int i = 0; i < officList.size(); i++)
                    {
                        if (officList[i].getID() == id)
                        {
                            found = true;
                            adminList[accNum].enableOfficialAcc(officList[i]);
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                cout << "\nBank Official Enabled\n";
                break;
            }
            case 3:
            {
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
                    string id = getOffID();
                    for (int i = 0; i < officList.size(); i++)
                    {
                        if (officList[i].getID() == id)
                        {
                            found = true;
                            adminList[accNum].disableOfficialAcc(officList[i]);
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                cout << "\nBank Official Disabled\n";
                break;
            }
            case 4:
            { 
                createAccMenu(adminList, accNum, uList, vList, xList, yList, zList);
                cout << "\nNew Bank Account Type Created\n";
                break;
            }
            case 5:
            { 
                deleteAccMenu(adminList, accNum, uList, vList, xList, yList, zList);
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
