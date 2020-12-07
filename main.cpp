/* 
Name:Huy Doan Minh Huynh; M-number: M03321126;
Name: Hung Hoang Nguyen; M-number: M03320038;
Name: Vitor Freitas; M-number: M03143006;
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
    cout << "Loading Data...";
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
        text = decryption(text);
        ChkAcc::totalChk = stoi(text);

        getline(preview, text);
        text = decryption(text);
        SavAcc::totalSav = stoi(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savInt = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savPen = stod(text.substr(0, text.find(" ")));
        text = text.substr(text.find(" ") + 1, text.length());
        savSafLe = stod(text);

        getline(preview, text);
        text = decryption(text);
        CD::totalCD = stoi(text);

        getline(preview, text);
        text = decryption(text);
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
        text = decryption(text);
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
        text = decryption(text);
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
        text = decryption(text);
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
        text = decryption(text);
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
        text = decryption(text);
        BankOfficial::totalB = stoi(text);

        getline(preview, text);
        text = decryption(text);
        SystemAdmin::totalA = stoi(text);
    }
    else
    {
        cout << "\nPreview File Does Not Exist\n";
    }
    preview.close();
    cout << "Finished.\nPopulating Vectors...";  
    
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
    cout << "Finished.\n\n";


    bool done = false;
    cout << "Welcome To Bear Bank!\n";
    while (!done)
    {
        cout << "Please Choose One Of The Login Options:\n";
        cout << "\t[1] System Administrator\n";
        cout << "\t[2] Bear Officials\n";
        cout << "\t[3] Customers\n";
        cout << "\t[4] Exit\n";
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
                    cout << "\nPlease Enter The Account ID That You Would Like To Log Into, Or Enter \"quit\" To Exit To The Previous Menu:\n";
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
                                    cout << "\nIncorrect Password.\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
                if (back)
                {
                    break;
                }
                cout << "\nSuccessfully Logged In. Welcome Back, " << adminList[accNum].getFname() << " " << adminList[accNum].getLname() << "\n\n";
                adminMenu(chkList, savList, cdList, officList, adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
                break;
            }
            case 2:
            { 
                if (BankOfficial::totalB == 0)
                {
                    cout << "\nThere Are No Bank Official Account Right Now.\n";
                    break;
                }
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
                                cout << "\nThis Account is Currently Closed. Require System Administrator to be Enabled.\n";
                                break;
                            }
                            bool corPass = false;
                            while (!corPass)
                            {
                                cout << "\nPlease Enter Password, Or Enter \"quit\" To Exit To The Previous Menu: \n" << endl;
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
                                    cout << "\nIncorrect Password. Please Enter Again.\n";
                                }                                
                            }
                        }        
                    }
                    if (!found) 
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
                if (back)
                {
                    break;
                }
                if (loggedIn)
                {
                    cout << "\nSuccessfully Logged In. Welcome Back, " << officList[accNum].getFname() << " " << officList[accNum].getLname() << "\n\n";
                    officialMenu(chkList, savList, cdList, officList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savInt, uInt, vInt, xInt, yInt, zInt);
                    officList[accNum].saveData();
                }
                break;
            }
            case 3:
            {
                cout << "\nChoose An Account To Interact With:\n\n";
                customerMenu(chkList, savList, cdList, uList, vList, xList, yList, zList);
                break;
            }
            case 4:
            {
                cout << "Saving Data...";
                ofstream preview("preview.txt", ofstream::trunc);
                string text;
                text = to_string(ChkAcc::totalChk);
                text = encryption(text);
                preview << text << "\n";
                text = to_string(SavAcc::totalSav) + " " + to_string(savInt) + " " + to_string(savPen) + " " + to_string(savSafLe);
                text = encryption(text);
                preview << text << "\n";
                text = to_string(CD::totalCD);
                text = encryption(text);
                preview << text << "\n";
                text = to_string(ClassU::totalU) + " " + to_string(uInt) + " " + to_string(uPen) + " " + to_string(uSafLe) + " " + uStatus;
                text = encryption(text);
                preview << text << "\n";
                text = to_string(ClassV::totalV) + " " + to_string(vInt) + " " + to_string(vPen) + " " + to_string(vSafLe) + " " + vStatus;
                text = encryption(text);
                preview << text << "\n";
                text = to_string(ClassX::totalX) + " " + to_string(xInt) + " " + to_string(xPen) + " " + to_string(xSafLe) + " " + xStatus;
                text = encryption(text);
                preview << text << "\n";
                text = to_string(ClassY::totalY) + " " + to_string(yInt) + " " + to_string(yPen) + " " + to_string(ySafLe) + " " + yStatus;
                text = encryption(text);
                preview << text << "\n";
                text = to_string(ClassZ::totalZ) + " " + to_string(zInt) + " " + to_string(zPen) + " " + to_string(zSafLe) + " " + zStatus;
                text = encryption(text);
                preview << text << "\n";
                text = to_string(BankOfficial::totalB);
                text = encryption(text);
                preview << text << "\n";
                text = to_string(SystemAdmin::totalA);
                text = encryption(text);
                preview << text;
                acc.saveData();
                done = true;
                cout << "Finished.";
                break;
            }
            default:
                break;
        }
        cout << endl;
    }
    cout << "\nThank You For Using Our Service!\n";
    return 1;
}
