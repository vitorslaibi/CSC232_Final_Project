/*
- This file contain the definition of the BankAcc class functions
*/

#include "include.h"

using namespace std;

int BankAcc::getYearDays(int currentYear)    //function to get the number of days in a given year
{
    if (currentYear % 4 == 0)   //if the year divides by 4
    {
        if ((currentYear % 100 == 0) and (currentYear % 400 != 0))  //if the year divides by 100 but not 400
        {
            return 365;     //it's not a leap year
        }
        else    //otherwise it's a leap year
        {
            return 366;
        }
    }
    return 365;     //if the year doesn't divide by 4, it's not a leap year
}

int BankAcc::getMonthDays(int currentYear, int currentMonth)    //calculate the number of days in a given month
{
    switch (currentMonth)
    {
    case 1:
        return 31;
        break;
    case 3:
        return 31;
        break;
    case 5:
        return 31;
        break;
    case 7:
        return 31;
        break;
    case 8:
        return 31;
        break;
    case 10:
        return 31;
        break;
    case 12:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 6:
        return 30;
        break;
    case 9:
        return 30;
        break;
    case 11:
        return 30;
        break;
    case 2:
    {
        if (getYearDays(currentYear) == 365)
        {
            return 28;
        }
        else
        {
            return 29;
        }
        break;
    }
    default:
    
        break;
    }
    return -1;
}

void BankAcc::updateDailyBalance(int year)  //update the balance after a day
{
    updateOnlStat();
    if (isOnline()) //if the account is online, update the interest
    {
        double dailyInterestRate = interestRate / getYearDays(year);
        double dailyInterest = dailyInterestRate * balance;
        balance += dailyInterest;
    }
}
string BankAcc::getID()     //get the account number, number part only
{
    // int firstInt = ID.find_first_of("0123456789");      //find the 1st number
    // int lastInt = ID.find_last_of("0123456789");        //find the last number
    // string actualID = ID.substr(firstInt, lastInt - firstInt + 1);  //take anything in between and return it
    return ID;
}

//getters and setters
string BankAcc::getPassword() { return password; }
string BankAcc::getFname() { return fName; }
string BankAcc::getLname() { return lName; }
string BankAcc::getPhoneNum() { return phoneNum; }
int BankAcc::getOY() { return openY; }
int BankAcc::getOM() { return openM; }
int BankAcc::getOD() { return openD; }
int BankAcc::getCY() { return closeY; }
int BankAcc::getCM() { return closeM; }
int BankAcc::getCD() { return closeD; }
double BankAcc::getBalance() { return balance; }     
double BankAcc::getSafeLevel() { return safeLevel; }
double BankAcc::getPenalty() {return penalty; }   
double BankAcc::getInterestRate() { return interestRate; }
double BankAcc::getServCharge() { return servCharge; }
bool BankAcc::isOnline() { return online; }
bool BankAcc::isInterestFixed() {return fixedInterest; }
int BankAcc::getLastYearCounted(){ return lastYearCounted; }
int BankAcc::getLastMonthCounted(){ return lastMonthCounted; }
int BankAcc::getLastDayCounted(){ return lastDayCounted; }
int BankAcc::getLastHourCounted(){ return lastHourCounted; }
int BankAcc::getLastMinCounted(){ return lastMinCounted; }
void BankAcc::setID(string newID) { ID = newID; }
void BankAcc::setPassword(string newPassword) { password = newPassword; }
void BankAcc::setBalance(double newBalance) { balance = newBalance; }
void BankAcc::setSafeLevel(double newSafeLevel) 
{
    if (safeLevel <= penalty)
    {
        cout << "WTF are you doing you lil bitch you want the customer to bankrupt?" << endl;
        return;
    }
    safeLevel = newSafeLevel;
}
void BankAcc::setPenalty(double newPenalty) 
{
    if (penalty >= safeLevel)
    {
        cout << "WTF are you doing you lil bitch you want the customer to bankrupt?" << endl;
        return;
    }
    penalty = newPenalty;
}
void BankAcc::setInterestRate(double newInterestRate) 
{ 
    if (!isInterestFixed())
    {
        interestRate = newInterestRate; 
    }
}
void BankAcc::setServCharge(double newServCharge) { servCharge = newServCharge; }
void BankAcc::setOnlStat(bool newOnlStat) { online = newOnlStat; }
void BankAcc::setFixedInterest(bool newFixedInterest) { fixedInterest = newFixedInterest; }
void BankAcc::setLastYearCounted(int newLastYearCounted) { lastYearCounted = newLastYearCounted; }
void BankAcc::setLastMonthCounted(int newLastMonthCounted) { lastMonthCounted = newLastMonthCounted; }
void BankAcc::setLastDayCounted(int newLastDayCounted) { lastDayCounted = newLastDayCounted; }
//end of getters and setters

