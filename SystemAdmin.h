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
    int getOY();
    int getOM();
    int getOD();
    void createOfficialAcc();
    void changeLoginStatus(bool online);
    void retrieveUserID();
    void changePassword(string accNumber);