void checkingMenu(vector<ChkAcc> &chkList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                chkList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << chkList[accNum].getFname() << " " << chkList[accNum].getLname() << endl;
                cout << "Phone Number: " << chkList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << chkList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << chkList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << chkList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << chkList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << chkList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                savList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << savList[accNum].getFname() << " " << savList[accNum].getLname() << endl;
                cout << "Phone Number: " << savList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << savList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << savList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << savList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << savList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << savList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
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
                cout << "\nYour Balance: $" << cdList[accNum].getBalance() << endl;
                break;
            }
            case 3:
            {
                cdList[accNum].withdraw(0);
                if (cdList[accNum].getRemainDays() > 0)
                {
                    cout << "\nYou withdraw your balance prematurely. A fee equal to 10% of your current balance is applied.\n";
                }
                cout << "You withdrawed $" << cdList[accNum].getReturnAmount() << ".\n";
                break;
            }
            case 4:
            {
                cout << "\nName: " << cdList[accNum].getFname() << " " << cdList[accNum].getLname() << endl;
                cout << "Phone Number: " << cdList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << cdList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: $" << cdList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << cdList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << cdList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << cdList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                uList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << uList[accNum].getFname() << " " << uList[accNum].getLname() << endl;
                cout << "Phone Number: " << uList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << uList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << uList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << uList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << uList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << uList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                vList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << vList[accNum].getFname() << " " << vList[accNum].getLname() << endl;
                cout << "Phone Number: " << vList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << vList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << vList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << vList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << vList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << vList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                xList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << xList[accNum].getFname() << " " << xList[accNum].getLname() << endl;
                cout << "Phone Number: " << xList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << xList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << xList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << xList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << xList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << xList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                yList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << yList[accNum].getFname() << " " << yList[accNum].getLname() << endl;
                cout << "Phone Number: " << yList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << yList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << yList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << yList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << yList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << yList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
        cout << "[4] Display Information\n";
        cout << "[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease Enter The Deposit Amount: $";
                double amount = getAmount();
                zList[accNum].deposit(amount);
                break;
            }
            case 2:
            {
                cout << "\nPlease Enter The Withdraw Amount: $";
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
                cout << "\nName: " << zList[accNum].getFname() << " " << zList[accNum].getLname() << endl;
                cout << "Phone Number: " << zList[accNum].getPhoneNum() << endl;
                cout << "Current Balance: $" << zList[accNum].getBalance() << endl;
                cout << "Yearly Interest Rate: " << zList[accNum].getInterestRate()*100.0 << "%" << endl;
                cout << "Monthly Fees: $" << zList[accNum].getServCharge() << endl;
                cout << "Safe Level (Stay Above This Level To Avoid Additional Service Fees): $" << zList[accNum].getSafeLevel() << endl;
                cout << "Additional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << zList[accNum].getPenalty() << endl;
                break;
            }
            case 5:
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getChkID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << chkList[accNum].getLastMonthCounted() << "/" << chkList[accNum].getLastDayCounted() << "/" << chkList[accNum].getLastYearCounted() << " at " << chkList[accNum].getLastHourCounted() << ":" << chkList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getSavID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << savList[accNum].getLastMonthCounted() << "/" << savList[accNum].getLastDayCounted() << "/" << savList[accNum].getLastYearCounted() << " at " << savList[accNum].getLastHourCounted() << ":" << savList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getCDID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << cdList[accNum].getLastMonthCounted() << "/" << cdList[accNum].getLastDayCounted() << "/" << cdList[accNum].getLastYearCounted() << " at " << cdList[accNum].getLastHourCounted() << ":" << cdList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getUID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << uList[accNum].getLastMonthCounted() << "/" << uList[accNum].getLastDayCounted() << "/" << uList[accNum].getLastYearCounted() << " at " << uList[accNum].getLastHourCounted() << ":" << uList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getVID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << vList[accNum].getLastMonthCounted() << "/" << vList[accNum].getLastDayCounted() << "/" << vList[accNum].getLastYearCounted() << " at " << vList[accNum].getLastHourCounted() << ":" << vList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getXID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << xList[accNum].getLastMonthCounted() << "/" << xList[accNum].getLastDayCounted() << "/" << xList[accNum].getLastYearCounted() << " at " << xList[accNum].getLastHourCounted() << ":" << xList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getYID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << yList[accNum].getLastMonthCounted() << "/" << yList[accNum].getLastDayCounted() << "/" << yList[accNum].getLastYearCounted() << " at " << yList[accNum].getLastHourCounted() << ":" << yList[accNum].getLastMinCounted() << ".\n";
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
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getZID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
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
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "Your last login date was in " << zList[accNum].getLastMonthCounted() << "/" << zList[accNum].getLastDayCounted() << "/" << zList[accNum].getLastYearCounted() << " at " << zList[accNum].getLastHourCounted() << ":" << zList[accNum].getLastMinCounted() << ".\n";
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