BankAcc::BankAcc(string newID, string newPassword = "", string newFname = "", string newLname = "", string newPhoneNum = "", double newInterestRate = 0.0, double newServCharge = 0.0, double newBalance = 0.0)
{
    balance = newBalance;
    ID = newID;
    password = newPassword;
    fName = newFname;
    lName = newLname;
    phoneNum = newPhoneNum;
    interestRate = newInterestRate;
    servCharge = newServCharge;
    lastYearCounted = getCurrentY();
    lastMonthCounted = getCurrentM();
    lastDayCounted = getCurrentD();
    lastHourCounted = getCurrentH();
    lastMinCounted = getCurrentMin();
    openY = getCurrentY();
    openM = getCurrentM();
    openD = getCurrentD();
    closeY = -1;
    closeM = -1;
    closeD = -1;
    penalty = 0.0;
    safeLevel = 0.0;
}

int BankAcc::getCurrentY()  //get the current year
{
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_year + 1900;
}

int BankAcc::getCurrentM()  //get the current month
{
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mon + 1;
}

int BankAcc::getCurrentD()  //get the current day
{
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_mday;
}

int BankAcc::getCurrentH()  //get the current hour
{
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_hour;
}

int BankAcc::getCurrentMin()  //get the current minute
{
    time_t t = time(0);
    tm* now = localtime(&t);
    return now->tm_min;
}

void BankAcc::updateOnlStat()
{
    if (balance < -5.0)  // if the balance is below $1
    {
        closeAcc();
        return;
    }
    if (balance >= safeLevel)    //if the balance is bigger than $50
    {
        //set the stat and online status to be true
        setOnlStat(true);
    }
}

void BankAcc::calcInt()
{
    int yearNow = getCurrentY();  //get the current year
    int monthNow = getCurrentM();
    int dayNow = getCurrentD();          //get the current day after Jan 1st
    //cout << "|" << lastYearCounted << "|" << lastDayCounted << "|" << yearNow << "|" << dayNow << "|" << endl;
    if (yearNow == lastYearCounted)     //if we're in the same year as the last year recorded
    {
        if (monthNow == lastMonthCounted)   //if we are in the same month as the last month recorded
        {
            for (int day = lastDayCounted + 1; day <= dayNow; day++)    //loop from day the account created to today
            {
                updateDailyBalance(yearNow);    //update the balance
                saveHistory(yearNow, monthNow, day);    //save the day into the text file
            }
        }
        else if (monthNow > lastMonthCounted)   //if we are in the same year but different month
        {
            for (int day = lastDayCounted + 1; day <= getMonthDays(yearNow, lastMonthCounted); day++)    //loop from day last recorded to the last day of that month
            {
                updateDailyBalance(yearNow);    //update the balance
                saveHistory(yearNow, lastMonthCounted, day);
            }
            monthlyCharge();
            for (int month = lastMonthCounted + 1; month < monthNow; month++) //loop through the months
            {
                for (int day = 1; day <= getMonthDays(yearNow, month); day++)   //loop through the day in month
                {
                    updateDailyBalance(yearNow);
                    saveHistory(yearNow, month, day);
                }
                monthlyCharge();
            }
            for (int day = 1; day <= dayNow; day++)     //the days of the current month
            {
                updateDailyBalance(yearNow);
                saveHistory(yearNow, monthNow, day);
            }
        }
        
    }
    if (yearNow > lastYearCounted)      //if at least 1 new year has passed since we created the account
    {
        //loop from the day the account was created until the last day of the year the account was created
        for (int day = lastDayCounted + 1; day <= getMonthDays(lastYearCounted, lastMonthCounted); day++)
        {
            updateDailyBalance(lastYearCounted);    //update the balance daily
            saveHistory(lastYearCounted, lastMonthCounted, day);
        }
        monthlyCharge();     //deduct the service charge
        for (int month = lastMonthCounted + 1; month <= 12; month++)
        {
            for (int day = 1; day <= getMonthDays(lastYearCounted, month); day++)
            {
                updateDailyBalance(lastYearCounted);
                saveHistory(lastYearCounted, month, day);
            }
            monthlyCharge();
        }
        //loop for all the year in between
        for (int year = lastYearCounted + 1; year < yearNow; year++)
        {
            //loop for all the days in that year
            for (int month = 1; month <= 12; month++)
            {
                for (int day = 1; day <= getMonthDays(year, month); day++)
                {
                    updateDailyBalance(year);
                    saveHistory(year, month, day);
                }
                monthlyCharge();
            }
        }
        for (int month = 1; month < monthNow; month++)
        {
            for (int day = 1; day <= getMonthDays(yearNow, month); day++)
            {
                updateDailyBalance(yearNow);
                saveHistory(yearNow, month, day);
            }
            monthlyCharge();
        }
        for (int day = 0; day < dayNow; day++)  //loop from Jan 1st of the current year to the current day
        {
            updateDailyBalance(yearNow);
            saveHistory(yearNow, monthNow, day);
        }
    }
    lastYearCounted = yearNow;      //update the last time the balance was updated
    lastMonthCounted = monthNow;
    lastDayCounted = dayNow;
    lastHourCounted = getCurrentH();
    lastMinCounted = getCurrentMin();
}

