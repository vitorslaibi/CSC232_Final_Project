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
    static int totalA;
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

    void deleteChkAcc();
    void deleteSavAcc();
    void deleteCDacc();
    void deleteUacc();
    void deleteVacc();
    void deleteXacc();
    void deleteYacc();
    void deleteZacc();

    void searchChk(ChkAcc &account);
    void searchSav(SavAcc &account);
    void searchCD(CD &account);
    void searchU(ClassU &account);
    void searchV(ClassV &account);
    void searchX(ClassX &account);
    void searchY(ClassY &account);
    void searchZ(ClassZ &account);

    void changePasswordChk(ChkAcc &account, string newpassword);
    void changePasswordSav(SavAcc &account, string newpassword);
    void changePasswordCD(CD &account, string newpassword);
    void changePasswordU(ClassU &account, string newpassword);
    void changePasswordV(ClassV &account, string newpassword);
    void changePasswordX(ClassX &account, string newpassword);
    void changePasswordY(ClassY &account, string newpassword);
    void changePasswordZ(ClassZ &account, string newpassword);
    void updateFile(string oldPassword, string newPassword, string filename);

    string encryption(string password);
    //save admin info in file
    void saveData();
};