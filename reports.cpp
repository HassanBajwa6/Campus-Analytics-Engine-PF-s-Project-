#include "reports.h"
#include <iostream>
#include <fstream>

using namespace std;

void generateReport()
{
    string line;
    int students = 0;
    int courses = 0;
    int attendance = 0;
    int grades = 0;
    int fees = 0;

    ifstream studentFile("students.txt");
    while(getline(studentFile, line))
        students++;
    studentFile.close();

    ifstream courseFile("courses.txt");
    while(getline(courseFile, line))
        courses++;
    courseFile.close();

    ifstream attendanceFile("attendance_log.txt");
    while(getline(attendanceFile, line))
        attendance++;
    attendanceFile.close();

    ifstream gradeFile("grades.txt");
    while(getline(gradeFile, line))
        grades++;
    gradeFile.close();

    ifstream feeFile("fees.txt");
    while(getline(feeFile, line))
        fees++;
    feeFile.close();

    cout << "\n====================================";
    cout << "\n      CAMPUS ANALYTICS REPORT";
    cout << "\n====================================";

    cout << "\nTotal Students          : " << students;
    cout << "\nTotal Courses           : " << courses;
    cout << "\nAttendance Records      : " << attendance;
    cout << "\nGrade Records           : " << grades;
    cout << "\nFee Records             : " << fees;

    cout << "\n====================================\n";
}
