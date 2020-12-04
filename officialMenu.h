void openChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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

void openSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
    double rate = getRate();
    

    SavAcc account(id, password, fName, lName, phone, rate);
}


void closeChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getChkID();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;


                // if (chkList[i].isOnline())
                // {
                //     chkList[i].setOnlStat(false);
                // }
                // else
                // {
                //     cout << "\nThis Account Is Already Closed\n";
                // }   
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void closeSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getSavID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                // if (savList[i].isOnline())
                // {
                //     savList[i].setOnlStat(false);
                // }
                // else
                // {
                //     cout << "\nThis Account Is Already Closed\n";
                // }   
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}


void officialDepositChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
}

void officialDepositSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getChkID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (savList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(amount, savList[i])
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
}

void officialDeposit(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                officialDepositChecking(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                officialDepositSaving(chkList, savList, cdList, officList, adminList);
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


void officialWithdrawChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(amount, chkList[i])
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
}

void officialWithdrawSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getChkID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (savList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(amount, savList[i])
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
}

void officialWithdraw(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                officialWithdrawChecking(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                officialWithdrawSaving(chkList, savList, cdList, officList, adminList);
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


void openAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                openChecking(chkList, savList, cdList, officList, adminList);
                cout << "\nNew Checking Account Created.\n";
                break;
            }
            case 2:
            { 
                openSaving(chkList, savList, cdList, officList, adminList);
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

void closeAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                closeChecking(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                closeSaving(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 3:
            { 
                //closeCD(chkList, savList, cdList, officList, adminList);
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


void searchCheckingId(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getChkID();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account: " << chkList[i].getID() << "\n";
                cout << "Name: " << chkList[i].getFname() << " " << chkList[i].getLname() << "\n";
                cout << "Phone Number: " << chkList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << chkList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchCheckingName(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getFname() == fName && chkList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << chkList[i].getFname() << " " << chkList[i].getLname() << "\n";
                cout << "Account ID: " << chkList[i].getID() << "\n";
                cout << "Phone Number: " << chkList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << chkList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchCheckingPhone(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << chkList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << chkList[i].getID() << "\n";
                cout << "Name: " << chkList[i].getFname() << " " << chkList[i].getLname() << "\n";
                cout << "Current Balance: " << chkList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchChecking(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Search By Account Account Number\n";
        cout << "[2] Search By Name\n";
        cout << "[3] Search By Phone\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                searchCheckingId(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                searchCheckingName(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 3:
            { 
                searchCheckingPhone(chkList, savList, cdList, officList, adminList);
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


void searchSavingId(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getSavID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << savList[i].getID() << "\n";
                cout << "Name: " << savList[i].getFname() << " " << savList[i].getLname() << "\n";
                cout << "Phone Number: " << savList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << savList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchSavingName(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getFname() == fName && savList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << savList[i].getFname() << " " << savList[i].getLname() << "\n";
                cout << "Account ID: " << savList[i].getID() << "\n";
                cout << "Phone Number: " << savList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << savList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchSavingPhone(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << savList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << savList[i].getID() << "\n";
                cout << "Name: " << savList[i].getFname() << " " << savList[i].getLname() << "\n";
                cout << "Current Balance: " << savList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchSaving(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Search By Account Account Number\n";
        cout << "[2] Search By Name\n";
        cout << "[3] Search By Phone\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                searchSavingId(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                searchSavingName(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 3:
            { 
                searchSavingPhone(chkList, savList, cdList, officList, adminList);
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


void searchCDId(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getCDID();
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << cdList[i].getID() << "\n";
                cout << "Name: " << cdList[i].getFname() << " " << cdList[i].getLname() << "\n";
                cout << "Phone Number: " << cdList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << cdList[i].getBalance() << "\n";
                cout << "Remaining Days: " << cdList[i].getRemainDays() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchCDName(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getFname() == fName && cdList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << cdList[i].getFname() << " " << cdList[i].getLname() << "\n";
                cout << "Account ID: " << cdList[i].getID() << "\n";
                cout << "Phone Number: " << cdList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << cdList[i].getBalance() << "\n";
                cout << "Remaining Days: " << cdList[i].getRemainDays() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchCDPhone(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << cdList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << cdList[i].getID() << "\n";
                cout << "Name: " << cdList[i].getFname() << " " << cdList[i].getLname() << "\n";
                cout << "Current Balance: " << cdList[i].getBalance() << "\n";
                cout << "Remaining Days: " << cdList[i].getRemainDays() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchCD(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Search By Account Account Number\n";
        cout << "[2] Search By Name\n";
        cout << "[3] Search By Phone\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                searchCDId(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                searchCDName(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 3:
            { 
                searchCDPhone(chkList, savList, cdList, officList, adminList);
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


void officialSearch(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                searchChecking(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 2:
            { 
                searchSaving(chkList, savList, cdList, officList, adminList);
                break;
            }
            case 3:
            { 
                searchCD(chkList, savList, cdList, officList, adminList);
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

void officialMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector <BankOfficial> &officList, vector <SystemAdmin> &adminList, int accNum)
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
                openAccount(chkList, savList, cdList, officList, adminList, accNum);
                cout << "\nAccount Successfully Opened.\n";   //might print the info of the open account
                break;
            }
            case 2:
            {
                cout << "\nChoose A Type Of Account To Close.\n";
                closeAccount(chkList, savList, cdList, officList, adminList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 3:
            {
                cout << "\nChoose A Type Of Account To Search.\n";
                officialSearch(chkList, savList, cdList, officList, adminList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 4:
            {
                cout << "\nChoose A Type Of Account To Deposit.\n";
                officialDeposit(chkList, savList, cdList, officList, adminList, accNum); 
                cout << "\nDeposited.\n";
                break;
            }
            case 5:
            {
                cout << "\nChoose A Type Of Account To Withdraw.\n";
                officialWithdraw(chkList, savList, cdList, officList, adminList, accNum);
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
