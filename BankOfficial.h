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
    static int totalB;
    BankOfficial(string newID, string newPassword, string newFname,string newLname);
    string getID();
    string getPassword();
    string getFname();
    string getLname();
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();
    bool isOnl() { return online; }
    void setOnlStat(bool newStatus);

    void closeChkAcc(ChkAcc &account);
    void closeSavAcc(SavAcc &account);
    void closeCD(CD &account);
    void closeUAcc(ClassU &account);
    void closeVAcc(ClassV &account);
    void closeXAcc(ClassX &account);
    void closeYAcc(ClassY &account);
    void closeZAcc(ClassZ &account);
    
    void saveInfoChk(ChkAcc &account);
    void saveInfoSav(SavAcc &account);
    void saveInfoCD(CD &account);
    void saveInfoU(ClassU &account);
    void saveInfoV(ClassV &account);
    void saveInfoX(ClassX &account);
    void saveInfoY(ClassY &account);
    void saveInfoZ(ClassZ &account);

    void chkDeposit(ChkAcc &account, double amount);
    void savDeposit(SavAcc &account, double amount);
    void uDeposit(ClassU &account, double amount);
    void vDeposit(ClassV &account, double amount);
    void xDeposit(ClassX &account, double amount);
    void yDeposit(ClassY &account, double amount);
    void zDeposit(ClassZ &account, double amount);
    void chkWithdraw(ChkAcc &account, double amount);
    void savWithdraw(SavAcc &account, double amount);
    void cdWithdraw(CD &account);
    void uWithdraw(ClassU &account, double amount);
    void vWithdraw(ClassV &account, double amount);
    void xWithdraw(ClassX &account, double amount);
    void yWithdraw(ClassY &account, double amount);
    void zWithdraw(ClassZ &account, double amount);
    //print account info if search is succesful
    void searchChk(ChkAcc &account);
    void searchSav(SavAcc &account);
    void searchCD(CD &account);
    void searchU(ClassU &account);
    void searchV(ClassV &account);
    void searchX(ClassX &account);
    void searchY(ClassY &account);
    void searchZ(ClassZ &account);
    
    void saveData();
    void loadData();
            
};
