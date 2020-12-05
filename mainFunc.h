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
        getline(cin,str);
        if (str == "quit")
        {
            return str;
        }
        int firstCharPos = str.find_first_not_of(" \t\f\v\n\r"); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" \t\f\v\n\r");
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
        getline(cin,str);
        if (str == "quit")
        {
            return str;
        }
        int firstCharPos = str.find_first_not_of(" \t\f\v\n\r"); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos){
            cout << "Error" <<"\n";
            continue; 
        }
        int lastCharPos = str.find_last_not_of(" \t\f\v\n\r");
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
        getline(cin,str);
        if (str == "quit")
        {
            return str;
        }
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

string getPassword()
{
    string str;
    while (true)
    {
        getline(cin,str);
        if (str == "quit")
        {
            return str;
        }
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

double getRate()    //get the interest rate
{
    string str;

    while (true)
    {
        getline(cin, str);

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        int nonIntChar = str.find_first_not_of("0123456789.");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        if (stod(str) > 0.1 or stod(str) < 0.001)
        {
            cout << "Interest rate must be between 0.1% and 10%" << "\n";
            continue;
        }
        break;
    }
    return stod(str);
}

string getChkID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("C");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getSavID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("S");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getCDID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("D");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getUID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("U");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getVID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("V");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getXID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("X");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getYID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("Y");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getZID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("Z");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getOffID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }
        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("B");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

string getAdminID() //this fucntion is used to getaccount nummber
{
    string str;
    while (true)
    {
        getline(cin,str);

        if (str == "quit")
        {
            return str;
        }

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        string numPart = str.substr(1,str.size());
        int nonIntChar = numPart.find_first_not_of("0123456789");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }

        string letterPart = str.substr(0, 1);
        int accChar = str.find_first_of("A");
        if (accChar == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return str;
}

double getAmount()  //get the amount from user to deposit or withdraw
{
    string str;

    while (true)
    {
        getline(cin, str);

        int firstCharPos = str.find_first_not_of(" "); //strip the spaces of 2 ends of the string
        if (firstCharPos == string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        int lastCharPos = str.find_last_not_of(" ");
        str = str.substr(firstCharPos, lastCharPos - firstCharPos + 1);
        
        int nonIntChar = str.find_first_not_of("0123456789.");
        if (nonIntChar != string::npos)
        {
            cout << "Error" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return stod(str);
}

string getStat(bool stat)
{
    if (stat)
        return "1";
    else
        return "0"; 
}