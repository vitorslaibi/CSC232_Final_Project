/*
- This file contains the definition of the SystemAdmin class functions
*/

#include "include.h"
using namespace std;

SystemAdmin::SystemAdmin(string newID, string newPassword = "", string newFname = "",string newLname = ""){
    ID = newID.insert(0, "A");
    password = newPassword;
    fName = newFname;
    lName = newLname;
    openY = getCurrentY();
    openM = getCurrentM();
    openD = getCurrentD();
    //totalA++;
}

string SystemAdmin::getID(){return SystemAdmin::ID;}
string SystemAdmin::getPassword(){return SystemAdmin::password;}
string SystemAdmin::getFname(){return SystemAdmin::fName;}
string SystemAdmin::getLname(){return SystemAdmin::lName;}

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

void SystemAdmin::enableOfficialAcc(BankOfficial &account){
    account.setOnlStat(true);
}
void SystemAdmin::disableOfficialAcc(BankOfficial &account){
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

void SystemAdmin::deleteChkAcc(){
    ChkAcc::active = false;
}

void SystemAdmin::deleteSavAcc(){
    SavAcc::active = false;
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


void SystemAdmin::searchChk(ChkAcc &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
}

void SystemAdmin::searchSav(SavAcc &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::searchCD(CD &account){
    cout << "\nCD Number: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;
    cout << "Remaining Days: " << account.getRemainDays() << endl;

}

void SystemAdmin::searchU(ClassU &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::searchV(ClassV &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::searchX(ClassX &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::searchY(ClassY &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::searchZ(ClassZ &account){
    cout << "\nChecking Account: " << account.getID() << endl;
    cout << "Name: " << account.getFname() << " " << account.getLname() << endl;
    cout << "Phone Number: " << account.getPhoneNum() << endl;
    cout << "Current Balance: " << account.getBalance() << endl;

}

void SystemAdmin::updateFile(string oldPassword, string newPassword, string filename){
    string line;
    ifstream inFile;

    inFile.open(filename);
    while(getline(inFile, line)){
        line.replace(line.find(oldPassword),oldPassword.length(),newPassword);
    }
    inFile.close();
}

void SystemAdmin::changePasswordChk(ChkAcc &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordSav(SavAcc &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordCD(CD &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordU(ClassU &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordV(ClassV &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordX(ClassX &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordY(ClassY &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

void SystemAdmin::changePasswordZ(ClassZ &account, string newPassword){
    string oldPassword = account.getPassword();
    account.setPassword(newPassword);
    string encPassword = encryption(password);
    string filename = account.getID() + ".txt";
    updateFile(oldPassword, encPassword, filename);
    
}

string SystemAdmin::encryption(string password){
    char c;
    string encString = "";
    for (int i = 0; i < password.length(); i++){
        c = password.at(i);
        c = 158 - c;
        encString += c;
    }
    return encString;
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
    outFile << password;
    outFile.close();
}

void SystemAdmin::loadData(){
    
    ifstream inFile;

    inFile.open(ID + ".txt");

    string text;
    getline(inFile, text);
    fName = text;
    getline(inFile, text);
    lName = text;
    getline(inFile, text);
    openY = stoi(text);
    getline(inFile, text);
    openM = stoi(text);
    getline(inFile, text);
    openD = stoi(text);
    getline(inFile, text);
    password = text;
    inFile.close();
}