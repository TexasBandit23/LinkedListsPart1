#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student{
public:
  //functions accessible by all files 
  
  //take in set ID
  void setID(int newID);

  //take in and set first and last name
  void setFirst(char* newFN);
  void setLast(char* newLN);
    
  //take in set GPA
  void setGPA(float newGPA);

  //output all information
  void getInfo();

     
private:
  //variables only accessible by student.cpp
  int idNum;
  char* firstName;
  char* lastName;
  float GPA;
    
};

#endif
