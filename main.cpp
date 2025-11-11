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

class Student {
private:
int yearLevel;
string major;
public:
void display () {
cout << "the yearlevel is" << yearLevel << "the major of the student" << major << endl;
};




// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================
int main() {
   
    
    return 0;
}
