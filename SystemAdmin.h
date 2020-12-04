/*
- This file contains the SystemAdmin class
- Its members are private, which include officials' ID, password, first and last name, date of account opening
- The function include the constuctor, members getter and setters, functions to create an acoount for bank officials and change they login profile, retrive users ID and modify their passwords.
*/

#include "include.h"    //include all files/libraries

using namespace std;

class SystemAdmin{

    private:
    string ID;   //login
    string password;
    string fName;
    string lName;
    int openY;
    int openM;
    int openD;

    public:
    SystemAdmin(string newID, string newPassword, string newFname,string newLname);

    string getID();
    string getPassword();
    string getFname();
    string getLname();
    int getCurrentY();
    int getCurrentM();
    int getCurrentD();

    void createOfficialAcc(string newID, string newPassword, string newFname,string newLname);
    void enableOfficialAcc(BankOfficial account);
    void disableOfficialAcc(BankOfficial account);

    void createUacc();
    void createVacc();
    void createXacc();
    void createYacc();
    void createZacc();

    void modifyChkCharge(double newCharge);
    void modifyChkInterest(double newInterest);
    void modifySavCharge(double newCharge);
    void modifySavInterest(double newInterest);
    void modifyCDInterest(double newInterest);

    void deleteChkAcc();
    void deleteSavAcc();
    void deleteCDacc();
    void deleteUacc();
    void deleteVacc();
    void deleteXacc();
    void deleteYacc();
    void deleteZacc();

    void changePasswordChk(ChkAcc account, string newpassword);
    void changePasswordSav(SavAcc account, string newpassword);
    void changePasswordCD(CD account, string newpassword);
    string encryption(string password);
    void updateFile(string oldPassword, string newPassword, string filename);
    //save admin info in file
    void saveData();
};