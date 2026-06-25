#include "student_ops.h"
#include <iostream>
#include <fstream>

using namespace std;

void addStudent()
{
    string id, name;

    cout << "\nEnter Student ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, name);

    ofstream file("students.txt", ios::app);

    file << id << "," << name << endl;

    file.close();

    cout << "\nStudent Added Successfully!\n";
}

void viewStudents()
{
    ifstream file("students.txt");

    string line;

    cout << "\n===== STUDENT RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void searchStudent()
{
    string searchID;
    string line;
    bool found = false;

    cout << "\nEnter Student ID to Search: ";
    cin >> searchID;

    ifstream file("students.txt");

    while(getline(file, line))
    {
        if(line.find(searchID) != string::npos)
        {
            cout << "\nStudent Found:\n";
            cout << line << endl;
            found = true;
        }
    }

    file.close();

    if(!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}

void deleteStudent()
{
    string deleteID;
    string line;

    cout << "\nEnter Student ID to Delete: ";
    cin >> deleteID;

    ifstream file("students.txt");
    ofstream temp("temp.txt");

    bool found = false;

    while(getline(file, line))
    {
        if(line.find(deleteID) == string::npos)
        {
            temp << line << endl;
        }
        else
        {
            found = true;
        }
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found)
        cout << "\nStudent Deleted Successfully!\n";
    else
        cout << "\nStudent Not Found!\n";
}void updateStudent()
{
    string updateID;
    string line;

    cout << "\nEnter Student ID to Update: ";
    cin >> updateID;

    ifstream file("students.txt");
    ofstream temp("temp.txt");

    bool found = false;

    while(getline(file, line))
    {
        if(line.find(updateID) != string::npos)
        {
            string newID, newName;

            cout << "\nEnter New Student ID: ";
            cin >> newID;

            cin.ignore();

            cout << "Enter New Student Name: ";
            getline(cin, newName);

            temp << newID << "," << newName << endl;

            found = true;
        }
        else
        {
            temp << line << endl;
        }
    }

    file.close();
    temp.close();

    remove("students.txt");
    rename("temp.txt", "students.txt");

    if(found)
        cout << "\nStudent Updated Successfully!\n";
    else
        cout << "\nStudent Not Found!\n";
}
