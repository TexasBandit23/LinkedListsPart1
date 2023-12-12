#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

#include "Student.h"

class Node {
public:
  //functions accessible by all files
  
  //constructor
  Node(Student* newstudent);

  //destructor
  ~Node();

  //return student
  Student *getStudent();

  //sets the next node
  void setNext(Node* newnext);
  
  //gets the next node
  Node* getNext();
    
private:
  //variables only accessible by node.cpp
  Student* student;
  Node* next;
};
  #endif
  
