#include <iostream>
#include "student_ops.h"
#include "course_ops.h"
#include "attendance.h"
#include "grades.h"
#include "fee_tracker.h"
#include "reports.h"

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===================================";
        cout << "\n   CAMPUS ANALYTICS ENGINE";
        cout << "\n===================================\n";

        cout << "\n1. Add Student";
        cout << "\n2. View Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Add Course";
        cout << "\n7. View Courses";
        cout << "\n8. Mark Attendance";
        cout << "\n9. View Attendance";
        cout << "\n10. Add Grade";
        cout << "\n11. View Grades";
        cout << "\n12. Add Fee Record";
        cout << "\n13. View Fee Records";
        cout << "\n14. Generate Report";
        cout << "\n15. Exit";

        cout << "\n\nEnter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: addCourse(); break;
            case 7: viewCourses(); break;
            case 8: markAttendance(); break;
            case 9: viewAttendance(); break;
            case 10: addGrade(); break;
            case 11: viewGrades(); break;
            case 12: addFee(); break;
            case 13: viewFees(); break;
            case 14: generateReport(); break;
            case 15:
                cout << "\nThank You For Using Campus Analytics Engine\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 15);

    return 0;
}
