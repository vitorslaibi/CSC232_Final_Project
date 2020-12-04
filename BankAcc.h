/*
- This file contains the BankAcc class, a prototype for the other classes.
- Its members are protected, which include an account's number, balance, interest rate, yearly service charge,
  online status, and last time (day and year) the balance was updated.
- Its functions include a constructor to initialize the members, members getter and setter, time-related functions, functions to update
  the balance, and a function to close the account.
*/
#include "include.h"    //include all files/libraries

using namespace std;

class BankAcc
{
    protected:
    string ID;  //account number
    string password;  //password
    string fName;     //customer first name
    string lName;     //customer last name
    string phoneNum;  //customer phone number
    int openY;        //the year the account get opened
    int openM;        //the month the account get opened
    int openD;        //the day the account get opened
    int closeY;       //the year the account get closed
    int closeM;       //the month the account get closed
    int closeD;       //the day the account get closed
    double balance; //account balance
    double safeLevel; //the safe benchmark for balance, if the balance goes below this amount, a penalty will be applied each month
    double penalty;   //the penalty amount
    double interestRate;    //yearly interest rate
    double servCharge;      //yearly service charge
    bool online = true;     //online status; false means the account is closed
    bool fixedInterest = false;   //flag indicates if the interest is fixed or variable for the account type
    int lastYearCounted;    //last year the balance was updated
    int lastMonthCounted;   //last month the balance was updated
    int lastDayCounted;     //last day in month the balance was updated

    public:
    int getYearDays(int currentYear);   //get number of days in a given year
    int getMonthDays(int currentYear, int currentMonth);  //get number of day in a given month of a given year
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
<<<<<<< HEAD
    void updateOnlStat();   //set online stat for account
    virtual void deposit(double var) = 0;   //pure virtual function to deposit - to be overridden
    virtual void withdraw(double var) = 0;  //pure virtual function to withdraw - to be overridden
=======
    void updateOnlStat();
    virtual void deposit(double var);   //pure virtual function to deposit - to be overridden
    virtual void withdraw(double var);  //pure virtual function to withdraw - to be overridden
>>>>>>> 3dd02367f5f114edab59b79a3d4625255348f924
    void setLastTimeCounted();      //set the last time the balance was updated
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();
    int getCurrentH();
    int getCurrentMin();
    void calcInt();                  //update the balance
    virtual void monthlyCharge();    //charge the service fee
    void saveData();      //save customer data to a text file
    void loadData();      //load customer data from a text file
    void saveHistory(int year, int month, int day);   //save the day indicator to a text file
    void saveTransactionHistory(char type, double amount);   //save the transaction history made
    void printAllHistory();
    void printLast7Days();
    void getDayHistory(string text);  //get the history in a given day
    string encryption(string rawString);
    string decryption(string encryptedString);
    virtual void closeAcc() = 0;    //pure virtual function to close the acc - to be overridden
};