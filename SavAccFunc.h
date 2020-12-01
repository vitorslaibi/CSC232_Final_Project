/*
- This file contains definitions of SavAcc class's functions
*/

#include "include.h"

using namespace std;

SavAcc::SavAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNum, double newInterestRate) : BankAcc(newID, newPassword, newFname, newLname, newInterestRate, 0.0)
{
    ID = newID.insert(0, "S");  //insert a C at the start of the acc number
}

void SavAcc::withdraw(double var)
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
void SavAcc::deposit(double var)
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

void SavAcc::closeAcc()
{
    online = false;
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}