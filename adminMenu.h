void createAccMenu(vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStatus, string &vStatus, string &xStatus, string &yStatus, string &zStatus, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "Please Choose One Of These Option:\n";
        cout << "[1] Enable U Account Type\n";
        cout << "[2] Enable V Account Type\n";
        cout << "[3] Enable X Account Type\n";
        cout << "[4] Enable Y Account Type\n";
        cout << "[5] Enable Z Account Type\n";
        cout << "[6] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            if (!ClassU::active)
            {
                //cout << ClassU::active;
                while (true)
                {
                    uSafLe = 0;
                    uPen = 0;
                    cout << "\nPlease Set The Interest Rate (In Decimal Number): ";
                    double rate = getRate();
                    uInt = rate;
                    cout << "\nPlease Set The Safety Level: $";
                    double safeLev = getAmount();
                    uSafLe = safeLev;
                    if (uSafLe < uPen)
                    {
                        cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                        continue;
                    }
                    cout << "\nPlease Enter The Penalty Amount: $";
                    double pen = getAmount();
                    uPen = pen;
                    if (uPen >= uSafLe)
                    {
                        cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                        continue;
                    }
                    for (int i = 0; i < uList.size(); i++)
                    {
                        uList[i].setSafeLevel(safeLev);
                        uList[i].setPenalty(pen);
                        uList[i].setInterestRate(rate);
                        //cout << uList[i].getSafeLevel() << uList[i].getPenalty();
                    }
                    break;
                }
                adminList[accNum].createUacc();
            }
            else
            {
                cout << "\nThis Account Type Is Already Online.\n";
            }            
            uStatus = "1";
            cout << "\nNew Bank Account Type Created\n";
            break;
        }
        case 2:
        {
            if (!ClassV::active)
            {
                while (true)
                {
                    vSafLe = 0;
                    vPen = 0;
                    cout << "\nPlease Set The Interest Rate (In Decimal Number): ";
                    double rate = getRate();
                    vInt = rate;
                    cout << "\nPlease Set The Safety Level: $";
                    double safeLev = getAmount();
                    vSafLe = safeLev;
                    if (vSafLe < vPen)
                    {
                        cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                        continue;
                    }
                    cout << "\nPlease Enter the Penalty Amount: $";
                    double pen = getAmount();
                    vPen = pen;
                    if (vPen >= vSafLe)
                    {
                        cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                        continue;
                    }
                    for (int i = 0; i < vList.size(); i++)
                    {
                        vList[i].setSafeLevel(safeLev);
                        vList[i].setPenalty(pen);
                        vList[i].setInterestRate(rate);
                    }
                    break;
                }
                adminList[accNum].createVacc();
            }
            else
            {
                cout << "\nThis Account Type Is Already Online.\n";
            }
            vStatus = "1";
            cout << "\nNew Bank Account Type Created\n";
            break;
        }
        case 3:
        {
            if (!ClassX::active)
            {
                while (true)
                {
                    xSafLe = 0;
                    xPen = 0;
                    cout << "\nPlease Set The Interest Rate (In Decimal Number): ";
                    double rate = getRate();
                    xInt = rate;
                    cout << "\nPlease Set The Safety Level: $";
                    double safeLev = getAmount();
                    xSafLe = safeLev;
                    if (xSafLe < xPen)
                    {
                        cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                        continue;
                    }
                    cout << "\nPlease Enter the Penalty Amount: $";
                    double pen = getAmount();
                    xPen = pen;
                    if (xPen >= xSafLe)
                    {
                        cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                        continue;
                    }
                    for (int i = 0; i < xList.size(); i++)
                    {
                        xList[i].setSafeLevel(safeLev);
                        xList[i].setPenalty(pen);
                        xList[i].setInterestRate(rate);
                    }
                    break;
                }
                adminList[accNum].createXacc();
            }
            else
            {
                cout << "\nThis Account Type Is Already Online.\n";
            }
            xStatus = "1";
            cout << "\nNew Bank Account Type Created\n";
            break;
        }
        case 4:
        {
            if (!ClassY::active)
            {
                while (true)
                {
                    ySafLe = 0;
                    yPen = 0;
                    cout << "\nPlease Set The Interest Rate (In Decimal Number): ";
                    double rate = getRate();
                    yInt = rate;
                    cout << "\nPlease Set The Safety Level: $";
                    double safeLev = getAmount();
                    ySafLe = safeLev;
                    if (ySafLe < yPen)
                    {
                        cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                        continue;
                    }
                    cout << "\nPlease Enter the Penalty Amount: $";
                    double pen = getAmount();
                    yPen = pen;
                    if (yPen >= ySafLe)
                    {
                        cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                        continue;
                    }
                    for (int i = 0; i < yList.size(); i++)
                    {
                        yList[i].setSafeLevel(safeLev);
                        yList[i].setPenalty(pen);
                        yList[i].setInterestRate(rate);
                    }
                    break;
                }
                adminList[accNum].createYacc();
            }
            else
            {
                cout << "\nThis Account Type Is Already Online.\n";
            }
            yStatus = "1";
            cout << "\nNew Bank Account Type Created\n";
            break;
        }
        case 5:
        {
            if (!ClassZ::active)
            {
                while (true)
                {
                    zSafLe = 0;
                    zPen = 0;
                    cout << "\nPlease Set The Interest Rate (In Decimal Number): ";
                    double rate = getRate();
                    zInt = rate;
                    cout << "\nPlease Set The Safety Level: $";
                    double safeLev = getAmount();
                    zSafLe = safeLev;
                    if (zSafLe < zPen)
                    {
                        cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                        continue;
                    }
                    cout << "\nPlease Enter the Penalty Amount: $";
                    double pen = getAmount();
                    zPen = pen;
                    if (zPen >= zSafLe)
                    {
                        cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                        continue;
                    }
                    for (int i = 0; i < zList.size(); i++)
                    {
                        zList[i].setSafeLevel(safeLev);
                        zList[i].setPenalty(pen);
                        zList[i].setInterestRate(rate);
                    }
                    break;
                }
                adminList[accNum].createZacc();
            }
            else
            {
                cout << "\nThis Account Type Is Already Online.\n";
            }
            zStatus = "1";
            cout << "\nNew Bank Account Type Created\n";
            break;
        }
        case 6:
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

