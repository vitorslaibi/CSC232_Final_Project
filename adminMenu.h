
bool adminLogin()
{
    //return true when successfully logged in
    return true;
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
                //newOfficial();
                cout << "\nNew Bank Official Created\n";
                break;
            }
            case 2:
            { 
                //enableOfficial();
                cout << "\nBank Official Enabled\n";
                break;
            }
            case 3:
            { 
                //disableOfficial();
                cout << "\nBank Official Disabled\n";
                break;
            }
            case 4:
            { 
                //newBankType();
                cout << "\nNew Bank Account Type Created\n";
                break;
            }
            case 5:
            { 
                //delBankType();
                cout << "\nBank Account Type Deleted\n";
                break;
            }
            case 6:
            { 
                //modBankType();
                cout << "\nBank Account Type Modified\n";
                break;
            }
            case 7:
            { 
                //retreiveID();
                cout << "\nUser's ID retrieved\n";
                break;
            }
            case 8:
            { 
                //changePass();
                cout << "\nUser's Password changed\n";
                break;
            }
            case 9:
            { 
                done = true;
                cout << "\nLogged Out Of System Adminastrator Account\n";
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
