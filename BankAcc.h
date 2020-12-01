/*
- This file contains the BankAcc class, a prototype for the SavAcc and ChkAcc class.
- Its members are protected, which include an account's number, balance, interest rate, yearly service charge,
  online status, and last time (day and year) the balance was updated.
- Its functions include a constructor to initialize the members, members getter and setter, functions to update
  the balance, and a function to close the account.
*/
#include "include.h"    //include all files/libraries

using namespace std;

class BankAcc
{
    protected:
    string ID;  //account number
    string password;
    string fName;
    string lName;
    string phoneNum;
    int openY;
    int openD;
    int closeY;
    int closeD;
    double balance; //account balance
    double interestRate;    //yearly interest rate
    double servCharge;      //yearly service charge
    bool online = true;     //online status; false means the account is closed
    int lastYearCounted;    //last year the balance was updated
    int lastMonthCounted;
    int lastDayCounted;     //last day in year the balance was updated

    public:
    void updateDailyBalance(int year);  //update the balance after a day
    //getters and setters
    string getID();
    string getPassword();
    string getFname();
    string getLname();
    string getPhoneNum();
    int getOY();
    int getOD();
    int getCY();
    int getCD();     
    double getBalance();
    double getInterestRate();
    double getServCharge();
    bool isOnline();
    int getLastYearCounted();
    int getLastMonthCounted();
    int getLastDayCounted();
    void setID(string newID);
    void setBalance(double newBalance);
    void setInterestRate(double newInterestRate);
    void setServCharge(double newServCharge);
    void setOnlStat(bool newOnlStat);
    void setLastYearCounted(int newLastYearCounted);
    void setLastMonthCounted(int newLastMonthCounted);
    void setLastDayCounted(int newLastDayCounted);      
    //end of getters and setters
    BankAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNum, double newInterestRate, double newServCharge, double newBalance);     //constructor
    virtual void deposit(double var) = 0;   //pure virtual function to deposit - to be overridden
    virtual void withdraw(double var) = 0;  //pure virtual function to withdraw - to be overridden
    void setLastTimeCounted();      //set the last time the balance was updated
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();
    void calclnt();                 //update the balance
    virtual void monthlyCharge();    //charge the service fee
    virtual void closeAcc() = 0;    //pure virtual function to close the acc - to be overridden
};