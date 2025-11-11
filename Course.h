#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here


class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student** enrolledStudents;
    int currentStudentCount;

public:
    Course();
    Course(string code, string name, int max);
      ~Course();
    
   
    void setCourseCode(string code);
    void setCourseName(string name);
    void setMaxStudents(int max);
    
   
    string getCourseCode() const;
    string getCourseName() const;
    int getMaxStudents() const;
    int getCurrentStudentCount() const;
    
   
    bool addStudent(Student* s);
    void displayCourseInfo() const;
};














#endif
