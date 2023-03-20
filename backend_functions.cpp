#include <bits/stdc++.h>
#include "student.h"
#include "backend_functions.h"

using namespace std;

map<int, student *> studentDB;

void showAllStudents()
{
    for (auto it : studentDB)
    {
        it.second->getinfo();
    }
}

void showParticularStudent(long long rollNo)
{
    if(studentDB.find(rollNo) == studentDB.end()){
        cout<<"Student with given roll No is not present. Please try again..";
        return;
    }
    studentDB[rollNo]->getinfo();
}

void addStudent(long long rollNo, string fullName, string className, int librayDue, int laboratoryDue, int infraDue, string libraryDueReason, string laboratoryDueReason, string infraDueReason)
{
     
    student *newStudent = new student(rollNo, fullName, className, librayDue,laboratoryDue,infraDue,libraryDueReason,laboratoryDueReason,infraDueReason);

    studentDB[rollNo] = newStudent;
}

void libraryDueAdd(long long rollNo, int amount, string reason)
{
    studentDB[rollNo]->setLibraryDue(amount, reason);
}
void laboratoryDueAdd(long long rollNo, int amount, string reason)
{
    studentDB[rollNo]->setLaboratoryDue(amount, reason);
}
void infraDueAdd(long long rollNo, int amount, string reason)
{
    studentDB[rollNo]->setInfraDue(amount, reason);
}

void addDues(int type)
{
    long long rollNo;
    int amount;
    char reason[10000];
    cout << "\nEnter the roll No : ";
    cin >> rollNo;
    cout << "\nEnter the Due amount : ";
    cin >> amount;
    cout << "\nEnter the reason for due charge : ";
    cin.ignore();
    cin.getline(reason, 10000);

    if(studentDB.find(rollNo) == studentDB.end()){
        cout<<"Student with given roll No is not present. Please try again..";
        return;
    }

    switch (type)
    {
    case 1:
        libraryDueAdd(rollNo,amount,reason);
        break;
    
    case 2:
        laboratoryDueAdd(rollNo,amount,reason);
        break;
    
    case 3:
        infraDueAdd(rollNo,amount,reason);
    default:
        break;
    }
}
