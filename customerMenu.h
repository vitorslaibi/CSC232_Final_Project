void checkingMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount\n";
                double amount = getAmount();
                chkList[accNum].deposit();
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                chkList[accNum].deposit();
                break;
            }
            case 3:
            {
                chkList[accNum].printLast7Days();
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

void savingMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount\n";
                double amount = getAmount();
                savList[accNum].deposit();
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                savList[accNum].deposit();
                break;
            }
            case 3:
            {
                savList[accNum].printLast7Days();
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

void cdMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Display Remaining Days \n";
        cout << "[2] Withdraw\n";
        cout << "[3] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cdList[accNum].getRemainDays();
                break;
            }
            case 2:
            {
                cdList[accNum].withdraw();
                break;
            }
            case 3:
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

void customerMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Saving Account\n";
        cout << "[4] Go back\n";
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
                    string id = getOffID();
                    for (int i = 0; i < chkList.size(); i++)
                    {
                        if (chkList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (chkList[i].getPassword() == password)
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
                checkingMenu(chkList, savList, cdList, accNum);
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
                    for (int i = 0; i < savList.size(); i++)
                    {
                        if (savList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (savList[i].getPassword() == password)
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
                savingMenu(chkList, savList, cdList, accNum);
                break;
            }
            case 3:
            {
                int accNum;
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getOffID();
                    for (int i = 0; i < cdList.size(); i++)
                    {
                        if (cdList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (cdList[i].getPassword() == password)
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
                cdMenu(chkList, savList, cdList, accNum);
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
