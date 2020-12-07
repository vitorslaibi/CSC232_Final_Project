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
    cout << "\nChecking Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";
}

void SystemAdmin::searchSav(SavAcc &account){
    cout << "\nSaving Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

}

void SystemAdmin::searchCD(CD &account){
    cout << "\nCD Number: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";
    cout << "Remaining Days: " << account.getRemainDays() << "\n";

}

void SystemAdmin::searchU(ClassU &account){
    cout << "\nU Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

}

void SystemAdmin::searchV(ClassV &account){
    cout << "\nV Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

}

void SystemAdmin::searchX(ClassX &account){
    cout << "\nX Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

}

void SystemAdmin::searchY(ClassY &account){
    cout << "\nY Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

}

void SystemAdmin::searchZ(ClassZ &account){
    cout << "\nZ Account: " << account.getID() << "\n";
    cout << "Name: " << account.getFname() << " " << account.getLname() << "\n";
    cout << "Phone Number: " << account.getPhoneNum() << "\n";
    cout << "Current Balance: " << account.getBalance() << "\n";

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
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordSav(SavAcc &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordCD(CD &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordU(ClassU &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordV(ClassV &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordX(ClassX &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
}

void SystemAdmin::changePasswordY(ClassY &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
}

void SystemAdmin::changePasswordZ(ClassZ &account, string newPassword){
    // string oldPassword = account.getPassword();
    // account.setPassword(newPassword);
    // string encPassword = encryption(password);
    // string filename = account.getID() + ".txt";
    // updateFile(oldPassword, encPassword, filename);
    account.setPassword(newPassword);
    
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

string SystemAdmin::decryption(string encryptedString)
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

//save admin info in file
void SystemAdmin::saveData(){
    
    ofstream outFile;

    outFile.open(ID + ".txt", fstream::trunc);

    string text;
    text = encryption(fName);
    stripSpace(text);
    outFile << text << "\n";
    text = encryption(lName);
    stripSpace(text);
    outFile << text << "\n";
    text = to_string(openY);
    text = encryption(text);
    stripSpace(text);
    outFile << text << "\n";
    text = to_string(openM);
    text = encryption(text);
    stripSpace(text);
    outFile << text << "\n";
    text = to_string(openD);
    text = encryption(text);
    stripSpace(text);
    outFile << text << "\n";
    text = encryption(password);
    stripSpace(text);
    outFile << text;
    
    outFile.close();
}

void SystemAdmin::loadData(){
    
    ifstream inFile;

    inFile.open(ID + ".txt");

    string text;
    getline(inFile, text);
    stripSpace(text);    
    text = decryption(text);
    fName = text;
    getline(inFile, text);
    stripSpace(text);
    text = decryption(text);
    lName = text;
    getline(inFile, text);
    stripSpace(text);
    text = decryption(text);
    openY = stoi(text);
    getline(inFile, text);
    stripSpace(text);
    text = decryption(text);
    openM = stoi(text);
    getline(inFile, text);
    stripSpace(text);
    text = decryption(text);
    openD = stoi(text);
    getline(inFile, text);
    stripSpace(text);
    text = decryption(text);
    password = text;
    inFile.close();
}