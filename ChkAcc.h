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

public:
    static bool active;     //flag to see if new accounts can be created
    static int totalChk;
    ChkAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNum);
    void withdraw(double var) override;
    void deposit(double var) override;
    void closeAcc();
};