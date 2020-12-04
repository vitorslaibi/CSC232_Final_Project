/*
- This file contains the definition of the SystemAdmin class functions
*/

#include "include.h"
using namespace std;

SystemAdmin::SystemAdmin(string newID, string newPassword, string newFname,string newLname){
    ID = newID.insert(0, "A");
    password = newPassword;
    fName = newFname;
    lName = newLname;
    openY = getCurrentY();
    openM = getCurrentM();
    openD = getCurrentD();
}

string SystemAdmin::getID(){return ID}
string SystemAdmin::getPassword(){return password}
string SystemAdmin::getFname(){return fName}
string SystemAdmin::getLname(){return lName}

int SystemAdmin::getCurrentY() {
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_year + 1900;
}

int SystemAdmin::getCurrentM(){
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mon + 1;
}

int SystemAdmin::getCurrentD(){
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mday;
}

void SystemAdmin::createOfficialAcc(string newID, string newPassword, string newFname,string newLname){
    BankOfficial(newID, newPassword, newFname, newLname);
}

void SystemAdmin::enableOfficialAcc(BankOfficial account){
    account.setOnlStat(true);
}
void SystemAdmin::disableOfficialAcc(BankOfficial account){
    account.setOnlStat(false);
}

void SystemAdmin::createUacc(){
    ClassU::active = true;
}

void SystemAdmin::createVacc(){
    ClassV::active = true;
}

void SystemAdmin::createXacc(){
    ClassX::active = true;
}

void SystemAdmin::createYacc(){
    ClassY::active = true;
}

void SystemAdmin::createZacc(){
    ClassZ::active = true;
}

setInterestRate(double newInterestRate);
setServCharge(double newServCharge);

void modifyChkCharge(double newCharge){
    ChkAcc.setServCharge(newCharge);
}

void modifyChkInterest(double newInterest){
    ChkAcc.setInterestRate(newInterest);
}
void modifySavCharge(double newCharge){
    SavAcc.setServCharge(newCharge);
}

void modifySavInterest(double newInterest){
    SavAcc.setInterestRate(newInterest);
}

void modifyCDInterest(double newInterest){
    CD.setInterestRate(newInterest);
}

void SystemAdmin::deleteChkAcc(){
    Chk::active = false;
}

void SystemAdmin::deleteSavAcc(){
    Sav::active = false;
}

void SystemAdmin::deleteCDacc(){
    CD::active = false;
}

void SystemAdmin::deleteUacc(){
    ClassU::active = false;
}

void SystemAdmin::deleteVacc(){
    ClassV::active = false;
}

void SystemAdmin::deleteXacc(){
    ClassX::active = false;
}

void SystemAdmin::deleteYacc(){
    ClassY::active = false;
}

void SystemAdmin::deleteZacc(){
    ClassZ::active = false;
}
void SystemAdmin::retrieveID(ChkAcc account){
    ofstream outFile;
    outFile.open(account.getID() + ".txt", ofstream::app);
    //add bank official info to closed account file
    outFile << "System Admin: " << endl;
    outFile << fName << " " << lName << endl;
    outFile << ID << endl;
    outFile << "Account Closed at: " << getCurrentM() << "/" getCurrentD() << "/" << getCurrentY << endl;
}

void SystemAdmin::changePasswordChk(ChkAcc account, string newpassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename)
    
}

void SystemAdmin::changePasswordSav(SavAcc account, string newpassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename)
    
}

void SystemAdmin::changePasswordCD(CD account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename)
    
}
string SystemAdmin::encryption(string password){
    char c;
    string encString = "";
    for (int i = 0; i < password.length(); i++){
        c = password.at(i);
        c = 158 - element;
        encString += c;
    }
    return encString;
}

void updateFile(string oldPassword, string newPassword, string filename){
    string line;
    ofstream outFile;

    outFile.open(filename);
    while(getline(outFile, line){
        line.replace(line.find(oldPassword),oldPassword.length(),newPassword);
    }
    outFile.close();
}

//save admin info in file
void SystemAdmin::saveData(){
    
    ofstream outFile;

    outFile.open(ID + ".txt", fstream::trunc);

    outFile << fName << endl;
    outFile << lName << endl;
    outFile << openY << endl;
    outFile << openM << endl;
    outFile << openD << endl;
    outFile << password << endl;
    outFile.close();
}