/* Name:Huy Doan Minh Huynh; M-number: M03321126;
*/

#include "include.h"

using namespace std;

    bool ChkAcc::active = true;
    bool SavAcc::active = true;
    bool CD::active = true;
    bool ClassU::active = true;
    bool ClassV::active = true;
    bool ClassX::active = true;
    bool ClassY::active = true;
    bool ClassZ::active = true;
    int ChkAcc::totalChk = 0;
    int SavAcc::totalSav = 0;
    int CD::totalCD = 0;
    int ClassU::totalU = 0;
    int ClassV::totalV = 0;
    int ClassX::totalX = 0;
    int ClassY::totalY = 0;
    int ClassZ::totalZ = 0;
    int BankOfficial::totalB = 0;
    int SystemAdmin::totalA = 0;
    
int main()
{
    string uStatus, vStatus, xStatus, yStatus, zStatus;
    double savInt, uInt, vInt, xInt, yInt, zInt;
    string text;
    ifstream preview;
    preview.open("preview.txt");

    if (preview)
    {
        getline(preview, text);
        ChkAcc::totalChk = stoi(text);

        getline(preview, text);
        SavAcc::totalSav = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savInt = stod(text);

        getline(preview, text);
        CD::totalCD = stoi(text);

        getline(preview, text);
        ClassU::totalU = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        uStatus = text;

        getline(preview, text);
        ClassV::totalV = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        vStatus = text;

        getline(preview, text);
        ClassX::totalX = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        xStatus = text;

        getline(preview, text);
        ClassY::totalY = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        yInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        yStatus = text;
        
        getline(preview, text);
        ClassZ::totalZ = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        zInt = stod(text);
        text = text.substr(text.find(" ") + 1, text.length());
        zStatus = text;

        getline(preview, text);
        BankOfficial::totalB = stoi(text);

        getline(preview, text);
        SystemAdmin::totalA = stoi(text);
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
    

    for (int i = 0; i < ChkAcc::totalChk; i++)
    {
        string id = to_string(chkList.size());
        ChkAcc acc(id);
        chkList.push_back(acc);
        acc.loadData();
    }

    for (int i = 0; i < SavAcc::totalSav; i++)
    {
        string id = to_string(savList.size());
        SavAcc acc(id);
        acc.setInterestRate(savInt);
        savList.push_back(acc);
        acc.loadData();
    }

    for (int i = 0; i < CD::totalCD; i++)
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
    for (int i = 0; i < ClassU::totalU; i++)
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
    for (int i = 0; i < ClassV::totalV; i++)
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
    for (int i = 0; i < ClassX::totalX; i++)
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
    for (int i = 0; i < ClassY::totalY; i++)
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
    for (int i = 0; i < ClassZ::totalZ; i++)
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
                preview << ChkAcc::totalChk << "\n";
                preview << SavAcc::totalSav << " " << savInt << "\n";
                preview << CD::totalCD << "\n";
                preview << ClassU::totalU << " " << uInt << " " << uStatus << "\n";
                preview << ClassV::totalV << " " << vInt << " " << vStatus << "\n";
                preview << ClassX::totalX << " " << xInt << " " << xStatus << "\n";
                preview << ClassY::totalY << " " << yInt << " " << yStatus << "\n";
                preview << ClassZ::totalZ << " " << zInt << " " << zStatus << "\n";
                preview << BankOfficial::totalB << "\n";
                preview << SystemAdmin::totalA << "\n";
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
