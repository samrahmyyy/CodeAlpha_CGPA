
#include <iostream>
using namespace std ;
int main() {
  int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    double grade =0;
    double totalGradePoints = 0;
    int credit = 0;
    int totalCredits = 0;

    for (int i = 1; i <= numCourses; i++) {
        cout << "Course " << i ;
        cout <<"  "<<endl;
        cout << "  Enter grade (e.g., 3.7): ";
        cin >> grade;
        cout << "  Enter credit hours: ";
        cin >> credit;

        cout << " Grade = " << grade << ", Credit Hours = " <<credit << endl;
         cout <<" "<<endl;
        totalGradePoints += grade * credit;
        totalCredits += credit;
    }
     double gpa = totalGradePoints / totalCredits;
cout << "   "<<endl;
    cout << "Total Credit Hours: " << totalCredits << "\n";
    cout << "Total Grade Points: " << totalGradePoints << "\n";
    cout << "GPA: " << gpa << "\n";
    cout << "Final CGPA: " << gpa << "\n";


    return 0;
}