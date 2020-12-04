void openChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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

void openSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(savList.size()) << "\n";
    string id = to_string(savList.size());
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

void openCD(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(cdList.size()) << "\n";
    string id = to_string(cdList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    
    CD account(id, password, fName, lName, phone);
}

void openU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(uList.size()) << "\n";
    string id = to_string(uList.size());
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
    

    ClassU account(id, password, fName, lName, phone, rate);
}

void openV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(vList.size()) << "\n";
    string id = to_string(vList.size());
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
    

    ClassV account(id, password, fName, lName, phone, rate);
}

void openX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(xList.size()) << "\n";
    string id = to_string(xList.size());
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
    

    ClassX account(id, password, fName, lName, phone, rate);
}

void openY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(yList.size()) << "\n";
    string id = to_string(yList.size());
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
    

    ClassY account(id, password, fName, lName, phone, rate);
}

void openZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Checking Account ID Is S" << to_string(zList.size()) << "\n";
    string id = to_string(zList.size());
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
    

    ClassZ account(id, password, fName, lName, phone, rate);
}


void closeChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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
                officList[accNum].closeChkAcc(chkList[i]);

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

void closeSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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
                officList[accNum].closeSavAcc(savList[i]);
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

void closeU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getUID();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                officList[accNum].close(id);
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

void closeV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getVID();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                officList[accNum].close(id);
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

void closeX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getXID();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                officList[accNum].close(id);
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

void closeY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getYID();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                officList[accNum].close(id);
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

void closeZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
        string id = getZID();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                officList[accNum].close(id);
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


void officialDepositChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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
                        //officList[accNum].deposit(chkList[i], amount)
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

void officialDepositSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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
                        //officList[accNum].deposit(savList[i], amount)
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

