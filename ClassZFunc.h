/*
- This file contains definitions of ClassZ class's functions
*/

#include "include.h"

using namespace std;

ClassZ::ClassZ(string newID, string newPassword = "", string newFname = "", string newLname = "", string newPhoneNum = "") : BankAcc(newID, newPassword, newFname, newLname, newPhoneNum, 0.0, 0.0)
{
    ID = newID.insert(0, "Z");  //insert a Z at the start of the acc number
}

void ClassZ::withdraw(double var)
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
        cout << "\nYou Withdrawed $" << var << " From This Account Balance.\nNew Balance: " << balance << "\n";
        updateOnlStat();
        saveTransactionHistory('W', var);
        saveData();
    }
    
}
void ClassZ::deposit(double var)
{
    if (!isOnline())    // if the account is closed, message the user
    {
        cout << "\nInactive Account Cannot Be Deposited Into.\n";
        return;
    }
    else
    {
        balance += var;
        cout << "\nYou Deposited $" << var << " To This Account Balance.\nNew Balance: " << balance << "\n";
        updateOnlStat();
        saveTransactionHistory('D', var);
        saveData();
    }
}

void ClassZ::closeAcc()
{
    online = false;
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}