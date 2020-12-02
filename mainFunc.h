#include "include.h"

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
