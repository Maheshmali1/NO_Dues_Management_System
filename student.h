#include <iostream>

using namespace std;

class student
{
private:
    long long rollNo;
    string fullName;
    string className;
    int libraryDue;
    int laboratoryDue;
    int infraDue;
    string libraryDueReason;
    string laboratoryDueReason;
    string infraDueReason;

public:
    student(long long rollNo, string fullName, string className, int librayDue,int laboratoryDue,int infraDue,string libraryDueReason,string laboratoryDueReason,string infraDueReason);

    void getinfo();
    void setLibraryDue(int amount, string reason);
    void setLaboratoryDue(int amount, string reason);
    void setInfraDue(int amount, string reason);
    void showLibraryDue();
    void showLaboratoryDue();
    void showInfraDue();

    ~student();
};