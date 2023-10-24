#include <iostream>
#include <cstring>
#include <vector>
#include <cctype>
#include <iomanip>

using namespace std;

struct Student {
  char firstName[81];
  char lastName[81];
  int IDnum;
  float GPA;
};

void add(vector<Student*>* StudentList);
void print(vector<Student*>* StudentList);
void remove(vector<Student*>* StudentList);

int main(){
  bool running = true;
  char input[81];

  vector<Student*>* StudentList = new vector<Student*>();

  while(running == true){
    cout << "Enter ADD, REMOVE, PRINT, or QUIT!" << endl;

    cin.get(input, 81);
    cin.ignore(81, '\n');

    if ((strcmp(input, "ADD")) == 0){
      cout << "ADD!" << endl;
      add(StudentList);
    }

    else if ((strcmp(input, "REMOVE")) == 0){
      cout << "REMOVE!" << endl;
      remove(StudentList);
    }

    else if ((strcmp(input, "PRINT")) == 0){
      cout << "PRINT!" << endl;
      print(StudentList);
    }

    else if ((strcmp(input, "QUIT")) == 0){
      cout << "QUIT!" << endl;
      running = false;
    }
  }
  return 0;
}

void add(vector<Student*> *vector1){
  char inputFirstName[81];
  char inputLastName[81];
  int inputIDnum;
  float inputGPA;

  cout << "Please Enter the Student's First Name: " << endl;
  cin >> inputFirstName;
  cout << "Please Enter the Student's Last Name: " << endl;
  cin >> inputLastName;
  cout << "Please Enter the Student's ID Number: " << endl;
  cin >> inputIDnum;
  cout << "Please Enter the Student's GPA: " << endl;
  cin >> inputGPA;

  cin.ignore(81, '\n');

  Student *student = new Student();
  strcpy(student->firstName, inputFirstName);
  strcpy(student->lastName, inputLastName);
  student->IDnum = inputIDnum;
  student->GPA = inputGPA;
  vector1->push_back(student);

  cout << "Student Created!" << endl;
  cout << endl;
}

void print(vector<Student*> *vector1){
  
  vector<Student*>::iterator start = vector1->begin();

  for (start; start < vector1->end(); start++){
    cout << "Name: " << (*start)->firstName << " " << (*start)->lastName << ", ID Number: "
         << (*start)->IDnum << ", GPA: " << fixed << setprecision(2) << (*start)->GPA
         << endl;
  }

  cout << "All students on the list are shown above" << endl;
  cout << endl;
}

void remove(vector<Student*> *vector1){
  int IDToBeRemoved;
  cout << "Which student would you like to delete (enter their ID number)?" << endl;
  cin >> IDToBeRemoved;

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
