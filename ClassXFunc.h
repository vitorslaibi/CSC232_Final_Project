/*
- This file contains definitions of SavAcc class's functions
*/

#include "include.h"

using namespace std;

ClassX::ClassX(string newID, string newPassword, string newFname, string newLname, string newPhoneNum, double newInterestRate) : BankAcc(newID, newPassword, newFname, newLname, newPhoneNum, newInterestRate, 0.0)
{
    ID = newID.insert(0, "X");  //insert a C at the start of the acc number
}

void ClassX::withdraw(double var)
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
void ClassX::deposit(double var)
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

void ClassX::closeAcc()
{
    online = false;
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}