void BankAcc::monthlyCharge()    //to deduct the yearly service charge :))
{
    updateOnlStat();
    if (isOnline())
    {
        balance -= servCharge;
        if (balance < safeLevel)
        {
            balance -= penalty;
        }
        updateOnlStat();
    }
}

void BankAcc::saveData()    //save the data to a text file
{
    
    ofstream outFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append(".txt");

    outFile.open(ID + ".txt", fstream::trunc);

    if (!outFile)
    {
        cout << "Cannot find .txt file(s). All data corrupted." << endl;
        return;
    }
    outFile << fName << endl;
    outFile << lName << endl;
    outFile << phoneNum << endl;
    outFile << openY << endl;
    outFile << openM << endl;
    outFile << openD << endl;
    outFile << closeY << endl;
    outFile << closeM << endl;
    outFile << closeD << endl;
    outFile << balance << endl;
    outFile << interestRate << endl;
    outFile << servCharge << endl;
    outFile << online << endl;
    outFile << lastYearCounted << endl;
    outFile << lastMonthCounted << endl;
    outFile << lastDayCounted << endl;
    outFile << password;
    outFile.close();
}

void BankAcc::loadData()    //load data from the text file
{
    ifstream inFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append(".txt");

    inFile.open(ID + ".txt");

    if (!inFile)
    { 
        cout << "Cannot find .txt file(s). All data corrupted." << endl;
        return;
    }

    string text;
    getline(inFile, fName);
    getline(inFile, lName);
    getline(inFile, phoneNum);
    getline(inFile, text);
    openY = stoi(text);
    getline(inFile, text);
    openM = stoi(text);
    getline(inFile, text);
    openD = stoi(text);
    getline(inFile, text);
    closeY = stoi(text);
    getline(inFile, text);
    closeM = stoi(text);
    getline(inFile, text);
    closeD = stoi(text);
    getline(inFile, text);
    balance = stod(text);
    getline(inFile, text);
    interestRate = stod(text);
    getline(inFile, text);
    servCharge = stod(text);
    getline(inFile, text);
    if (text == "0")
    {
        online = false;
    }
    else
    {
        online = true;
    }
    getline(inFile, text);
    lastYearCounted = stoi(text);
    getline(inFile, text);
    lastMonthCounted = stoi(text);
    getline(inFile, text);
    lastDayCounted = stoi(text);
    getline(inFile, password);
    inFile.close();
}

