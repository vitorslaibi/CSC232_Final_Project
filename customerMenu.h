
bool customerLogin()
{
    //return true when successfully logged in
    return true;
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
