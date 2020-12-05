/* Name:Huy Doan Minh Huynh; M-number: M03321126;
*/

#include "include.h"

using namespace std;

int main()
{
    int totalChk, totalSav, totalCD, totalU, totalV, totalX, totalY, totalZ;
    string uStatus, vStatus, xStatus, yStatus, zStatus;
    double savInt, uInt, vInt, xInt, yInt, zInt;
    string text;
    ifstream preview;
    preview.open("preview.txt");

    if (preview)
    {
        getline(preview, text);
        totalChk = stoi(text);

        getline(preview, text);
        totalSav = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savInt = stod(text);

        getline(preview, text);
        totalCD = stoi(text);

        getline(preview, text);
        totalU = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        uStatus = text;

        getline(preview, text);
        totalV = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        vStatus = text;

        getline(preview, text);
        totalX = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        xStatus = text;

        getline(preview, text);
        totalY = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        yInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        yStatus = text;
        
        getline(preview, text);
        totalZ = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        zStatus = text;
    }
    else
    {
        cout << "\nPreview File Does Not Exist\n";
    }
    preview.close();  

    vector <SavAcc> savList;
    vector <ChkAcc> chkList;
    vector <CD> cdList;
    vector <BankOfficial> officList;
    vector <SystemAdmin> adminList;
    vector <ClassU> uList;
    vector <ClassV> vList;
    vector <ClassX> xList;
    vector <ClassY> yList;
    vector <ClassZ> zList;
    

    for (int i = 0; i < totalChk; i++)
    {
        string id = to_string(chkList.size());
        ChkAcc acc(id);
        chkList.push_back(acc);
        acc.loadData();
    }

    for (int i = 0; i < totalSav; i++)
    {
        string id = to_string(savList.size());
        SavAcc acc(id);
        acc.setInterestRate(savInt);
        savList.push_back(acc);
        acc.loadData();
    }

    for (int i = 0; i < totalCD; i++)
    {
        string id = to_string(cdList.size());
        CD acc(id);
        cdList.push_back(acc);
        acc.loadData();
    }

    if (uStatus == "1")
        ClassU::active = true;
    else 
        ClassU::active = false;
    for (int i = 0; i < totalU; i++)
    {
        string id = to_string(uList.size());
        ClassU acc(id);
        acc.setInterestRate(uInt);
        uList.push_back(acc);
        acc.loadData();
    }

    if (vStatus == "1")
        ClassV::active = true;
    else 
        ClassV::active = false;
    for (int i = 0; i < totalV; i++)
    {
        string id = to_string(vList.size());
        ClassV acc(id);
        acc.setInterestRate(vInt);
        vList.push_back(acc);
        acc.loadData();
    }

    if (xStatus == "1")
        ClassX::active = true;
    else 
        ClassX::active = false;
    for (int i = 0; i < totalX; i++)
    {
        string id = to_string(xList.size());
        ClassX acc(id);
        acc.setInterestRate(xInt);
        xList.push_back(acc);
        acc.loadData();
    }

    if (yStatus == "1")
        ClassY::active = true;
    else 
        ClassY::active = false;
    for (int i = 0; i < totalY; i++)
    {
        string id = to_string(yList.size());
        ClassY acc(id);
        acc.setInterestRate(yInt);
        yList.push_back(acc);
        acc.loadData();
    }

    if (zStatus == "1")
        ClassZ::active = true;
    else 
        ClassZ::active = false;
    for (int i = 0; i < totalZ; i++)
    {
        string id = to_string(zList.size());
        ClassZ acc(id);
        acc.setInterestRate(zInt);
        zList.push_back(acc);
        acc.loadData();
    }


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
                int accNum;
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getAdminID();
                    for (int i = 0; i < adminList.size(); i++)
                    {
                        if (adminList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (adminList[i].getPassword() == password)
                                {
                                    corPass = true;
                                    accNum = i;
                                }
                                else
                                {
                                    cout << "\nIncorrect Password\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                cout << "\nSuccessfully Logged In\n";
                adminMenu(chkList, savList, cdList, officList, adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus);
                break;
            }
            case 2:
            { 
                int accNum;
                bool found = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into.\n";
                    string id = getOffID();
                    for (int i = 0; i < officList.size(); i++)
                    {
                        if (officList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password: \n";
                                string password = getPassword();
                                if (officList[i].getPassword() == password)
                                {
                                    corPass = true;
                                    accNum = i;
                                }
                                else
                                {
                                    cout << "\nIncorrect Password\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist\n";
                }
                officialMenu(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus);
                break;
            }
            case 3:
            {
                cout << "\nChoose An Account To Interact With.\n";
                customerMenu(chkList, savList, cdList, uList, vList, xList, yList, zList);
                break;
            }
            case 4:
            {
                ofstream preview("preview.txt", ofstream::trunc);
                preview << totalChk << "\n" << totalSav << "\n" << totalCD << "\n" << totalU << " " << uStatus << "\n" << totalV << " " << vStatus << "\n" << totalX << " " << xStatus << "\n" << totalY << " " << yStatus << "\n" << totalZ << " " << zStatus;
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
