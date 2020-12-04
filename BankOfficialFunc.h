/*
- This file contains the definition of the BankOfficial class functions
*/

#include "include.h"
using namespace std;

BankOfficial::BankOfficial(string newID, string newPassword, string newFname,string newLname){
    ID = newID.insert(0, "B");
    password = newPassword;
    fName = newFname;
    lName = newLname;
    openY = getCurrentY();
    openM = getCurrentM();
    openD = getCurrentD();
}

string BankOfficial::getID(){return ID;}
string BankOfficial::getPassword(){return password;}
string BankOfficial::getFname(){return fName;}
string BankOfficial::getLname(){return lName;}

int BankOfficial::getCurrentY() {
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_year + 1900;
}

int BankOfficial::getCurrentM(){
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mon + 1;
}

int BankOfficial::getCurrentD(){
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mday;
}

void BankOfficial::setOnlStat(bool newStatus){
    online = newStatus;
}

void BankOfficial::closeChkAcc(ChkAcc account){
    account.setOnlStat(false);
    saveInfoChk(account);
}
void BankOfficial::closeSavAcc(SavAcc account){
    account.setOnlStat(false);
    saveInfoSav(account);
}

void BankOfficial::closeCD(CD account){
    account.setOnlStat(false);
    saveInfCD(account);
}

void BankOfficial::saveInfoChk(ChkAcc account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " " << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" getCurrentY << endl;
}

void BankOfficial::saveInfoSav(SavAcc account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoCD(CD account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" getCurrentY() << endl;
    outFile.close();
}

double BankOfficial::BankOfficial::chkDeposit(ChkAcc account, double ammount){
    balance = account.getBalance();
    balance += ammount;
    return balance;
}

double BankOfficial::savDeposit(SavAcc account, double ammount){
    balance = account.getBalance();
    balance += ammount;
    return balance;
}

double BankOfficial::chkWithdraw(ChkAcc account, double ammount){
    balance = account.getBalance();
    balance -= ammount;
    return balance;
}

double BankOfficial::savWithdraw(SavAcc account, double ammount){
    balance = account.getBalance();
    balance -= ammount;
    return balance;
}

//these functions print account info if search is succesful
void BankOfficial::searchChk(ChkAcc account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
}
void BankOfficial::searchSav(SavAcc account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}
void BankOfficial::searchCD(CD account){
    cout << "\nCD Number: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
    cout << "Remaining Days: " << account.getRemainDays() << endl;

}

//save official info in file
void BankOfficial::saveData(){
    
    ofstream outFile;

    outFile.open(ID + ".txt", fstream::trunc);

    outFile << fName << endl;
    outFile << lName << endl;
    outFile << openY << endl;
    outFile << openM << endl;
    outFile << openD << endl;
    outFile << online << endl;
    outFile << password << endl;
    outFile.close();
}
