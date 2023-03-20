#include <bits/stdc++.h>
#include "student.h"

using namespace std;

// Student class constructor
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

// Function to getinformation for student.
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

// Function to add library Due
void student::setLibraryDue(int amount, string reason)
{
    libraryDue = amount;
    libraryDueReason = reason;
}

// Function to add laboratory Due
void student ::setLaboratoryDue(int amount, string reason)
{
    laboratoryDue = amount;
    laboratoryDueReason = reason;
}

// Function to add Infrastructure Due
void student ::setInfraDue(int amount, string reason)
{
    infraDue = amount;
    infraDueReason = reason;
}


// Function to show library Due;
void student::showLibraryDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Library Due : Rs. " << libraryDue << endl;
    cout << "Library Due Reason : " << libraryDueReason << endl;
}

// Function to show laboratory Due;
void student::showLaboratoryDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Laboratory Due : Rs. " << laboratoryDue << endl;
    cout << "Laboratory Due Reason :  " << laboratoryDueReason << endl;
}

// Function to show infrastructure Due;
void student ::showInfraDue()
{
    cout << "******************** Student info ****************************" << endl;
    cout << "Full Name : " << fullName << endl;
    cout << "Roll No : " << rollNo << endl;
    cout << "Class Name : " << className << endl;
    cout << "Infrastructure Due : Rs. " << infraDue << endl;
    cout << "Infrastructure Due Reason :  " << infraDueReason << endl;
}