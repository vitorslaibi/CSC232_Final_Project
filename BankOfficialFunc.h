/*
- This file contains the definition of the BankOfficial class functions
*/

#include "include.h"
using namespace std;

BankOfficial::BankOfficial(string newID, string newPassword = "", string newFname = "",string newLname = "")
{
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

void BankOfficial::closeChkAcc(ChkAcc &account){
    account.setOnlStat(false);
    saveInfoChk(account);
}
void BankOfficial::closeSavAcc(SavAcc &account){
    account.setOnlStat(false);
    saveInfoSav(account);
}

void BankOfficial::closeCD(CD &account){
    account.setOnlStat(false);
    saveInfoCD(account);
}

void BankOfficial::closeUAcc(ClassU &account){
    account.setOnlStat(false);
    saveInfoU(account);
}

void BankOfficial::closeVAcc(ClassV &account){
    account.setOnlStat(false);
    saveInfoV(account);
}

void BankOfficial::closeXAcc(ClassX &account){
    account.setOnlStat(false);
    saveInfoX(account);
}

void BankOfficial::closeYAcc(ClassY &account){
    account.setOnlStat(false);
    saveInfoY(account);
}

void BankOfficial::closeZAcc(ClassZ &account){
    account.setOnlStat(false);
    saveInfoZ(account);
}



void BankOfficial::saveInfoChk(ChkAcc &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " " << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
}

void BankOfficial::saveInfoSav(SavAcc &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoCD(CD &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoU(ClassU &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoV(ClassV &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoX(ClassX &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoY(ClassY &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::saveInfoZ(ClassZ &account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "Bank Official: " << endl;
    outFile << fName << " ";
    outFile << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" << getCurrentD() << "/" << getCurrentY() << endl;
    outFile.close();
}

void BankOfficial::chkDeposit(ChkAcc &account, double amount){
    account.deposit(amount);
}

void BankOfficial::savDeposit(SavAcc &account, double amount){
    account.deposit(amount);
}

void BankOfficial::uDeposit(ClassU &account, double amount){
    account.deposit(amount);
}

void BankOfficial::vDeposit(ClassV &account, double amount){
    account.deposit(amount);
}

void BankOfficial::xDeposit(ClassX &account, double amount){
    account.deposit(amount);
}

void BankOfficial::yDeposit(ClassY &account, double amount){
    account.deposit(amount);
}

void BankOfficial::zDeposit(ClassZ &account, double amount){
    account.deposit(amount);
}

void BankOfficial::chkWithdraw(ChkAcc &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::savWithdraw(SavAcc &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::cdWithdraw(CD &account){
    account.withdraw(0.0);
}

void BankOfficial::uWithdraw(ClassU &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::vWithdraw(ClassV &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::xWithdraw(ClassX &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::yWithdraw(ClassY &account, double amount){
    account.withdraw(amount);
}

void BankOfficial::zWithdraw(ClassZ &account, double amount){
    account.withdraw(amount);
}

//these functions print account info if search is succesful
void BankOfficial::searchChk(ChkAcc &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
}

void BankOfficial::searchSav(SavAcc &account){
    cout << "\nSaving Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void BankOfficial::searchCD(CD &account){
    cout << "\nCD Number: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
    cout << "Remaining Days: " << account.getRemainDays() << endl;

}

void BankOfficial::searchU(ClassU &account){
    cout << "\nU Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void BankOfficial::searchV(ClassV &account){
    cout << "\nV Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void BankOfficial::searchX(ClassX &account){
    cout << "\nX Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void BankOfficial::searchY(ClassY &account){
    cout << "\nY Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void BankOfficial::searchZ(ClassZ &account){
    cout << "\nZ Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

//save official info in file
void BankOfficial::saveData(){
    
    ofstream outFile;

    outFile.open(ID + ".txt", fstream::trunc);

    string text;
    text = encryption(fName);
    outFile << text << endl;
    text = encryption(lName);
    outFile << text << endl;
    text = to_string(openY);
    text = encryption(text);
    outFile << text << endl;
    text = to_string(openM);
    text = encryption(text);
    outFile << text << endl;
    text = to_string(openD);
    text = encryption(text);
    outFile << text << endl;
    text = to_string(online);
    text = encryption(text);
    outFile << text << endl;
    text = encryption(password);
    outFile << text << endl;
    
    outFile.close();
}

void BankOfficial::loadData(){
    
    ifstream inFile;

    inFile.open(ID + ".txt");

    string text;
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    fName = text;
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    lName = text;
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    openY = stoi(text);
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    openM = stoi(text);
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    openD = stoi(text);
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    if (text == "0")
    {
        online = false;
    }
    else
    {
        online = true;
    }
    getline(inFile, text);
    text = decryption(text);
    stripSpace(text);
    password = text;
    inFile.close();
}

string BankOfficial::encryption(string rawString)
{
    char element;
    string encryptedString = "";
    for (int i = 0; i < rawString.length(); i++)
    {
        element = rawString.at(i);
        element = 158 - element;
        encryptedString += element;
    }
    return encryptedString;
}

string BankOfficial::decryption(string encryptedString)
{
    char element;
    string rawString = "";
    for (int i = 0; i < encryptedString.length(); i++)
    {
        element = encryptedString.at(i);
        element = 158 - element;
        rawString += element;
    }
    return rawString;
}
