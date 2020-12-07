void checkingMenu(vector<ChkAcc> &chkList, int accNum)
{
    cout << "\nWelcome Back, " << chkList[accNum].getFname() << " " << chkList[accNum].getLname() << ".\n";
    string minut = to_string(chkList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << chkList[accNum].getLastMonthCounted() << "/" << chkList[accNum].getLastDayCounted() << "/" << chkList[accNum].getLastYearCounted() << " at " << chkList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    chkList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            chkList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << chkList[accNum].getFname() << " " << chkList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << chkList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << chkList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << chkList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << chkList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << chkList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << chkList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            chkList[accNum].calcInt();
            chkList[accNum].saveData();
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
    cout << "\nWelcome Back, " << savList[accNum].getFname() << " " << savList[accNum].getLname() << ".\n";
    string minut = to_string(savList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << savList[accNum].getLastMonthCounted() << "/" << savList[accNum].getLastDayCounted() << "/" << savList[accNum].getLastYearCounted() << " at " << savList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    savList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            savList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << savList[accNum].getFname() << " " << savList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << savList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << savList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << savList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << savList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << savList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << savList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            savList[accNum].calcInt();
            savList[accNum].saveData();
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
    cout << "Welcome Back, " << cdList[accNum].getFname() << " " << cdList[accNum].getLname() << ".\n";
    string minut = to_string(cdList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << cdList[accNum].getLastMonthCounted() << "/" << cdList[accNum].getLastDayCounted() << "/" << cdList[accNum].getLastYearCounted() << " at " << cdList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    cdList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Display Remaining Days \n";
        cout << "\t[2] Display Balance \n";
        cout << "\t[3] Withdraw\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << cdList[accNum].getFname() << " " << cdList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << cdList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << cdList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: $" << cdList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << cdList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << cdList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << cdList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            cdList[accNum].calcInt();
            cdList[accNum].saveData();
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
    cout << "Welcome Back, " << uList[accNum].getFname() << " " << uList[accNum].getLname() << ".\n";
    string minut = to_string(uList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << uList[accNum].getLastMonthCounted() << "/" << uList[accNum].getLastDayCounted() << "/" << uList[accNum].getLastYearCounted() << " at " << uList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    uList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            uList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << uList[accNum].getFname() << " " << uList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << uList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << uList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << uList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << uList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << uList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << uList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            uList[accNum].calcInt();
            uList[accNum].saveData();
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
    cout << "Welcome Back, " << vList[accNum].getFname() << " " << vList[accNum].getLname() << ".\n";
    string minut = to_string(vList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << vList[accNum].getLastMonthCounted() << "/" << vList[accNum].getLastDayCounted() << "/" << vList[accNum].getLastYearCounted() << " at " << vList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    vList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            vList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << vList[accNum].getFname() << " " << vList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << vList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << vList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << vList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << vList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << vList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << vList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            vList[accNum].calcInt();
            vList[accNum].saveData();
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
    cout << "Welcome Back, " << xList[accNum].getFname() << " " << xList[accNum].getLname() << ".\n";
    string minut = to_string(xList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << xList[accNum].getLastMonthCounted() << "/" << xList[accNum].getLastDayCounted() << "/" << xList[accNum].getLastYearCounted() << " at " << xList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    xList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            xList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << xList[accNum].getFname() << " " << xList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << xList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << xList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << xList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << xList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << xList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << xList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            xList[accNum].calcInt();
            xList[accNum].saveData();
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
    cout << "Welcome Back, " << yList[accNum].getFname() << " " << yList[accNum].getLname() << ".\n";
    string minut = to_string(yList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << yList[accNum].getLastMonthCounted() << "/" << yList[accNum].getLastDayCounted() << "/" << yList[accNum].getLastYearCounted() << " at " << yList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    yList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            yList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << yList[accNum].getFname() << " " << yList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << yList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << yList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << yList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << yList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << yList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << yList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            yList[accNum].calcInt();
            yList[accNum].saveData();
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
    cout << "Welcome Back, " << zList[accNum].getFname() << " " << zList[accNum].getLname() << ".\n";
    string minut = to_string(zList[accNum].getLastMinCounted());
    if (minut.length() == 1)
    {
        minut.insert(0, "0");
    }
    cout << "Your last login date was in " << zList[accNum].getLastMonthCounted() << "/" << zList[accNum].getLastDayCounted() << "/" << zList[accNum].getLastYearCounted() << " at " << zList[accNum].getLastHourCounted() << ":" << minut << ".\n";
    zList[accNum].calcInt();
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Deposit\n";
        cout << "\t[2] Withdraw\n";
        cout << "\t[3] Transaction In The Last 7 Days\n";
        cout << "\t[4] Display Information\n";
        cout << "\t[5] Log Out\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter The Deposit Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
            zList[accNum].deposit(amount);
            break;
        }
        case 2:
        {
            cout << "\nPlease Enter The Withdraw Amount, Or Enter \"quit\" To Return To The Previous Menu: $";
            double amount = getAmount();
            if (amount == -1.0)
            {
                break;
            }
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
            cout << "\nYour Account Data: ";
            cout << "\n\tName: " << zList[accNum].getFname() << " " << zList[accNum].getLname() << endl;
            cout << "\tPhone Number: " << zList[accNum].getPhoneNum() << endl;
            cout << "\tCurrent Balance: $" << zList[accNum].getBalance() << endl;
            cout << "\tYearly Interest Rate: " << zList[accNum].getInterestRate() * 100.0 << "%" << endl;
            cout << "\tMonthly Fees: $" << zList[accNum].getServCharge() << endl;
            cout << "\tSafe Level (Stay Above This Level To Avoid Additional Service Fees): $" << zList[accNum].getSafeLevel() << endl;
            cout << "\tAdditional Fees (Applied Each Month On Top Of The Normal Monthly Fees): $" << zList[accNum].getPenalty() << endl;
            break;
        }
        case 5:
        {
            done = true;
            zList[accNum].calcInt();
            zList[accNum].saveData();
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
        cout << "Please Choose The Type Of The Account You Want To Login As:\n";
        cout << "\t[1] Checking Account\n";
        cout << "\t[2] Saving Account\n";
        cout << "\t[3] CD Account\n";
        cout << "\t[4] U Account\n";
        cout << "\t[5] V Account\n";
        cout << "\t[6] X Account\n";
        cout << "\t[7] Y Account\n";
        cout << "\t[8] Z Account\n";
        cout << "\t[9] Go back\n";
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
            while (!found)
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
                        if (chkList[i].isOnline())
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
            while (!found)
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
            while (!found)
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
            while (!found)
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
            while (!found)
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
            while (!found)
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
            while (!found)
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
            while (!found)
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
