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
    double savPen, uPen, vPen, xPen, yPen, zPen;
    double savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe;
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
        savInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savSafLe = stod(text);

        getline(preview, text);
        CD::totalCD = stoi(text);

        getline(preview, text);
        ClassU::totalU = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uSafLe = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        uStatus = text;

        getline(preview, text);
        ClassV::totalV = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vSafLe = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        vStatus = text;

        getline(preview, text);
        ClassX::totalX = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xSafLe = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        xStatus = text;

        getline(preview, text);
        ClassY::totalY = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        yInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        yPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        ySafLe = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        yStatus = text;
        
        getline(preview, text);
        ClassZ::totalZ = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        zInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        zPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        zSafLe = stod(text.substr(0, text.find(" ")));
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

    SystemAdmin acc("0");
    acc.loadData();
    adminList.push_back(acc);
    
    for (int i = 0; i < ChkAcc::totalChk; i++)
    {
        string id = to_string(chkList.size());
        ChkAcc acc(id);
        acc.loadData();
        chkList.push_back(acc);
    }

    for (int i = 0; i < SavAcc::totalSav; i++)
    {
        string id = to_string(savList.size());
        SavAcc acc(id);
        acc.setInterestRate(savInt);
        acc.loadData();
        savList.push_back(acc);
    }

    for (int i = 0; i < CD::totalCD; i++)
    {
        string id = to_string(cdList.size());
        CD acc(id, 0.0);
        acc.loadData();
        cdList.push_back(acc);
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
        acc.loadData();
        uList.push_back(acc);
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
        acc.loadData();
        vList.push_back(acc);
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
        acc.loadData();
        xList.push_back(acc);
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
        acc.loadData();
        yList.push_back(acc);
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
        acc.loadData();
        zList.push_back(acc);
    }
    //cout << BankOfficial::totalB << endl;
    for (int i = 0; i < BankOfficial::totalB; i++)
    {
        string id = to_string(officList.size());
        BankOfficial acc(id);
        acc.loadData();
        officList.push_back(acc);
    }


    bool done = false;
    while (!done)
    {
        cout << "Log in as:\n";
        cout << "[1] System Administrator\n";
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
                bool back = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getAdminID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                        break;
                    }
                    for (int i = 0; i < adminList.size(); i++)
                    {
                        if (adminList[i].getID() == id)
                        {
                            found = true;
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n";
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                cout << "\nSuccessfully Logged In\n";
                adminMenu(chkList, savList, cdList, officList, adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
                break;
            }
            case 2:
            { 
                int accNum;
                bool found = false;
                bool back = false;
                bool loggedIn = false;
                while(!found)
                {
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu.\n";
                    string id = getOffID();
                    if (id == "quit")
                    {
                        found = true;
                        back = true;
                    }
                    for (int i = 0; i < officList.size(); i++)
                    {
                        if (officList[i].getID() == id)
                        {
                            found = true;
                            if (officList[i].isOnl())
                                loggedIn = true;
                            else
                            {
                                cout << "\nThis Account is Currently Closed. Require System Administrator to Enable\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n" <<officList[i].getPassword() << endl;
                                string password = getPassword();
                                if (password == "quit")
                                {
                                    back = true;
                                    break;
                                }
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
                if (back)
                {
                    break;
                }
                if (loggedIn)
                    officialMenu(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savInt, uInt, vInt, xInt, yInt, zInt);
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
                preview << SavAcc::totalSav << " " << savInt << " " << savPen << " " << savSafLe << "\n";
                preview << CD::totalCD << "\n";
                preview << ClassU::totalU << " " << uInt << " " << uPen << " " << uSafLe << " " << uStatus << "\n";
                preview << ClassV::totalV << " " << vInt << " " << vPen << " " << vSafLe << " " << vStatus << "\n";
                preview << ClassX::totalX << " " << xInt << " " << xPen << " " << xSafLe << " " << xStatus << "\n";
                preview << ClassY::totalY << " " << yInt << " " << yPen << " " << ySafLe << " " << yStatus << "\n";
                preview << ClassZ::totalZ << " " << zInt << " " << zPen << " " << zSafLe << " " << zStatus << "\n";
                preview << BankOfficial::totalB << "\n";
                preview << SystemAdmin::totalA;
                acc.saveData();
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
