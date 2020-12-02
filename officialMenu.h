void openChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    cout << "\nYour Checking Account ID Is C" << to_string(chkList.size()) << "\n";
    string id = to_string(chkList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();

    ChkAcc account(id, password, fName, lName, phone);
}

void openSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    cout << "\nYour Checking Account ID Is S" << to_string(chkList.size()) << "\n";
    string id = to_string(chkList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    cout << "\nPLease Enter The Desire Interest Rate\n";
    

    SavAcc account(id, password, fName, lName, phone, rate);
}

void closeChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
    bool found = false;
    while(!found)
    {
        string id = getChkID();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;
                if (chkList[i].isOnline())
                {
                    chkList[i].setOnlStat(false);
                }
                else
                {
                    cout << "\nThis Account Is Already Closed\n";
                }   
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void closeSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
    bool found = false;
    while(!found)
    {
        string id = getSavID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                if (savList[i].isOnline())
                {
                    savList[i].setOnlStat(false);
                }
                else
                {
                    cout << "\nThis Account Is Already Closed\n";
                }   
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

bool officialLogin(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    //return true when successfully logged in
    return true;
}

void openAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
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
                openChecking(chkList, savList);
                cout << "\nNew Checking Account Created.\n";
                break;
            }
            case 2:
            { 
                openSaving(chkList, savList);
                cout << "\nNew Saving Account Created.\n";
                break;
            }
            case 3:
            { 
                //openCD();
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

void closeAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
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
                closeChecking(chkList, savList);
                break;
            }
            case 2:
            { 
                closeSaving(chkList, savList);
                break;
            }
            case 3:
            { 
                //closeCD(chkList, savList);
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

void officialSearch(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
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
                //searchChecking();
                break;
            }
            case 2:
            { 
                //searchSaving();
                break;
            }
            case 3:
            { 
                //searchCD();
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

void officialDeposit(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //officialDepositChecking();
                break;
            }
            case 2:
            { 
                //officialDepositSaving();
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

void officialWithdraw(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //officialWithdrawChecking();
                break;
            }
            case 2:
            { 
                //officialWithdrawSaving();
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

void officialMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Open Account\n";
        cout << "[2] Close Account\n";
        cout << "[3] Search Account\n";
        cout << "[4] Deposit\n";
        cout << "[5] Withdraw\n";
        cout << "[6] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nChoose A Type Of Account To Open.\n";
                openAccount(chkList, savList);
                cout << "\nAccount Successfully Opened.\n";   //might print the info of the open account
                break;
            }
            case 2:
            {
                cout << "\nChoose A Type Of Account To Close.\n";
                closeAccount(chkList, savList);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 3:
            {
                cout << "\nChoose A Type Of Account To Search.\n";
                //officialSearch();
                cout << "\nSearched.\n";
                break;
            }
            case 4:
            {
                cout << "\nChoose A Type Of Account To Deposit.\n";
                //officialDeposit(); 
                cout << "\nDeposited.\n";
                break;
            }
            case 5:
            {
                cout << "\nChoose A Type Of Account To Withdraw.\n";
                //officialWithdraw();
                cout << "\nWithdrawed.";
                break;
            }
            case 6:
            {
                cout << "\nLogged Out Of Bear Official Account.\n";
                done = true;
                break;
            }
            default:
            {
                cout << "\nPlease Enter The Correct Input Corresponding To Each Options.\n";
                break;
            }
        }
        cout << endl;
    }
}
