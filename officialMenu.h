//Open new checking account
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
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ChkAcc::totalChk++;
    chkList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new saving account
void openSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour Saving Account ID Is S" << to_string(savList.size()) << "\n";
    string id = to_string(savList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    SavAcc account(id, password, fName, lName, phone);
    account.setInterestRate(savInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    SavAcc::totalSav++;
    savList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new Certificat of Deposit account
void openCD(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    cout << "\nYour Certificate Of Deposit Account ID Is D" << to_string(cdList.size()) << "\n";
    string id = to_string(cdList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPlease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPlease Enter Your Phone Number\n";
    string phone = getPhone();
    cout << "\nPlease Enter Your Initial Balance\n";
    double balance = getAmount();
    
    CD account(id, balance, password, fName, lName, phone);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    CD::totalCD++;
    cdList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new U account
void openUacc(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour U Account ID Is U" << to_string(uList.size()) << "\n";
    string id = to_string(uList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    ClassU account(id, password, fName, lName, phone);
    account.setInterestRate(uInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ClassU::totalU++;
    uList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new V account
void openVacc(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour V Account ID Is V" << to_string(vList.size()) << "\n";
    string id = to_string(vList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    ClassV account(id, password, fName, lName, phone);
    account.setInterestRate(vInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ClassV::totalV++;
    vList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new X account
void openXacc(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour X Account ID Is X" << to_string(xList.size()) << "\n";
    string id = to_string(xList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    ClassX account(id, password, fName, lName, phone);
    account.setInterestRate(xInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ClassX::totalX++;
    xList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new Y account
void openYacc(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour Y Account ID Is Y" << to_string(yList.size()) << "\n";
    string id = to_string(yList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    ClassY account(id, password, fName, lName, phone);
    account.setInterestRate(yInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ClassY::totalY++;
    yList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}
//Open new Z account
void openZacc(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    cout << "\nYour Z Account ID Is Z" << to_string(zList.size()) << "\n";
    string id = to_string(zList.size());
    cout << "\nPlease Enter Your New Password\n";
    string password = getPassword();
    cout << "\nPlease Enter Your First Name\n";
    string fName = getFirstName();
    cout << "\nPLease Enter Your Last Name\n";
    string lName = getLastName();
    cout << "\nPLease Enter Your Phone Number\n";
    string phone = getPhone();
    

    ClassZ account(id, password, fName, lName, phone);
    account.setInterestRate(zInt);
    account.saveData();
    account.saveHistory(account.getCurrentY(), account.getCurrentM(), account.getCurrentD());
    ClassZ::totalZ++;
    zList.push_back(account);
    cout << "\nAccount Created.\n";
    cout << "\n\tID: " << id;
    cout << "\n\tPassword: " << password;
    cout << "\n\tName: " << fName << " " << lName;
    cout << "\n\tPhone Number: " << phone << endl;
}

//Close a Checking account
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
//Close a saving account
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
//Close a U account
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
                officList[accNum].closeUAcc(uList[i]);
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
//Close a V account
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
                officList[accNum].closeVAcc(vList[i]);
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
//Close a X account
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
                officList[accNum].closeXAcc(xList[i]);
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
//Close a Y account
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
                officList[accNum].closeYAcc(yList[i]);
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
//Close a Z account
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
                officList[accNum].closeZAcc(zList[i]);
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

//Deposit to checking account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (chkList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].chkDeposit(chkList[i], amount);
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
//Deposit to saving account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (savList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].savDeposit(savList[i], amount);
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
//Deposit to U account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (uList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].uDeposit(uList[i],amount);
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
//Deposit to V account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (vList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].vDeposit(vList[i],amount);
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
//Deposit to X account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (xList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].xDeposit(xList[i],amount);
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
//Deposit to Y account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (yList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].yDeposit(yList[i],amount);
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
//Deposit to Z account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Deposit.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (zList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Deposit: $";
                        double amount = getAmount();
                        officList[accNum].zDeposit(zList[i],amount);
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
//Go to deposit menu
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
                cout << "\nDeposited.\n";
                break;
            }
            case 2:
            { 
                officialDepositSaving(savList, officList, accNum);
                cout << "\nDeposited.\n";
                break;
            }
            case 3:
            { 
                officialDepositU(uList, officList, accNum);
                cout << "\nDeposited.\n";
                break;
            }
            case 4:
            { 
                officialDepositV(vList, officList, accNum);
                cout << "\nDeposited.\n";
                break;
            }
            case 5:
            { 
                officialDepositX(xList, officList, accNum);
                cout << "\nDeposited.\n";
                break;
            }
            case 6:
            { 
                officialDepositY(yList, officList, accNum);
                cout << "\nDeposited.\n";
                break;
            }
            case 7:
            { 
                officialDepositZ(zList, officList, accNum);
                cout << "\nDeposited.\n";
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

//Withdraw from checking account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (chkList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].chkWithdraw(chkList[i], amount);
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
//Withdraw from saving account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (savList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].savWithdraw(savList[i], amount);
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
//Withdraw from cd account, require user's permission
void officialWithdrawCD(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Would Like To Withdraw.\n";
        string id = getCDID();
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getID() == id)
            {
                found = true;
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (cdList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].cdWithdraw(cdList[i]);
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
//Withdraw from U account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (uList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].uWithdraw(uList[i],amount);
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
//Withdraw from V account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (vList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].vWithdraw(vList[i],amount);
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
//Withdraw from X account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (xList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].xWithdraw(xList[i],amount);
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
//Withdraw from Y account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (yList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].yWithdraw(yList[i],amount);
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
//Withdraw from Z account, require user's permission
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
                cout << "\nPlease Enter The Customer Password In Order To Make A Withdraw.\n";
                bool corPass = false;
                while (!corPass)
                {
                    string password = getPassword();
                    if (zList[i].getPassword() == password)
                    {
                        corPass = true;
                        cout << "\nPlease Enter The Amount You Would Like to Withdraw: $";
                        double amount = getAmount();
                        officList[accNum].zWithdraw(zList[i],amount);
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
//Go to withdraw menu
void officialWithdraw(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
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
        cout << "[9] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                officialWithdrawChecking(chkList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 2:
            { 
                officialWithdrawSaving(savList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 3:
            { 
                officialWithdrawCD(cdList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 4:
            { 
                officialWithdrawU(uList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 5:
            { 
                officialWithdrawV(vList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 6:
            { 
                officialWithdrawX(xList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 7:
            { 
                officialWithdrawY(yList, officList, accNum);
                cout << "\nWithdrawed.";
                break;
            }
            case 8:
            { 
                officialWithdrawZ(zList, officList, accNum);
                cout << "\nWithdrawed.";
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

//Go to open account menu
void openAccount(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStat, string &vStat, string &xStat, string &yStat, string &zStat, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
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
                openSaving(savList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
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
                if (ClassU::active)
                    openUacc(uList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
                break;
            }
            case 5:
            {
                if (ClassV::active)
                    openVacc(vList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
                break;
            }
            case 6:
            {
                if (ClassX::active)
                    openXacc(xList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
                break;
            }
            case 7:
            {
                if (ClassY::active)
                    openYacc(yList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
                }
                break;
            }
            case 8:
            {
                if (ClassZ::active)
                    openZacc(zList, officList, accNum, savInt, uInt, vInt, xInt, yInt, zInt);
                else
                {
                    cout << "\nThis Account Type Is Not Available To Be Used\n";
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
//Go to close account menu
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
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 2:
            { 
                closeSaving(savList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 3:
            { 
                closeU(uList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 4:
            { 
                closeV(vList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 5:
            { 
                closeX(xList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 6:
            { 
                closeY(yList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 7:
            { 
                closeZ(zList, officList, accNum);
                cout << "\nAccount Successfully Closed.\n";
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

//Search checking account by ID
void searchCheckingId(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getChkID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchChk(chkList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search checking account by name
void searchCheckingName(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getFname() == fName && chkList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchChk(chkList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search checking account by phone number
void searchCheckingPhone(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchChk(chkList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search checking account menu
void searchChecking(vector<ChkAcc> &chkList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search saving account by ID
void searchSavingId(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getSavID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchSav(savList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search saving account by name
void searchSavingName(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getFname() == fName && savList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchSav(savList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search saving account by phone number
void searchSavingPhone(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchSav(savList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search saving menu
void searchSaving(vector<SavAcc> &savList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search CD account by ID
void searchCDId(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getCDID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchCD(cdList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search CD account by name
void searchCDName(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getFname() == fName && cdList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchCD(cdList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search CD account by phone number
void searchCDPhone(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchCD(cdList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to seach CD menu
void searchCD(vector<CD> &cdList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search V account by ID
void searchVId(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getVID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchV(vList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search V account by name
void searchVName(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getFname() == fName && vList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchV(vList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search V account by phone number
void searchVPhone(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchV(vList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search V account menu
void searchV(vector<ClassV> &vList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search U account by ID
void searchUId(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getUID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchU(uList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search U account by name
void searchUName(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getFname() == fName && uList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchU(uList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search U account by phone number
void searchUPhone(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchU(uList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search U account menunu
void searchU(vector<ClassU> &uList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search X account by ID
void searchXId(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getXID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchX(xList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search X account by name
void searchXName(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getFname() == fName && xList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchX(xList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search X account by phone number
void searchXPhone(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchX(xList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search X account menunu
void searchX(vector<ClassX> &xList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search Y account by ID
void searchYId(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getYID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchY(yList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search Y account by name
void searchYName(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getFname() == fName && yList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchY(yList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search Y account by phone number
void searchYPhone(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchY(yList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search Y account menunu
void searchY(vector<ClassY> &yList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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

//Search Z account by ID
void searchZId(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getZID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                officList[accNum].searchZ(zList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search Z account by name
void searchZName(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if (fName == "quit")
        {
            break;
        }
        string lName = getLastName();
        if (lName == "quit")
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getFname() == fName && zList[i].getLname() == lName)
            {
                found = true;
                officList[accNum].searchZ(zList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search Z account by phone number
void searchZPhone(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool found = false;
    while(!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getPhoneNum() == phone)
            {
                found = true;
                officList[accNum].searchZ(zList[i]);
            }        
        }
        if (!found) 
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search Z account menunu
void searchZ(vector<ClassZ> &zList, vector<BankOfficial> &officList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
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
        cout << "What Type Of Account Do You Want To Search?\n";
        cout << "\t[1] Checking Account\n";
        cout << "\t[2] Saving Account\n";
        cout << "\t[3] Certificate of Deposit\n";
        cout << "\t[4] U Account\n";
        cout << "\t[5] V Account\n";
        cout << "\t[6] X Account\n";
        cout << "\t[7] Y Account\n";
        cout << "\t[8] Z Account\n";
        cout << "\t[9] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                searchChecking(chkList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 2:
            { 
                searchSaving(savList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 3:
            { 
                searchCD(cdList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 4:
            { 
                searchU(uList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 5:
            { 
                searchV(vList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 6:
            { 
                searchX(xList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 7:
            { 
                searchY(yList, officList, accNum);
                cout << "\nSearched.\n";
                break;
            }
            case 8:
            { 
                searchZ(zList, officList, accNum);
                cout << "\nSearched.\n";
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

void officialMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStat, string &vStat, string &xStat, string &yStat, string &zStat, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Open Account\n";
        cout << "\t[2] Close Account\n";
        cout << "\t[3] Search Account\n";
        cout << "\t[4] Deposit\n";
        cout << "\t[5] Withdraw\n";
        cout << "\t[6] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nChoose A Type Of Account To Open.\n";
                openAccount(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList, uStat, vStat, xStat, yStat, zStat, savInt, uInt, vInt, xInt, yInt, zInt);
                   //might print the info of the open account
                break;
            }
            case 2:
            {
                cout << "\nChoose A Type Of Account To Close.\n";
                closeAccount(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
                
                break;
            }
            case 3:
            {
                cout << "\nChoose A Type Of Account To Search.\n";
                officialSearch(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
                
                break;
            }
            case 4:
            {
                cout << "\nChoose A Type Of Account To Deposit.\n";
                officialDeposit(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList); 
                
                break;
            }
            case 5:
            {
                cout << "\nChoose A Type Of Account To Withdraw.\n";
                officialWithdraw(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList);
                
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
