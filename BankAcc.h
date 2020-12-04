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
    int openM;
    int openD;
    int closeY;
    int closeM;
    int closeD;
    double balance; //account balance
    double safeLevel;
    double penalty;
    double interestRate;    //yearly interest rate
    double servCharge;      //yearly service charge
    bool online = true;     //online status; false means the account is closed
    bool fixedInterest = false;
    int lastYearCounted;    //last year the balance was updated
    int lastMonthCounted;
    int lastDayCounted;     //last day in year the balance was updated

    public:
    int getYearDays(int currentYear);
    int getMonthDays(int currentYear, int currentMonth);
    void updateDailyBalance(int year);  //update the balance after a day
    //getters and setters
    string getID();
    string getPassword();
    string getFname();
    string getLname();
    string getPhoneNum();
    int getOY();
    int getOM();
    int getOD();
    int getCY();
    int getCM();
    int getCD();     
    double getBalance();
    double getSafeLevel();
    double getPenalty();
    double getInterestRate();
    double getServCharge();
    bool isOnline();
    bool isInterestFixed();
    int getLastYearCounted();
    int getLastMonthCounted();
    int getLastDayCounted();
    void setID(string newID);
    void setBalance(double newBalance);
    void setSafeLevel(double newLevel);
    void setPenalty(double newPenalty);
    void setInterestRate(double newInterestRate);
    void setServCharge(double newServCharge);
    void setOnlStat(bool newOnlStat);
    void setFixedInterest(bool newFixedInterest);
    void setLastYearCounted(int newLastYearCounted);
    void setLastMonthCounted(int newLastMonthCounted);
    void setLastDayCounted(int newLastDayCounted);      
    //end of getters and setters
    BankAcc(string newID, string newPassword, string newFname, string newLname, string newPhoneNum, double newInterestRate, double newServCharge, double newBalance);     //constructor
    void updateOnlStat();
    virtual void deposit(double var) = 0;   //pure virtual function to deposit - to be overridden
    virtual void withdraw(double var) = 0;  //pure virtual function to withdraw - to be overridden
    void setLastTimeCounted();      //set the last time the balance was updated
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();
    int getCurrentH();
    int getCurrentMin();
    void calcInt();                 //update the balance
    virtual void monthlyCharge();    //charge the service fee
    void saveData();
    void loadData();
    void saveHistory(int year, int month, int day);
    void saveTransactionHistory(char type, double amount);
    void printAllHistory();
    void printLast7Days();
    void getDayHistory(string text);
    string encryption(string rawString);
    string decryption(string encryptedString);
    virtual void closeAcc() = 0;    //pure virtual function to close the acc - to be overridden
};