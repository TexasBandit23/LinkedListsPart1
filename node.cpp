#include "Node.h"
#include <iostream>

//creates a new students
Node::Node(Student* newstudent) {
    student = newstudent;
    next = NULL;
}

//destroys student
Node::~Node() {
    delete &student;
    next = NULL;
}

//function returns student
Student *Node::getStudent() {
  return student;
}

//set the next node
void Node::setNext(Node* newnext) {
    next = newnext;
}

//get the next node
Node* Node::getNext() {
  return next; 
}
