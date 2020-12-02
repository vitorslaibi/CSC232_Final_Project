/*
- This file contains ChkAcc class, a subclass of BankAcc, used to store checking accounts's data
- It has an extra member flag for detecting high risk account
- Its functions are all very familiar: getters, setters, constructor, withdraw, deposit and close acc functions
*/

#include "include.h"

using namespace std;

class CD : public BankAcc
{
private:
    int termLength = 183;
    int remainDays = termLength;

public:
    static bool active;
    int getTermLength();
    int getRemainDays();
    CD(string newID, string newPassword, string newFname, string newLname, string newPhoneNum);
    void calclnt();
    double withdraw();
    void closeAcc();
};