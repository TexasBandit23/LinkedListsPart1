#include "Student.h"
#include <cstring>
#include <cctype>

//mostly based off of studentlist

//function that gets all of the info of a student
void Student::getInfo() {
  cout << "Name: " << lastName << ", " << firstName << endl;
  cout << "ID: " << idNum << endl;
  cout << "GPA: " << GPA << endl;
}

//function that sets the ID of a student
void Student::setID(int newID) {
  idNum = newID;
}

//function that sets first name of a student
void Student::setFirst(char* newFN) {
  firstName = new char[100];
  strcpy(firstName, newFN);
}

//function that sets the last name of a student
void Student::setLast(char* newLN) {
  lastName = new char[100];
  strcpy(lastName, newLN);
}

//function that sets the GPA of a student
void Student::setGPA(float newGPA) {
  GPA = newGPA;
}

