/*
- This file contains definitions of ClassV class's functions
*/

#include "include.h"

using namespace std;

ClassV::ClassV(string newID = "", string newPassword = "", string newFname = "", string newLname = "", string newPhoneNum = "") : BankAcc(newID, newPassword, newFname, newLname, newPhoneNum, 0.0, 0.0)
{
    ID = newID.insert(0, "V");  //insert a V at the start of the acc number
    totalV++;
}

void ClassV::withdraw(double var)
{
    if (!isOnline())    // if the account is closed, message the user
    {
        cout << "\nInactive Account Cannot Be Withdrawed From.\n";
        return;
    }
    if (var > balance - penalty)
    {
        cout << "\nWithdraw Ammount (" << var << ") Cannot Be Bigger Than The Account Balance (" << balance << ") minus the penalty (" << penalty << ").\n";
    }
    else
    {
        balance -= var;
        updateOnlStat();
        saveTransactionHistory('W', var);
        saveData();
    }
    
}
void ClassV::deposit(double var)
{
    if (!isOnline())    // if the account is closed, message the user
    {
        cout << "\nInactive Account Cannot Be Deposited Into.\n";
        return;
    }
    else
    {
        balance += var;
        updateOnlStat();
        saveTransactionHistory('D', var);
        saveData();
    }
}

void ClassV::closeAcc()
{
    online = false;
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}