void deleteAccMenu(vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStatus, string &vStatus, string &xStatus, string &yStatus, string &zStatus, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe)
{
    bool done = false;
    while (!done)
    {
        cout << "Please Choose One Of The Account Type To Delete:\n"; 
        cout << "(Deleted Accounts Type Will Be Unable To Generate New Accounts, While Old Accounts Of That Type Stay Online)\n";
        cout << "\t[1] Delete U Account\n";
        cout << "\t[2] Delete V Account\n";
        cout << "\t[3] Delete X Account\n";
        cout << "\t[4] Delete Y Account\n";
        cout << "\t[5] Delete Z Account\n";
        cout << "\t[6] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            adminList[accNum].deleteUacc();
            uStatus = "0";
            cout << "\nBank Account Type Deleted.\n";
            return;
        }
        case 2:
        {
            adminList[accNum].deleteVacc();
            vStatus = "0";
            cout << "\nBank Account Type Deleted.\n";
            return;
        }
        case 3:
        {
            adminList[accNum].deleteXacc();
            xStatus = "0";
            cout << "\nBank Account Type Deleted.\n";
            return;
        }
        case 4:
        {
            adminList[accNum].deleteYacc();
            yStatus = "0";
            cout << "\nBank Account Type Deleted.\n";
            return;
        }
        case 5:
        {
            adminList[accNum].deleteZacc();
            zStatus = "0";
            cout << "\nBank Account Type Deleted.\n";
            return;
        }
        case 6:
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

void modSav(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            savInt = rate;
            for (int i = 0; i < savList.size(); i++)
            {
                savList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount; $";
                double amount = getAmount();
                savPen = amount;
                if (savPen > savSafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < savList.size(); i++)
                {
                    savList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                savSafLe = safeLevel;
                if (savSafLe < savPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < savList.size(); i++)
                {
                    savList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modU(vector<ClassU> &uList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            uInt = rate;
            for (int i = 0; i < uList.size(); i++)
            {
                uList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount: $";
                double amount = getAmount();
                uPen = amount;
                if (uPen > uSafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < uList.size(); i++)
                {
                    uList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                uSafLe = safeLevel;
                if (uSafLe < uPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < uList.size(); i++)
                {
                    uList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modV(vector<ClassV> &vList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            vInt = rate;
            for (int i = 0; i < vList.size(); i++)
            {
                vList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount: $";
                double amount = getAmount();
                vPen = amount;
                if (vPen > vSafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < vList.size(); i++)
                {
                    vList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                vSafLe = safeLevel;
                if (vSafLe < vPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < vList.size(); i++)
                {
                    vList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modX(vector<ClassX> &xList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            xInt = rate;
            for (int i = 0; i < xList.size(); i++)
            {
                xList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount: $";
                double amount = getAmount();
                xPen = amount;
                if (xPen > xSafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < xList.size(); i++)
                {
                    xList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                xSafLe = safeLevel;
                if (xSafLe < xPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < xList.size(); i++)
                {
                    xList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modY(vector<ClassY> &yList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            yInt = rate;
            for (int i = 0; i < yList.size(); i++)
            {
                yList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount: $";
                double amount = getAmount();
                yPen = amount;
                if (yPen > ySafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < yList.size(); i++)
                {
                    yList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                ySafLe = safeLevel;
                if (ySafLe < yPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < yList.size(); i++)
                {
                    yList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modZ(vector<ClassZ> &zList, vector<SystemAdmin> &adminList, int accNum, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Would You Like To Do?\n";
        cout << "\t[1] Modify Interest Rate\n";
        cout << "\t[2] Modify Penalty\n";
        cout << "\t[3] Modify Safety Level\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nPlease Enter new Interest rate (In Decimal Number): ";
            double rate = getRate();
            zInt = rate;
            for (int i = 0; i < zList.size(); i++)
            {
                zList[i].setInterestRate(rate);
            }
            break;
        }
        case 2:
        {
            while (true)
            {
                cout << "\nPlease Enter new Penalty Amount: $";
                double amount = getAmount();
                zPen = amount;
                if (zPen > zSafLe)
                {
                    cout << "Penalty Cannot Be Higher Than The Safe Level." << endl;
                    continue;
                }
                for (int i = 0; i < zList.size(); i++)
                {
                    zList[i].setPenalty(amount);
                }
                break;
            }
            break;
        }
        case 3:
        {
            while (true)
            {
                cout << "\nPlease Enter new Safety Level: $";
                double safeLevel = getAmount();
                zSafLe = safeLevel;
                if (zSafLe < zPen)
                {
                    cout << "Safe Level Cannot Be Lower Than The Penalty." << endl;
                    continue;
                }
                for (int i = 0; i < zList.size(); i++)
                {
                    zList[i].setSafeLevel(safeLevel);
                }
                break;
            }
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
    }
}

void modAccMenu(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "What Type Of Account Would You Like To Modify?\n";
        cout << "\t[1] Modify Saving Account\n";
        cout << "\t[2] Modify U Account\n";
        cout << "\t[3] Modify V Account\n";
        cout << "\t[4] Modify X Account\n";
        cout << "\t[5] Modify Y Account\n";
        cout << "\t[6] Modify Z Account\n";
        cout << "\t[7] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            modSav(savList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 2:
        {
            modU(uList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 3:
        {
            modV(vList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 4:
        {
            modX(xList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 5:
        {
            modY(yList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 6:
        {
            modZ(zList, adminList, accNum, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            cout << "\nBank Account Type Modified\n";
            break;
        }
        case 7:
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

void changePassMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStatus, string &vStatus, string &xStatus, string &yStatus, string &zStatus)
{
    bool done = false;
    while (!done)
    {
        cout << "Please Enter The Type Of The Account You Would Like To Change Password:\n";
        cout << "\t[1] Checking Account\n";
        cout << "\t[2] Saving Account\n";
        cout << "\t[3] Certificate of Deposit\n";
        cout << "\t[4] U Account\n";
        cout << "\t[5] V Account\n";
        cout << "\t[6] X Account\n";
        cout << "\t[7] Y Account\n";
        cout << "\t[8] Z Account\n";
        cout << "\t[9] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            bool found = false;
            while (!found)
            {
                cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                string id = getChkID();
                if (id == "quit")
                {
                    break;
                }
                for (int i = 0; i < chkList.size(); i++)
                {
                    if (chkList[i].getID() == id)
                    {
                        found = true;
                        cout << "\nPlease Set the New PassWord:\n";
                        string pass = getPassword();
                        adminList[accNum].changePasswordChk(chkList[i], pass);
                        cout << "\nUser's Password changed.\n";
                        break;
                    }
                }
                if (!found)
                    cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
            }
            break;
        }
        case 2:
        {
            bool found = false;
            while (!found)
            {
                cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                string id = getSavID();
                if (id == "quit")
                {
                    break;
                }
                for (int i = 0; i < savList.size(); i++)
                {
                    if (savList[i].getID() == id)
                    {
                        found = true;
                        cout << "\nPlease Set the New PassWord:\n";
                        string pass = getPassword();
                        adminList[accNum].changePasswordSav(savList[i], pass);
                        cout << "\nUser's Password changed.\n";
                        break;
                    }
                }
                if (!found)
                    cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
            }
            break;
        }
        case 3:
        {
            bool found = false;
            while (!found)
            {
                cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                string id = getCDID();
                if (id == "quit")
                {
                    break;
                }
                for (int i = 0; i < cdList.size(); i++)
                {
                    if (cdList[i].getID() == id)
                    {
                        found = true;
                        cout << "\nPlease Set the New PassWord:\n";
                        string pass = getPassword();
                        adminList[accNum].changePasswordCD(cdList[i], pass);
                        cout << "\nUser's Password changed.\n";
                        break;
                    }
                }
                if (!found)
                    cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
            }
            break;
        }
        case 4:
        {
            if (uStatus == "1")
            {
                bool found = false;
                while (!found)
                {
                    cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                    string id = getUID();
                    if (id == "quit")
                    {
                        break;
                    }
                    for (int i = 0; i < uList.size(); i++)
                    {
                        if (uList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Set the New PassWord:\n";
                            string pass = getPassword();
                            adminList[accNum].changePasswordU(uList[i], pass);
                            cout << "\nUser's Password changed.\n";
                            break;
                        }
                    }
                    if (!found)
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
            }
            else
            {
                cout << "\nThis Account Type Is Not Available To Be Used.\n";
            }
        }
        case 5:
        {
            if (vStatus == "1")
            {
                bool found = false;
                while (!found)
                {
                    cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                    string id = getVID();
                    if (id == "quit")
                    {
                        break;
                    }
                    for (int i = 0; i < vList.size(); i++)
                    {
                        if (vList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Set the New PassWord:\n";
                            string pass = getPassword();
                            adminList[accNum].changePasswordV(vList[i], pass);
                            cout << "\nUser's Password changed.\n";
                            break;
                        }
                    }
                    if (!found)
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
            }
            else
            {
                cout << "\nThis Account Type Is Not Available To Be Used.\n";
            }
        }
        case 6:
        {
            if (xStatus == "1")
            {
                bool found = false;
                while (!found)
                {
                    cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                    string id = getXID();
                    if (id == "quit")
                    {
                        break;
                    }
                    for (int i = 0; i < xList.size(); i++)
                    {
                        if (xList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Set the New PassWord:\n";
                            string pass = getPassword();
                            adminList[accNum].changePasswordX(xList[i], pass);
                            cout << "\nUser's Password changed.\n";
                            break;
                        }
                    }
                    if (!found)
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
            }
            else
            {
                cout << "\nThis Account Type Is Not Available To Be Used.\n";
            }
        }
        case 7:
        {
            if (yStatus == "1")
            {
                bool found = false;
                while (!found)
                {
                    cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                    string id = getYID();
                    if (id == "quit")
                    {
                        break;
                    }
                    for (int i = 0; i < yList.size(); i++)
                    {
                        if (yList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Set the New PassWord:\n";
                            string pass = getPassword();
                            adminList[accNum].changePasswordY(yList[i], pass);
                            cout << "\nUser's Password changed.\n";
                            break;
                        }
                    }
                    if (!found)
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
            }
            else
            {
                cout << "\nThis Account Type Is Not Available To Be Used.\n";
            }
        }
        case 8:
        {
            if (zStatus == "1")
            {
                bool found = false;
                while (!found)
                {
                    cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Return To The Previous Menu.\n";
                    string id = getZID();
                    if (id == "quit")
                    {
                        break;
                    }
                    for (int i = 0; i < zList.size(); i++)
                    {
                        if (zList[i].getID() == id)
                        {
                            found = true;
                            cout << "\nPlease Set the New PassWord:\n";
                            string pass = getPassword();
                            adminList[accNum].changePasswordZ(zList[i], pass);
                            cout << "\nUser's Password changed.\n";
                            break;
                        }
                    }
                    if (!found)
                        cout << "\nThe Account ID You Just Enter Does Not Exist.\n";
                }
            }
            else
            {
                cout << "\nThis Account Type Is Not Available To Be Used.\n";
            }
        }
        case 9:
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

//Search checking account by ID
void searchCheckingId(vector<ChkAcc> &chkList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getChkID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchChk(chkList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search checking account by name
void searchCheckingName(vector<ChkAcc> &chkList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getFname() == fName && chkList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchChk(chkList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search checking account by phone number
void searchCheckingPhone(vector<ChkAcc> &chkList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < chkList.size(); i++)
        {
            if (chkList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchChk(chkList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search checking account menu
void searchChecking(vector<ChkAcc> &chkList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchCheckingId(chkList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchCheckingName(chkList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchCheckingPhone(chkList, adminList, accNum);
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

//Search saving account by ID
void searchSavingId(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getSavID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchSav(savList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search saving account by name
void searchSavingName(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getFname() == fName && savList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchSav(savList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search saving account by phone number
void searchSavingPhone(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < savList.size(); i++)
        {
            if (savList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchSav(savList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search saving menu
void searchSaving(vector<SavAcc> &savList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchSavingId(savList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchSavingName(savList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchSavingPhone(savList, adminList, accNum);
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

//Search CD account by ID
void searchCDId(vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getCDID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchCD(cdList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search CD account by name
void searchCDName(vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getFname() == fName && cdList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchCD(cdList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search CD account by phone number
void searchCDPhone(vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < cdList.size(); i++)
        {
            if (cdList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchCD(cdList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to seach CD menu
void searchCD(vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchCDId(cdList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchCDName(cdList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchCDPhone(cdList, adminList, accNum);
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

//Search V account by ID
void searchVId(vector<ClassV> &vList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getVID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchV(vList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search V account by name
void searchVName(vector<ClassV> &vList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getFname() == fName && vList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchV(vList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search V account by phone number
void searchVPhone(vector<ClassV> &vList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < vList.size(); i++)
        {
            if (vList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchV(vList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search V account menu
void searchV(vector<ClassV> &vList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchVId(vList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchVName(vList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchVPhone(vList, adminList, accNum);
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

//Search U account by ID
void searchUId(vector<ClassU> &uList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getUID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchU(uList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search U account by name
void searchUName(vector<ClassU> &uList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getFname() == fName && uList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchU(uList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search U account by phone number
void searchUPhone(vector<ClassU> &uList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < uList.size(); i++)
        {
            if (uList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchU(uList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search U account menunu
void searchU(vector<ClassU> &uList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchUId(uList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchUName(uList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchUPhone(uList, adminList, accNum);
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

//Search X account by ID
void searchXId(vector<ClassX> &xList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getXID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchX(xList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search X account by name
void searchXName(vector<ClassX> &xList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getFname() == fName && xList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchX(xList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search X account by phone number
void searchXPhone(vector<ClassX> &xList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < xList.size(); i++)
        {
            if (xList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchX(xList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search X account menunu
void searchX(vector<ClassX> &xList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchXId(xList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchXName(xList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchXPhone(xList, adminList, accNum);
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

//Search Y account by ID
void searchYId(vector<ClassY> &yList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getYID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchY(yList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search Y account by name
void searchYName(vector<ClassY> &yList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getFname() == fName && yList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchY(yList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search Y account by phone number
void searchYPhone(vector<ClassY> &yList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < yList.size(); i++)
        {
            if (yList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchY(yList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search Y account menunu
void searchY(vector<ClassY> &yList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchYId(yList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchYName(yList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchYPhone(yList, adminList, accNum);
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

//Search Z account by ID
void searchZId(vector<ClassZ> &zList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Account ID That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string id = getZID();
        if (id == "quit")
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getID() == id)
            {
                found = true;
                adminList[accNum].searchZ(zList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account ID You Just Enter Does Not Exist\n";
    }
}
//Search Z account by name
void searchZName(vector<ClassZ> &zList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Name That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string fName = getFirstName();
        if ((fName == "quit"))
        {
            break;
        }
        string lName = getLastName();
        if ((fName == "quit") or (lName == "quit"))
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getFname() == fName && zList[i].getLname() == lName)
            {
                found = true;
                adminList[accNum].searchZ(zList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Name You Just Enter Does Not Exist\n";
    }
}
//Search Z account by phone number
void searchZPhone(vector<ClassZ> &zList, vector<SystemAdmin> &adminList, int accNum)
{
    bool found = false;
    while (!found)
    {
        cout << "\nPlease Enter The Phone Number That You Are Searching For, Or Enter \"quit\" To Exit To The Previous Menu.\n";
        string phone = getPhone();
        if (phone == "quit")
        {
            break;
        }
        for (int i = 0; i < zList.size(); i++)
        {
            if (zList[i].getPhoneNum() == phone)
            {
                found = true;
                adminList[accNum].searchZ(zList[i]);
            }
        }
        if (!found)
            cout << "\nThe Account Phone Number You Just Enter Does Not Exist\n";
    }
}
//Go to search Z account menunu
void searchZ(vector<ClassZ> &zList, vector<SystemAdmin> &adminList, int accNum)
{
    bool done = false;
    while (!done)
    {
        cout << "\nWhat Would You Like To Search By?\n";
        cout << "\t[1] Search By Account Account Number\n";
        cout << "\t[2] Search By Name\n";
        cout << "\t[3] Search By Phone\n";
        cout << "\t[4] Go Back\n";
        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchZId(zList, adminList, accNum);
            break;
        }
        case 2:
        {
            searchZName(zList, adminList, accNum);
            break;
        }
        case 3:
        {
            searchZPhone(zList, adminList, accNum);
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

void adminSearch(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList)
{
    bool done = false;
    while (!done)
    {
        cout << "What Type Of Account ID Do You Want To Retrieve?\n";
        cout << "\t[1] Checking Account\n";
        cout << "\t[2] Saving Account\n";
        cout << "\t[3] Certificate of Deposit\n";
        cout << "\t[4] U Account\n";
        cout << "\t[5] V Account\n";
        cout << "\t[6] X Account\n";
        cout << "\t[7] Y Account\n";
        cout << "\t[8] Z Account\n";
        cout << "\t[9] Go Back\n";

        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            searchChecking(chkList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 2:
        {
            searchSaving(savList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 3:
        {
            searchCD(cdList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 4:
        {
            searchU(uList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 5:
        {
            searchV(vList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 6:
        {
            searchX(xList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 7:
        {
            searchY(yList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 8:
        {
            searchZ(zList, adminList, accNum);
            cout << "\nSearching completed.\n";
            break;
        }
        case 9:
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

void adminMenu(vector<ChkAcc> &chkList, vector<SavAcc> &savList, vector<CD> &cdList, vector<BankOfficial> &officList, vector<SystemAdmin> &adminList, int accNum, vector<ClassU> &uList, vector<ClassV> &vList, vector<ClassX> &xList, vector<ClassY> &yList, vector<ClassZ> &zList, string &uStatus, string &vStatus, string &xStatus, string &yStatus, string &zStatus, double &savPen, double &uPen, double &vPen, double &xPen, double &yPen, double &zPen, double &savSafLe, double &uSafLe, double &vSafLe, double &xSafLe, double &ySafLe, double &zSafLe, double &savInt, double &uInt, double &vInt, double &xInt, double &yInt, double &zInt)
{
    bool done = false;
    while (!done)
    {
        cout << "Please Choose One of These Options:\n";
        cout << "\t[1] Create New Bank Official Account\n";
        cout << "\t[2] Enable Bank Official Account\n";
        cout << "\t[3] Disable Bank Official Account\n";
        cout << "\t[4] Create New Bank Account Type\n";
        cout << "\t[5] Delete Bank Account Type\n";
        cout << "\t[6] Modify Bank Account Type\n";
        cout << "\t[7] Retrieve User ID\n";
        cout << "\t[8] Change User's Password\n";
        cout << "\t[9] Log out\n";

        int input = stoi(getInput());
        switch (input)
        {
        case 1:
        {
            cout << "\nYour Bank Official Account ID Is B" << to_string(officList.size()) << "\n";
            string id = to_string(officList.size());
            cout << "\nPlease Enter Your New Password\n";
            string password = getPassword();
            cout << "\nPlease Enter Your First Name\n";
            string fName = getFirstName();
            cout << "\nPLease Enter Your Last Name\n";
            string lName = getLastName();

            BankOfficial account(id, password, fName, lName);
            BankOfficial::totalB++;
            officList.push_back(account);
            account.saveData();
            cout << "\nNew Bank Official Created.\n";
            cout << "\n\tID: " << id;
            cout << "\n\tPassword: " << password;
            cout << "\n\tName: " << fName << " " << lName << endl;
            break;
        }
        case 2:
        {
            bool found = false;
            while (!found)
            {
                cout << "\nPlease Enter The Account ID That You Would Like To Enable.\n";
                string id = getOffID();
                for (int i = 0; i < officList.size(); i++)
                {
                    if (officList[i].getID() == id)
                    {
                        found = true;
                        adminList[accNum].enableOfficialAcc(officList[i]);
                        officList[i].saveData();
                    }
                }
                if (!found)
                    cout << "\nThe Account ID You Just Enter Does Not Exist\n";
            }
            cout << "\nBank Official Enabled.\n";
            break;
        }
        case 3:
        {
            bool found = false;
            while (!found)
            {
                cout << "\nPlease Enter The Account ID That You Would Like To Close.\n";
                string id = getOffID();
                for (int i = 0; i < officList.size(); i++)
                {
                    if (officList[i].getID() == id)
                    {
                        found = true;
                        adminList[accNum].disableOfficialAcc(officList[i]);
                        officList[i].saveData();
                    }
                }
                if (!found)
                    cout << "\nThe Account ID You Just Enter Does Not Exist\n";
            }
            cout << "\nBank Official Disabled. In Order To Enable It, Your Permission Is Required.\n";
            break;
        }
        case 4:
        {
            createAccMenu(adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            
            break;
        }
        case 5:
        {
            deleteAccMenu(adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe);
            
            break;
        }
        case 6:
        {
            modAccMenu(savList, adminList, accNum, uList, vList, xList, yList, zList, savPen, uPen, vPen, xPen, yPen, zPen, savSafLe, uSafLe, vSafLe, xSafLe, ySafLe, zSafLe, savInt, uInt, vInt, xInt, yInt, zInt);
            
            break;
        }
        case 7:
        {
            adminSearch(chkList, savList, cdList, adminList, accNum, uList, vList, xList, yList, zList);
            
            break;
        }
        case 8:
        {
            changePassMenu(chkList, savList, cdList, adminList, accNum, uList, vList, xList, yList, zList, uStatus, vStatus, xStatus, yStatus, zStatus);
            
            break;
        }
        case 9:
        {
            done = true;
            cout << "\nLogged Out Of System Administrator Account.\n";
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
