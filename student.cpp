#include <bits/stdc++.h>
#include "student.h"

using namespace std;

student ::student(long long rollNo, string fullName, string className,  int libraryDue ,int laboratoryDue, int infraDue, string libraryDueReason, string laboratoryDueReason, string infraDueReason)
{
    this->rollNo = rollNo;
    this->fullName = fullName;
    this->className = className;
    this->libraryDue = libraryDue;
    this->libraryDueReason = libraryDueReason;
    this->laboratoryDue = laboratoryDue;
    this->laboratoryDueReason = laboratoryDueReason;
    this->infraDue = infraDue;
    this->infraDueReason = infraDueReason;
}

void student ::getinfo()
{
    cout << "\n******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Library Due : Rs. " << libraryDue << endl;
    cout << "Library Due Reason : " << libraryDueReason << endl;
    cout << "Laboratory Due : Rs. " << laboratoryDue << endl;
    cout << "Laboratory Due Reason :  " << laboratoryDueReason << endl;
    cout << "Infrastructure Due : Rs. " << infraDue << endl;
    cout << "Infrastructure Due Reason :  " << infraDueReason << endl;
}

void student::setLibraryDue(int amount, string reason)
{
    libraryDue = amount;
    libraryDueReason = reason;
}


void student ::setLaboratoryDue(int amount, string reason)
{
    laboratoryDue = amount;
    laboratoryDueReason = reason;
}

void student ::setInfraDue(int amount, string reason)
{
    infraDue = amount;
    infraDueReason = reason;
}


void student::showLibraryDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Library Due : Rs. " << libraryDue << endl;
    cout << "Library Due Reason : " << libraryDueReason << endl;
}


void student::showLaboratoryDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Laboratory Due : Rs. " << laboratoryDue << endl;
    cout << "Laboratory Due Reason :  " << laboratoryDueReason << endl;
}

void student ::showInfraDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Infrastructure Due : Rs. " << infraDue << endl;
    cout << "Infrastructure Due Reason :  " << infraDueReason << endl;
}