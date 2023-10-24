/*
Author: Tejas Pandit
Last Edited 10/23/23
This program StudentList takes user input to create a list of students
The user inputs the name of the student, their id number, and their GPA
The user can add students, remove students, print out all students, or end the program
Worked with Jazveer Kaler
*/

//imports
#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>
#include <iomanip>

using namespace std;

//struct for a student, basically a student object and its variables
struct Student {
  char firstName[81];
  char lastName[81];
  int IDnum;
  float GPA;
};

//function prototypes
void add(vector<Student*>* StudentList);
void print(vector<Student*>* StudentList);
void remove(vector<Student*>* StudentList);

int main(){
  bool running = true;
  char input[81];

  vector<Student*>* StudentList = new vector<Student*>();

  //keeps running until the user quits the program
  while(running == true){
    //options for user input
    cout << "Enter ADD, REMOVE, PRINT, or QUIT!" << endl;

    cin.get(input, 81);
    cin.ignore(81, '\n');

    //if the input is add, run the add function
    if ((strcmp(input, "ADD")) == 0){
      cout << "ADD!" << endl;
      add(StudentList);
    }
    //if the input is remove, run the remove function
    else if ((strcmp(input, "REMOVE")) == 0){
      cout << "REMOVE!" << endl;
      remove(StudentList);
    }
    //if the input is print, run the print function
    else if ((strcmp(input, "PRINT")) == 0){
      cout << "PRINT!" << endl;
      print(StudentList);
    }
    //if the input is quit, end the while loop
    else if ((strcmp(input, "QUIT")) == 0){
      cout << "QUIT!" << endl;
      running = false;
    }
  }
  return 0;
}

//add student function
void add(vector<Student*> *vector1){
  //variables
  char inputFirstName[81];
  char inputLastName[81];
  int inputIDnum;
  float inputGPA;

  //take in user input of the information of the student to be added
  cout << "Please Enter the Student's First Name: " << endl;
  cin >> inputFirstName;
  cout << "Please Enter the Student's Last Name: " << endl;
  cin >> inputLastName;
  cout << "Please Enter the Student's ID Number: " << endl;
  cin >> inputIDnum;
  cout << "Please Enter the Student's GPA: " << endl;
  cin >> inputGPA;

  cin.ignore(81, '\n');

  //Jazveer Kaler
  //Inputs the information into the vector
  Student *student = new Student();
  strcpy(student->firstName, inputFirstName);
  strcpy(student->lastName, inputLastName);
  student->IDnum = inputIDnum;
  student->GPA = inputGPA;
  vector1->push_back(student);

  cout << "Student Created!" << endl;
  cout << endl;
}

//print all students function
void print(vector<Student*> *vector1){

  //Jazveer Kaler
  //Creates an iterator, iterates through the vector and prints out all students and their information
  vector<Student*>::iterator start = vector1->begin();

  for (start; start < vector1->end(); start++){
    cout << "Name: " << (*start)->firstName << " " << (*start)->lastName << ", ID Number: "
         << (*start)->IDnum << ", GPA: " << fixed << setprecision(2) << (*start)->GPA
         << endl;
  }

  cout << "All students on the list are shown above" << endl;
  cout << endl;
}

//remove student function
void remove(vector<Student*> *vector1){
  //take in user input of which student is to be removed
  int IDToBeRemoved;
  cout << "Which student would you like to delete (enter their ID number)?" << endl;
  cin >> IDToBeRemoved;

  //create another iterator, same as the one in the add function, and iterate through the vector
  //when the user inputted id is found, erase that student
  vector<Student*>::iterator start = vector1->begin();

  for (start; start < vector1->end(); start++){
    if (IDToBeRemoved == (*start)->IDnum){
      delete *start;
      vector1->erase(start);
      break;
    }
  }

  cout << "Student Removed!" << endl;
  cin.ignore(81, '\n');
  cout << endl;
}
