/*
- This file contains definitions of CD class's functions
*/

#include "include.h"

using namespace std;

CD::CD(string newID, double newBalance, string newPassword = "", string newFname = "", string newLname = "", string newPhoneNum = "") : BankAcc(newID, newPassword, newFname, newLname, newPhoneNum, 0.0, 0.0, newBalance)
{
    ID = newID.insert(0, "D");  //insert a D at the start of the acc number
    setInterestRate(0.02);
}

int CD::getTermLength() { return termLength; }
int CD::getRemainDays() { return remainDays; }
double CD::getReturnAmount() { return returnAmount; }

void CD::calcInt()
{
    int yearNow = getCurrentY();  //get the current year
    int monthNow = getCurrentM();
    int dayNow = getCurrentD();          //get the current day after Jan 1st
    //cout << "|" << lastYearCounted << "|" << lastDayCounted << "|" << yearNow << "|" << dayNow << "|" << endl;
    if (yearNow == lastYearCounted)     //if we're in the same year as the year the account is created
    {
        if (monthNow == lastMonthCounted)
        {
            for (int day = lastDayCounted + 1; day <= dayNow; day++)    //loop from day the account created to today
            {
                if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
                updateDailyBalance(yearNow);    //update the balance
                saveHistory(yearNow, monthNow, day);
            }
        }
        else if (monthNow > lastMonthCounted)
        {
            for (int day = lastDayCounted + 1; day <= getMonthDays(yearNow, lastMonthCounted); day++)    //loop from day the account created to today
            {
                if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
                updateDailyBalance(yearNow);    //update the balance
                saveHistory(yearNow, lastMonthCounted, day);
            }
            monthlyCharge();
            for (int month = lastMonthCounted + 1; month < monthNow; month++)
            {
                for (int day = 1; day <= getMonthDays(yearNow, month); day++)
                {
                    if (remainDays <= 0)
                    {
                        return;
                    }
                    remainDays--;
                    updateDailyBalance(yearNow);
                    saveHistory(yearNow, month, day);
                }
                monthlyCharge();
            }
            for (int day = 1; day <= dayNow; day++)
            {
                if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
                updateDailyBalance(yearNow);
                saveHistory(yearNow, monthNow, day);
            }
        }
        
    }
    if (yearNow > lastYearCounted)      //if at least 1 new year has passed since we created the account
    {
        //loop from the day the account was created until the last day of the year the account was created
        for (int day = lastDayCounted + 1; day <= getMonthDays(lastYearCounted, lastMonthCounted); day++)
        {
            if (remainDays <= 0)
            {
                return;
            }
            remainDays--;
            updateDailyBalance(lastYearCounted);    //update the balance daily
            saveHistory(lastYearCounted, lastMonthCounted, day);
        }
        monthlyCharge();     //deduct the service charge
        for (int month = lastMonthCounted + 1; month <= 12; month++)
        {
            for (int day = 1; day <= getMonthDays(lastYearCounted, month); day++)
            {
                if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
                updateDailyBalance(lastYearCounted);
                saveHistory(lastYearCounted, month, day);
            }
            monthlyCharge();
        }
        //loop for all the year in between
        for (int year = lastYearCounted + 1; year < yearNow; year++)
        {
            //loop for all the days in that year
            for (int month = 1; month <= 12; month++)
            {
                for (int day = 1; day <= getMonthDays(year, month); day++)
                {
                    if (remainDays <= 0)
                    {
                        return;
                    }
                    remainDays--;
                    updateDailyBalance(year);
                    saveHistory(year, month, day);
                }
                monthlyCharge();
            }
        }
        for (int month = 1; month < monthNow; month++)
        {
            for (int day = 1; day <= getMonthDays(yearNow, month); day++)
            {
                if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
                updateDailyBalance(yearNow);
                saveHistory(yearNow, month, day);
            }
            monthlyCharge();
        }
        for (int day = 0; day < dayNow; day++)  //loop from Jan 1st of the current year to the current day
        {
            if (remainDays <= 0)
                {
                    return;
                }
                remainDays--;
            updateDailyBalance(yearNow);
            saveHistory(yearNow, monthNow, day);
        }
    }
    lastYearCounted = yearNow;      //update the last time the balance was updated
    lastMonthCounted = monthNow;
    lastDayCounted = dayNow;
}

void CD::deposit(double var)
{
    cout << "Bro this is a CD. No deposit." << endl;
    return;
}

void CD::withdraw(double var)
{
    if (remainDays > 0)
    {
        cout << "\nYou Withdrawed The Balance Prematurely. A Fee of 10% Of The Current Balance Will Be Applied.";
        balance = balance*0.9;  //if the term get cancelled prematurely, the customer loses 10% of the total balance at that time ~~EVIL~~ >:))
    }
    returnAmount = balance;
    balance = 0.0;
    cout << "\nYou Withdrawed $" << returnAmount << " From This Account Balance.\nNew Balance: " << balance << "\n";
    saveTransactionHistory('W', returnAmount);
    saveData();
    closeAcc();
}

void CD::closeAcc()
{
    online = false;
    
    closeY = getCurrentY();
    closeM = getCurrentM();
    closeD = getCurrentD();
}