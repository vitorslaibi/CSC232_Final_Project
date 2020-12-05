/*
- This file contains CD class, a subclass of BankAcc, used to store checking accounts's data
- It has an extra member flag for detecting high risk account
- Its functions are all very familiar: getters, setters, constructor, withdraw, deposit and close acc functions
*/

#include "include.h"

using namespace std;

class CD : public BankAcc
{
private:
    int termLength = 183;   //fixed term length of 183 days
    int remainDays = termLength;    //days left until end of term
    double returnAmount;

public:
    static bool active;
    static int totalCD;
    int getTermLength();
    int getRemainDays();
    double getReturnAmount();
    CD(string newID, string newPassword, string newFname, string newLname, string newPhoneNum);
    void deposit(double var);
    void calcInt();
    void withdraw(double var);
    void closeAcc();
};