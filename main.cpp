#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
class Person {

private:
string name;
int id;
public:
void display () {
cout << "name of person:" << name << "id:" << id << endl;
};


// ==================== Student Class Implementation ====================

class Student: public Person {
private:
int yearLevel;
string major;
public:
void display () {
cout << "the yearlevel is" << yearLevel << "the major of the student" << major << endl;
};




// ==================== Instructor Class Implementation ====================
class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor() : Person(), department(" "), experienceYears(0) {}
    Instructor(string n, int i, string d, int e)
        : Person(n, i), department(d), experienceYears(e) {}

    void display() override {
        cout << "Instructor Name: " << name << ",
return 0; 
}




// ==================== Course Class Implementation ====================
class Course {
private:
string courseCode;
string courseName;
int maxStudents;
Student* students;
int currentStudents;
public:
void addStudent (const Student& s) {
 students+=s;
}
void displayCourseInfo() {
cout << "the courseCode is:" << courseCode << "the name of the course is " << courseName << endl;
cout << "the max num of students is " << maxStudents << "and the current students:" << currentStudents << endl;
}







// ==================== Main Function ====================
int main() {
    
    Instructor instructor("nada", 1001, "Computer Science", 10);
    instructor.display();

    // Create some students
    Student s1("Nada", 2001, 2, "Software Engineering");
    Student s2("Ali", 2002, 3, "Information Systems");

    s1.display();
    s2.display();

    // Create a course and add students
    Course course("CS101", "Introduction to Programming", 3);
    course.addStudent(s1);
    course.addStudent(s2);

    // Display course info
    course.displayCourseInfo();





