#include "course_ops.h"
#include <iostream>
#include <fstream>

using namespace std;

void addCourse()
{
    string code, title;

    cout << "\nEnter Course Code: ";
    cin >> code;

    cin.ignore();

    cout << "Enter Course Title: ";
    getline(cin, title);

    ofstream file("courses.txt", ios::app);

    file << code << "," << title << endl;

    file.close();

    cout << "\nCourse Added Successfully!\n";
}

void viewCourses()
{
    ifstream file("courses.txt");

    string line;

    cout << "\n===== COURSE RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
