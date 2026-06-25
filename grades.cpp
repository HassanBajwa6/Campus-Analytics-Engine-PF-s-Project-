#include "grades.h"
#include <iostream>
#include <fstream>

using namespace std;

void addGrade()
{
    string id;
    float quiz, assignment, mid, finalExam;
    float total;

    cout << "\nEnter Student ID: ";
    cin >> id;

    cout << "Quiz Marks: ";
    cin >> quiz;

    cout << "Assignment Marks: ";
    cin >> assignment;

    cout << "Mid Marks: ";
    cin >> mid;

    cout << "Final Marks: ";
    cin >> finalExam;

    total = (quiz * 0.10) +
            (assignment * 0.10) +
            (mid * 0.30) +
            (finalExam * 0.50);

    ofstream file("grades.txt", ios::app);

    file << id << ","
         << quiz << ","
         << assignment << ","
         << mid << ","
         << finalExam << ","
         << total << endl;

    file.close();

    cout << "\nGrade Added Successfully!\n";
}

void viewGrades()
{
    ifstream file("grades.txt");

    string line;

    cout << "\n===== GRADE RECORDS =====\n";

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}
