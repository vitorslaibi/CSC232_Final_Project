/*
- This file contains definitions of ChkAcc class's functions
*/

#include "include.h"

using namespace std;

ChkAcc::ChkAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNum) : BankAcc("C", newID, newPassword, newFname, newLname, newPhoneNum, 0.0, 0.0)
{
    ID = newID.insert(0, "C");  //insert a C at the start of the acc number
}

static bool ChkAcc::isActive() { return active; }
static void ChkAcc::setActStat(bool newActStat) { active = newActStat; }

void ChkAcc::withdraw(double var)
{
    if (!isOnline())    // if the account is closed, message the user
    {
        cout << "\nInactive Account Cannot Be Withdrawed From.\n";
        return;
    }
    if (var > balance)
    {
        cout << "\nWithdraw Ammount (" << var << ") Cannot Be Bigger Than The Account Balance (" << balance << ").\n";
    }
    else
    {
        balance -= var;
        saveTransactionHistory('W', var);
        saveData();
    }
    
}
void ChkAcc::deposit(double var)
{
    if (!isOnline())    // if the account is closed, message the user
    {
        cout << "\nInactive Account Cannot Be Deposited Into.\n";
        return;
    }
    else
    {
        balance += var;
        saveTransactionHistory('D', var);
        saveData();
    }
}

void ChkAcc::closeAcc()
{
    online = false;
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}