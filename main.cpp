#include <bits/stdc++.h>
#include "student.h"
#include "backend_functions.h"

using namespace std;

int main()
{

    int choice;
    char restart;
    long long rollNo;
    char fullName[100];
    char className[100];

    do
    {
        // Dashborad for option choice.
        cout << "\n*********  Welcome to No Dues Management System for Institutes.  *********"<<endl;
        cout << "\nChoose the option from below what you want to perform" << endl;
        cout << "1.Show All student Details." << endl;
        cout << "2.Add student" << endl;
        cout << "3.Show particular student" << endl;
        cout << "4.Add Libarary Due" << endl;
        cout << "5.Add Laboratory Due" << endl;
        cout << "6.Add Infrastructure Due" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // Getting all details of students.
            cout << "*******  Below are the details of all students ******* " << endl;
            showAllStudents();
            break;

        case 2:
            // Adding a student.
            cout << "Enter the required details for adding a student :" << endl;
            cout << "Enter the Roll NO : ";
            cin >> rollNo;
            cout << "\nEnter the Full name : ";
            cin.ignore();
            cin.getline(fullName, 100);
            cout << "\nEnter the Class Name : ";
            cin.getline(className, 100);
            addStudent(rollNo, fullName, className, 0, 0, 0, "", "", "");
            break;

        case 3:
            // Details for particular student
            cout << "\nEnter the roll No of student for details : ";
            cin >> rollNo;

            showParticularStudent(rollNo);

            break;

        case 4:
            // Call for LibraryDue addition
            addDues(1);
            break;

        case 5:
        // Call for Laboratary addition
            addDues(2);
            break;

        case 6:
            // Call for Inftrastructure Due addition
            addDues(3);
            break;

        default:
            break;
        }

        // Input asking whether to keep using this application.
        cout << "\nDo you want use other features(press Y/N) : " << endl;
        cin >> restart;
    } while (restart == 'Y' || restart == 'y');
    return 0;
}