void officialDepositU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getUID();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (uList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(uList[i],amount);
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

void officialDepositV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getVID();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (vList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(vList[i],amount);
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

void officialDepositX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getXID();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (xList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(xList[i],amount);
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

void officialDepositY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getYID();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (yList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(yList[i],amount);
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

void officialDepositZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Deposit.\n";
        string id = getZID();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (zList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit\n";
                        double amount = getAmount();
                        //officList[accNum].deposit(zList[i],amount);
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

void officialDeposit(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] U Account\n";
        cout << "[4] V Account\n";
        cout << "[5] X Account\n";
        cout << "[6] Y Account\n";
        cout << "[7] Z Account\n";
        cout << "[8] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                officialDepositChecking(chkList, officList, accNum);
                break;
            }
            case 2:
            { 
                officialDepositSaving(savList, officList, accNum);
                break;
            }
            case 3:
            { 
                officialDepositU(uList, officList, accNum);
                break;
            }
            case 4:
            { 
                officialDepositV(vList, officList, accNum);
                break;
            }
            case 5:
            { 
                officialDepositX(xList, officList, accNum);
                break;
            }
            case 6:
            { 
                officialDepositY(yList, officList, accNum);
                break;
            }
            case 7:
            { 
                officialDepositZ(zList, officList, accNum);
                break;
            }
            case 8:
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


void officialWithdrawChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getChkID();
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (chkList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(chkList[i], amount)
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

void officialWithdrawSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getChkID();
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (savList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(savList[i], amount)
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

void officialWithdrawU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getUID();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (uList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(uList[i],amount);
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

void officialWithdrawV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getVID();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (vList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(vList[i],amount);
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

void officialWithdrawX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getXID();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (xList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(xList[i],amount);
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

void officialWithdrawY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getYID();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (yList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(yList[i],amount);
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

void officialWithdrawZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getZID();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer ID and Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (zList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw\n";
                        double amount = getAmount();
                        //officList[accNum].withdraw(zList[i],amount);
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

void officialWithdraw(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] U Account\n";
        cout << "[4] V Account\n";
        cout << "[5] X Account\n";
        cout << "[6] Y Account\n";
        cout << "[7] Z Account\n";
        cout << "[8] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                officialWithdrawChecking(chkList, officList, accNum);
                break;
            }
            case 2:
            { 
                officialWithdrawSaving(savList, officList, accNum);
                break;
            }
            case 3:
            { 
                officialWithdrawU(uList, officList, accNum);
                break;
            }
            case 4:
            { 
                officialWithdrawV(vList, officList, accNum);
                break;
            }
            case 5:
            { 
                officialWithdrawX(xList, officList, accNum);
                break;
            }
            case 6:
            { 
                officialWithdrawY(yList, officList, accNum);
                break;
            }
            case 7:
            { 
                officialWithdrawZ(zList, officList, accNum);
                break;
            }
            case 8:
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

void openAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string uStat, string vStat, string xStat, string yStat, string zStat)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] U Account\n";
        cout << "[5] V Account\n";
        cout << "[6] X Account\n";
        cout << "[7] Y Account\n";
        cout << "[8] Z Account\n";
        cout << "[9] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                openChecking(chkList, officList, accNum);
                cout << "\nNew Checking Account Created.\n";
                break;
            }
            case 2:
            { 
                openSaving(savList, officList, accNum);
                cout << "\nNew Saving Account Created.\n";
                break;
            }
            case 3:
            { 
                openCD(cdList, officList, accNum);
                break;
            }
            case 4:
            {
                if (uStat == "1")
                    openU(uList, officList, accNum);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
            }
            case 5:
            {
                if (vStat == "1")
                    openV(vList, officList, accNum);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
            }
            case 6:
            {
                if (xStat == "1")
                    openX(xList, officList, accNum);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
            }
            case 7:
            {
                if (yStat == "1")
                    openY(yList, officList, accNum);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
            }
            case 8:
            {
                if (zStat == "1")
                    openZ(zList, officList, accNum);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
            }
            case 9:
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

void closeAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] U Account\n";
        cout << "[4] V Account\n";
        cout << "[5] X Account\n";
        cout << "[6] Y Account\n";
        cout << "[7] Z Account\n";
        cout << "[8] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                closeChecking(chkList, officList, accNum);
                break;
            }
            case 2:
            { 
                closeSaving(savList, officList, accNum);
                break;
            }
            case 3:
            { 
                closeU(uList, officList, accNum);
                break;
            }
            case 4:
            { 
                closeV(vList, officList, accNum);
                break;
            }
            case 5:
            { 
                closeX(xList, officList, accNum);
                break;
            }
            case 6:
            { 
                closeY(yList, officList, accNum);
                break;
            }
            case 7:
            { 
                closeZ(zList, officList, accNum);
                break;
            }
            case 8:
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


void searchCheckingId(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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

void searchCheckingName(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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

void searchCheckingPhone(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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

void searchChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
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
                searchCheckingId(chkList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchCheckingName(chkList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchCheckingPhone(chkList, officList, accNum);
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


void searchSavingId(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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

void searchSavingName(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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

void searchSavingPhone(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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

void searchSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
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
                searchSavingId(savList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchSavingName(savList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchSavingPhone(savList, officList, accNum);
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


void searchCDId(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
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

void searchCDName(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
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

void searchCDPhone(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
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

void searchCD(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
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
                searchCDId(cdList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchCDName(cdList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchCDPhone(cdList, officList, accNum);
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


void searchVId(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getVID();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << vList[i].getID() << "\n";
                cout << "Name: " << vList[i].getFname() << " " << vList[i].getLname() << "\n";
                cout << "Phone Number: " << vList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << vList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchVName(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getFname() == fName && vList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << vList[i].getFname() << " " << vList[i].getLname() << "\n";
                cout << "Account ID: " << vList[i].getID() << "\n";
                cout << "Phone Number: " << vList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << vList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchVPhone(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << vList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << vList[i].getID() << "\n";
                cout << "Name: " << vList[i].getFname() << " " << vList[i].getLname() << "\n";
                cout << "Current Balance: " << vList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
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
                searchVId(vList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchVName(vList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchVPhone(vList, officList, accNum);
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


void searchUId(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getUID();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << uList[i].getID() << "\n";
                cout << "Name: " << uList[i].getFname() << " " << uList[i].getLname() << "\n";
                cout << "Phone Number: " << uList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << uList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchUName(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getFname() == fName && uList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << uList[i].getFname() << " " << uList[i].getLname() << "\n";
                cout << "Account ID: " << uList[i].getID() << "\n";
                cout << "Phone Number: " << uList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << uList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchUPhone(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << uList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << uList[i].getID() << "\n";
                cout << "Name: " << uList[i].getFname() << " " << uList[i].getLname() << "\n";
                cout << "Current Balance: " << uList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
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
                searchUId(uList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchUName(uList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchUPhone(uList, officList, accNum);
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


void searchXId(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getXID();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << xList[i].getID() << "\n";
                cout << "Name: " << xList[i].getFname() << " " << xList[i].getLname() << "\n";
                cout << "Phone Number: " << xList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << xList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchXName(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getFname() == fName && xList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << xList[i].getFname() << " " << xList[i].getLname() << "\n";
                cout << "Account ID: " << xList[i].getID() << "\n";
                cout << "Phone Number: " << xList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << xList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchXPhone(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << xList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << xList[i].getID() << "\n";
                cout << "Name: " << xList[i].getFname() << " " << xList[i].getLname() << "\n";
                cout << "Current Balance: " << xList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
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
                searchXId(xList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchXName(xList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchXPhone(xList, officList, accNum);
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

void searchYId(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getYID();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << yList[i].getID() << "\n";
                cout << "Name: " << yList[i].getFname() << " " << yList[i].getLname() << "\n";
                cout << "Phone Number: " << yList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << yList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchYName(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getFname() == fName && yList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << yList[i].getFname() << " " << yList[i].getLname() << "\n";
                cout << "Account ID: " << yList[i].getID() << "\n";
                cout << "Phone Number: " << yList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << yList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchYPhone(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << yList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << yList[i].getID() << "\n";
                cout << "Name: " << yList[i].getFname() << " " << yList[i].getLname() << "\n";
                cout << "Current Balance: " << yList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
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
                searchYId(yList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchYName(yList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchYPhone(yList, officList, accNum);
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

void searchZId(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For.\n";
        string id = getXID();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                cout << "\nDisplaying Information of Saving Account: " << zList[i].getID() << "\n";
                cout << "Name: " << zList[i].getFname() << " " << zList[i].getLname() << "\n";
                cout << "Phone Number: " << zList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << zList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}

void searchZName(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For.\n";
        string fName = getFirstName();
        string lName = getLastName();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getFname() == fName && zList[i].getLname() == lName)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Name: " << zList[i].getFname() << " " << zList[i].getLname() << "\n";
                cout << "Account ID: " << zList[i].getID() << "\n";
                cout << "Phone Number: " << zList[i].getPhoneNum() << "\n";
                cout << "Current Balance: " << zList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}

void searchZPhone(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For.\n";
        string phone = getPhone();
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getPhoneNum() == phone)
            {
                found = true;
                cout << "\nDisplaying Information of Checking Account With Phone Number: " << zList[i].getPhoneNum() << "\n";
                cout << "Account ID: " << zList[i].getID() << "\n";
                cout << "Name: " << zList[i].getFname() << " " << zList[i].getLname() << "\n";
                cout << "Current Balance: " << zList[i].getBalance() << "\n";
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}

void searchZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
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
                searchZId(zList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchZName(zList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchZPhone(zList, officList, accNum);
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

void officialSearch(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] U Account\n";
        cout << "[5] V Account\n";
        cout << "[6] X Account\n";
        cout << "[7] Y Account\n";
        cout << "[8] Z Account\n";
        cout << "[9] Go Back\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                searchChecking(chkList, officList, accNum);
                break;
            }
            case 2:
            { 
                searchSaving(savList, officList, accNum);
                break;
            }
            case 3:
            { 
                searchCD(cdList, officList, accNum);
                break;
            }
            case 4:
            { 
                searchU(uList, officList, accNum);
                break;
            }
            case 5:
            { 
                searchV(vList, officList, accNum);
                break;
            }
            case 6:
            { 
                searchX(xList, officList, accNum);
                break;
            }
            case 7:
            { 
                searchY(yList, officList, accNum);
                break;
            }
            case 8:
            { 
                searchZ(zList, officList, accNum);
                break;
            }
            case 9:
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

void officialMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string uStat, string vStat, string xStat, string yStat, string zStat)
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
                openAccount(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList, uStat, vStat, xStat, yStat, zStat);
                cout << "\nAccount Successfully Opened.\n";   //might print the info of the open account
                break;
            }
            case 2:
            {
                cout << "\nChoose A Type Of Account To Close.\n";
                closeAccount(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 3:
            {
                cout << "\nChoose A Type Of Account To Search.\n";
                officialSearch(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
                cout << "\nSearched.\n";
                break;
            }
            case 4:
            {
                cout << "\nChoose A Type Of Account To Deposit.\n";
                officialDeposit(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList); 
                cout << "\nDeposited.\n";
                break;
            }
            case 5:
            {
                cout << "\nChoose A Type Of Account To Withdraw.\n";
                officialWithdraw(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
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
