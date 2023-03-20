#include<bits/stdc++.h>

using namespace std;

void showAllStudents();

void showParticularStudent(long long rollNo);

void addStudent(long long rollNo, string fullName, string className, int librayDue, int laboratoryDue,int infraDue,string libraryDueReason ,string laboratoryDueReason,string infraDueReason);

void libraryDueAdd(long long rollNo,int amount,string reason);
void laboratoryDueAdd(long long rollNo,int amount,string reason);
void infraDueAdd(long long rollNo,int amount,string reason);

void addDues(int type);

