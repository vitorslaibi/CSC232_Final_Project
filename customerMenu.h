void customerDepositChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
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
                //customerLogin();
                cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                double amount = getAmount();
                chkList[i].deposit(amount);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

bool customerLogin(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    //return true when successfully logged in
    return true;
}

void checkingMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //customerDepositChecking(chkList, savList);
                break;
            }
            case 2:
            { 
                //customerWithdrawChecking(chkList, savList);
                break;
            }
            case 3:
            { 
                //call display transaction func in the checkingAccount class of logged in customer
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

void savingMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //customerDepositSaving(chkList, savList);
                break;
            }
            case 2:
            { 
                //customerDepositSaving(chkList, savList);
                break;
            }
            case 3:
            { 
                //call display transaction func in the savingingAccount class of logged in customer
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

void customerMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                checkingMenu(chkList, savList);
                break;
            }
            case 2:
            { 
                savingMenu(chkList, savList);
                break;
            }
            case 3:
            { 
                done = true;
                cout << "\nLogged Out Of Customer Account\n";
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
