/*
- This file contains ChkAcc class, a subclass of BankAcc, used to store checking accounts's data
- It has an extra member flag for detecting high risk account
- Its functions are all very familiar: getters, setters, constructor, withdraw, deposit and close acc functions
*/

#include "include.h"

using namespace std;

class ChkAcc : public BankAcc
{
private:
    static bool active = true;

public:
    ChkAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNume);
    static bool isActive();
    static void setActStat(bool newActStat);
    void withdraw(double var) override;
    void deposit(double var) override;
    void closeAcc();
};