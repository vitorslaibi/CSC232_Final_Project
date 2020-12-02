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
    void openAcc();
    void closeAcc(string accNumber);
    void saveCloseAccNum();
    void deposit(double ammount);
    void withdraw(double ammount);
    void searchByNum(string accNumber);
    void searchByName(string fName, string lName);
    void searchByPhone(string phone);
        
}