void BankAcc::saveHistory(int year, int month, int day)     //save the day into the txt file
{
    ofstream outFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append("H.txt");

    outFile.open(ID + "H.txt", fstream::app);

    if (!outFile)
    {
        cout << "Cannot find history .txt file(s). All data corrupted." << endl;
        return;
    }

    outFile << endl << "Y" << year << "M" << month << "D" << day;
    outFile.close();
}

void BankAcc::saveTransactionHistory(char type, double amount)      //save the transaction into the text file
{
    ofstream outFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append("H.txt");

    outFile.open(ID + "H.txt", fstream::app);

    if (!outFile)
    {
        cout << "Cannot find history .txt file(s). All data corrupted." << endl;
        return;
    }

    outFile << " " << type << amount << "H" << getCurrentH() << "M" << getCurrentMin();
    outFile.close();
}

void BankAcc::printAllHistory()
{
    ifstream inFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append("H.txt");

    inFile.open(ID + "H.txt");

    if (!inFile)
    {
        cout << "Cannot find history .txt file(s). All data corrupted." << endl;
        return;
    }

    string text;
    getline(inFile, text);
    while (getline(inFile, text))
    {
        getDayHistory(text);
    }
    inFile.close();
}

void BankAcc::printLast7Days()
{
    ifstream inFile;

    // string fileName = "";
    // fileName.append(ID);
    // fileName.append("H.txt");

    inFile.open(ID + "H.txt");

    if (!inFile)
    {
        cout << "Cannot find history .txt file(s). All data corrupted." << endl;
        return;
    }

    string text;
    int count = 0;
    getline(inFile, text);
    while (getline(inFile, text))
    {
        count++;
    }
    inFile.close();
    inFile.open(ID + "H.txt");
    getline(inFile, text);
    for (int i = 0; i < count; i++)
    {
        getline(inFile, text);
        if (i >= count - 7)
        {
            getDayHistory(text);
        }
    }
    inFile.close();
}

void BankAcc::getDayHistory(string text)
{
    string year, month, day, type, val, hour, min;
    text = text.substr(text.find_first_of("Y") + 1);
    year = text.substr(0, text.find_first_of("M"));
    text = text.substr(text.find_first_of("M") + 1);
    month = text.substr(0, text.find_first_of("D"));
    text = text.substr(text.find_first_of("D") + 1);
    if (text.find_first_of(" ") == string::npos)
    {
        day = text;
        cout << "At " << month << "/" << day << "/" << year << ", No Transaction Were Made.\n";
        //continue; WHY IS THERE A CONTINUE HERE??? Sorry, I cut it from a loop XP
    }
    else
    {            
        day = text.substr(0, text.find_first_of(" "));
        text = text.substr(text.find_first_of(" ") + 1);
        cout << "At " << month << "/" << day << "/" << year << ":\n";
    }
    while (true)
    {
        type = text.substr(0, 1);
        if (type == "D")
        {
            type = "Deposited";
        }
        if (type == "W")
        {
            type = "Withdrawed";
        }
        text = text.substr(1);
        val = text.substr(0, text.find_first_of("H"));
        text = text.substr(text.find_first_of("H") + 1);
        hour = text.substr(0, text.find_first_of("M"));
        text = text.substr(text.find_first_of("M") + 1);
        if (text.find_first_of(" ") == string::npos)
        {
            min = text;
            cout << "\t" << type << " " << val << " at " << hour << ":" << min << ".\n";
            break;
        }
        min = text.substr(0, text.find_first_of(" "));
        text = text.substr(text.find_first_of(" ") + 1);
        cout << "\t" << type << " " << val << " at " << hour << ":" << min << ".\n";
    }
}

string BankAcc::encryption(string rawString)
{
    char element;
    string encryptedString = "";
    for (int i = 0; i < rawString.length(); i++)
    {
        element = rawString.at(i);
        element = 158 - element;
        encryptedString += element;
    }
    return encryptedString;
}

string BankAcc::decryption(string encryptedString)
{
    char element;
    string rawString = "";
    for (int i = 0; i < encryptedString.length(); i++)
    {
        element = encryptedString.at(i);
        element = 158 - element;
        rawString += element;
    }
    return rawString;
}