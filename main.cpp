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
public:
Person (string depart, int exp){
dp
void display ()





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
 currentStudents+=s;
}
void displayCourseInfo() {
cout << "the courseCode is:" << courseCode << "the name of the course is " << courseName << endl;
cout << "the max num of students is " << maxStudents << "and the current students:" << currentStudents << endl;
}







// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
