/*
- This file contains ClassV class, a subclass of BankAcc, used to store checking accounts's data
- It has an extra member flag for detecting high risk account
- Its functions are all very familiar: getters, setters, constructor, withdraw, deposit and close acc functions
*/

#include "include.h"

using namespace std;

class ClassV : public BankAcc
{
private:

public:
    static bool active;
    static int totalV;
    ClassV(string newID, string newPassword, string newFname, string newLname, string newPhoneNum);
    void withdraw(double var) override;
    void deposit(double var) override;
    void closeAcc();
};