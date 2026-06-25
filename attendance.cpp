#include "attendance.h"
#include <iostream>
#include <fstream>

using namespace std;

void markAttendance()
{
    string id, status;

    cout << "\nEnter Student ID: ";
    cin >> id;

    cout << "Enter Attendance (P/A/L): ";
    cin >> status;

    ofstream file("attendance_log.txt", ios::app);

    file << id << "," << status << endl;

    file.close();

    cout << "\nAttendance Marked Successfully!\n";
}

void viewAttendance()
{
    ifstream file("attendance_log.txt");

    string line;

    cout << "\n===== ATTENDANCE RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

