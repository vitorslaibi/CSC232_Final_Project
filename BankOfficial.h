/*
- This file contains the BankOfficial class
- Its members are private, which include officials' ID, password, first and last name, profile status and date of account
- The function include the constuctor, members getter and setter, functions to open/close account, deposit and withdraw from holders' account, and functions search accounts.
*/
#include "include.h"    //include all files/libraries

using namespace std;

class BankOfficial{

    private:
    string ID;   //login
    string password;
    string fName;
    string lName;
    int openY;
    int openM;
    int openD;
    bool online = true;  //login profile status; false means profile is disabled

    public:
    BankOfficial(string newID, string newPassword, string newFname,string newLname);
    string getID();
    string getPassword();
    string getFname();
    string getLname();
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();
    void setOnlStat(bool newStatus);

    void closeChkAcc(ChkAcc &account);
    void closeSavAcc(SavAcc &account);
    void closeCD(CD &account);

    void saveInfoChk(ChkAcc &account);
    void saveInfoSav(SavAcc &account);
    void saveInfoCD(CD &account);

    void chkDeposit(ChkAcc &account, double ammount);
    void savDeposit(SavAcc &account, double ammount);
    void chkWithdraw(ChkAcc &account, double ammount);
    void savWithdraw(SavAcc &account, double ammount);
    //print account info if search is succesful
    void searchChk(ChkAcc &account);
    void searchSav(SavAcc &account);
    void searchCD(CD &account);
    
    void saveData();
            
};
