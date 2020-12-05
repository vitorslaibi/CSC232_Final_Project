void checkingMenu(vector<ChkAcc> &chkList, int accNum)
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
                chkList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                chkList[accNum].withdraw(amount);
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

void savingMenu(vector<SavAcc> &savList, int accNum)
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
                savList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                savList[accNum].withdraw(amount);
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

void cdMenu(vector<CD> &cdList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Display Remaining Days \n";
        cout << "[2] Display Balance \n";
        cout << "[3] Withdraw\n";
        cout << "[4] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nYour Remaining Days: " << cdList[accNum].getRemainDays() << endl;
                break;
            }
            case 2:
            {
                cout << "\nYour Balance: " << cdList[accNum].getBalance() << endl;
                break;
            }
            case 3:
            {
                cdList[accNum].withdraw(0);
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

void uMenu(vector<ClassU> &uList, int accNum)
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
                uList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                uList[accNum].withdraw(amount);
                break;
            }
            case 3:
            {
                uList[accNum].printLast7Days();
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

void vMenu(vector<ClassV> &vList, int accNum)
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
                vList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                vList[accNum].withdraw(amount);
                break;
            }
            case 3:
            {
                vList[accNum].printLast7Days();
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

void xMenu(vector<ClassX> &xList, int accNum)
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
                xList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                xList[accNum].withdraw(amount);
                break;
            }
            case 3:
            {
                xList[accNum].printLast7Days();
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

void yMenu(vector<ClassY> &yList, int accNum)
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
                yList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                yList[accNum].withdraw(amount);
                break;
            }
            case 3:
            {
                yList[accNum].printLast7Days();
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

void zMenu(vector<ClassZ> &zList, int accNum)
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
                zList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount\n";
                double amount = getAmount();
                zList[accNum].withdraw(amount);
                break;
            }
            case 3:
            {
                zList[accNum].printLast7Days();
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

void customerMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] CD Account\n";
        cout << "[4] U Account\n";
        cout << "[5] V Account\n";
        cout << "[6] X Account\n";
        cout << "[7] Y Account\n";
        cout << "[8] Z Account\n";
        cout << "[9] Go back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                if (chkList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getChkID();
                    for (int i = 0; i < chkList.size(); i++)
                    {
                        if (chkList[i].getID() == id)
                        {
                            found = true;
                            if(chkList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
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
                if (loggedIn)
                {
                    chkList[accNum].calcInt();
                    checkingMenu(chkList, accNum);
                }
                break;
            }
            case 2:
            {
                if (savList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getSavID();
                    for (int i = 0; i < savList.size(); i++)
                    {
                        if (savList[i].getID() == id)
                        {
                            found = true;
                            if (savList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
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
                if (loggedIn)
                {
                    savList[accNum].calcInt();
                    savingMenu(savList, accNum);
                }
                break;
            }
            case 3:
            {
                if (cdList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getCDID();
                    for (int i = 0; i < cdList.size(); i++)
                    {
                        if (cdList[i].getID() == id)
                        {
                            found = true;
                            if (cdList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
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
                if (loggedIn)
                {
                    cdList[accNum].calcInt();
                    cdMenu(cdList, accNum);
                }
                break;
            }
            case 4:
            {
                if (uList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getUID();
                    for (int i = 0; i < uList.size(); i++)
                    {
                        if (uList[i].getID() == id)
                        {
                            found = true;
                            if (uList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (uList[i].getPassword() == password)
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
                if (loggedIn)
                {
                    uList[accNum].calcInt();
                    uMenu(uList, accNum);
                }
                break;
            }
            case 5:
            {
                if (vList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getVID();
                    for (int i = 0; i < vList.size(); i++)
                    {
                        if (vList[i].getID() == id)
                        {
                            found = true;
                            if (vList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (vList[i].getPassword() == password)
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
                if (loggedIn)
                {
                    vList[accNum].calcInt();
                    vMenu(vList, accNum);
                }
                break;
            }
            case 6:
            {
                if (xList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getXID();
                    for (int i = 0; i < xList.size(); i++)
                    {
                        if (xList[i].getID() == id)
                        {
                            found = true;
                            if (xList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (uList[i].getPassword() == password)
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
                if (loggedIn)
                {
                    xList[accNum].calcInt();
                    xMenu(xList, accNum);
                }
                break;
            }
            case 7:
            {
                if (yList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getYID();
                    for (int i = 0; i < yList.size(); i++)
                    {
                        if (yList[i].getID() == id)
                        {
                            found = true;
                            if (yList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (yList[i].getPassword() == password)
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
                if (loggedIn)
                {
                    yList[accNum].calcInt();
                    yMenu(yList, accNum);
                }
                break;
            }
            case 8:
            {
                if (zList.size() == 0)
                {
                    cout << "\nThere Are Currently No Account Of This Type\n";
                    break;
                }
                int accNum;
                bool found = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getZID();
                    for (int i = 0; i < zList.size(); i++)
                    {
                        if (zList[i].getID() == id)
                        {
                            found = true;
                            if (zList[i].isOnline())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (zList[i].getPassword() == password)
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
                if (loggedIn)
                {
                    zList[accNum].calcInt();
                    zMenu(zList, accNum);
                }
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
