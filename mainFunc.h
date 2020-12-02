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

string getPassword()
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
            cout << "Accout number must contain only integer" <<"\n";
            continue;  //return the error condition
        }
        if (stod(str) > 10 or stod(str) < 0.1)
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
            cout << "Accout number must contain only integer" <<"\n";
            continue;  //return the error condition
        }
        break;
    }
    return stod(str);
}