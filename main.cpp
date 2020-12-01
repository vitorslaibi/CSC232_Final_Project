/* Name:Huy Doan Minh Huynh; M-number: M03321126;
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string getInput()
{
    string str;
    while (true)
    {
        getline(cin,str);
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);

        int nonIntChar = str.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error\n";
            continue;
        }
        break;
    }
    return str;
}

string getFirstName()
{
    string str;
    while (true)
    {
        cout << "Enter First Name: \n";
        getline(cin,str);
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);

        break;
    }
    return str;
} 

string getLastName()
{
    string str;
    while (true)
    {
        cout << "Enter Last Name: \n";
        getline(cin,str);
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);

        break;
    }
    return str;
}

string getPhone()
{
    string str;
    while (true)
    {
        cout << "Enter Phone Number: \n";
        getline(cin,str);
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);

        break;
    }
    return str;
}

bool adminLogin()
{
    //return true when successfully logged in
    return true;
}

bool officialLogin()
{
    //return true when successfully logged in
    return true;
}

bool customerLogin()
{
    //return true when successfully logged in
    return true;
}

void openAccount()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //openChecking();
                break;
            }
            case 2:
            { 
                //openSaving();
                break;
            }
            case 3:
            { 
                //openCD();
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void closeAccount()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //closeChecking();
                break;
            }
            case 2:
            { 
                //closeSaving();
                break;
            }
            case 3:
            { 
                //closeCD();
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void officialSearch()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Certificate of Deposit\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //searchChecking();
                break;
            }
            case 2:
            { 
                //searchSaving();
                break;
            }
            case 3:
            { 
                //searchCD();
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void officialDeposit()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //officialDepositChecking();
                break;
            }
            case 2:
            { 
                //officialDepositSaving();
                break;
            }
            case 3:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void officialWithdraw()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //officialWithdrawChecking();
                break;
            }
            case 2:
            { 
                //officialWithdrawSaving();
                break;
            }
            case 3:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void officialMenu()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Open Account\n";
        cout << "[2] Close Account\n";
        cout << "[3] Search Account\n";
        cout << "[4] Deposit\n";
        cout << "[5] Withdraw\n";
        cout << "[6] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nChoose A Type Of Account To Open.\n";
                openAccount();
                cout << "\nAccount Successfully Opened.\n";   //might print the info of the open account
                break;
            }
            case 2:
            {
                cout << "\nChoose A Type Of Account To Close.\n";
                closeAccount();
                cout << "\nAccount Successfully Closed.\n";
                break;
            }
            case 3:
            {
                cout << "\nChoose A Type Of Account To Search.\n";
                officialSearch();
                cout << "\nSearched.\n";
                break;
            }
            case 4:
            {
                cout << "\nChoose A Type Of Account To Deposit.\n";
                officialDeposit(); 
                cout << "\nDeposited.\n";
                break;
            }
            case 5:
            {
                cout << "\nChoose A Type Of Account To Withdraw.\n";
                officialWithdraw();
                cout << "\nWithdrawed.";
                break;
            }
            case 6:
            {
                cout << "\nLogged Out Of Bear Official Account.\n";
                done = true;
                break;
            }
            default:
            {
                cout << "\nPlease Enter The Correct Input Corresponding To Each Options.\n"
                break;
            }
        }
        cout << endl;
    }
}

void checkingMenu()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //customerDepositChecking();
                break;
            }
            case 2:
            { 
                //customerDepositChecking();
                break;
            }
            case 3:
            { 
                //call display transaction func in the checkingAccount class of logged in customer
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void savingMenu()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Deposit\n";
        cout << "[2] Withdraw\n";
        cout << "[3] Transaction In The Last 7 Days\n";
        cout << "[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                //customerDepositSaving();
                break;
            }
            case 2:
            { 
                //customerDepositSaving();
                break;
            }
            case 3:
            { 
                //call display transaction func in the savingingAccount class of logged in customer
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void customerMenu()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Checking Account\n";
        cout << "[2] Saving Account\n";
        cout << "[3] Log out\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                checkingMenu();
                break;
            }
            case 2:
            { 
                savingMenu();
                break;
            }
            case 3:
            { 
                done = true;
                cout << "\nLogged Out Of Customer Account\n";
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}

void adminMenu()
{
    bool done = false;
    while (!done)
    {
        cout << "[1] Create New Bank Official Account\n";
        cout << "[2] Enable Bank Official Account\n";
        cout << "[3] Disable Bank Official Account\n";
        cout << "[4] Create New Bank Account Type\n";
        cout << "[5] Delete Bank Account Type\n";
        cout << "[6] Modify Bank Account Type\n";
        cout << "[7] Retrieve User ID\n";
        cout << "[8] Change User's Password\n";
        cout << "[9] Log out\n";
        
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                checkingMenu();
                break;
            }
            case 2:
            { 
                savingMenu();
                break;
            }
            case 3:
            { 
                done = true;
                cout << "\nLogged Out Of Customer Account\n";
                break;
            }
            default:
            {
                break;
            }
        }
        cout << endl;
    }
}
int main()
{
    bool done = false;
    while (!done)
    {
        cout << "Log in as:\n";
        cout << "[1] System Adminastrator\n";
        cout << "[2] Bear Officials\n";
        cout << "[3] Customers\n";
        cout << "[4] Exit\n";
        int input = stoi(getInput());
        switch (input)
        {
            case 1:
            {
                cout << "\nPlease enter login id and password:\n\n";
                // while(!adminLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }

                cout << "\nSuccessfully Logged In\n";
                adminMenu();
                break;
            }
            case 2:
            { 
                cout << "\nPlease enter login id and password:\n\n";
                // while(!officialLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }
                
                cout << "\nSuccessfully Logged In.\n";
                officialMenu();
                break;
            }
            case 3:
            { 
                cout << "\nPlease enter login id and password:\n\n";
                // while(!customerLogin());
                // {
                //     cout << "\nIncorect username or password\n";
                //     continue;
                // }

                cout << "\nSuccessfully Logged In.\n";
                cout << "\nChoose An Account To Interact With.\n"
                //display information after each successful log in
                customerMenu();
                break;
            }
            case 4:
            {
                done = true;
                break;
            }
            default:
                break;
        }
        cout << endl;
    }
    cout << "\nGoodbye\n";
    return 1;
}
