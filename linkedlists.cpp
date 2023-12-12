/*
 Author: Tejas Pandit
 Last Edited: 12/11/2023
 This code creates part one of the linked lists project. It creates two students, puts them in a linked list,
 and prints them out
 */

//imports
#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

  //initialize the head node
  Node* head = NULL;
  
  //initialize first student
  Student* student1 = new Student();

  //initialize name of first student
  char firstName1[10] = "Michael";
  char lastName1[10] = "Jordan";

  //set variables of first student
  student1 -> setFirst(firstName1);
  student1 -> setLast(lastName1);
  student1 -> setID(23);
  student1 -> setGPA(4.5);

  //initialize second student
  Student* student2 = new Student();

  //initialize name of second student
  char firstName2[10] = "LeBron";
  char lastName2[10] = "James";

  //set variables of second student
  student2 -> setFirst(firstName2);
  student2 -> setLast(lastName2);
  student2 -> setID(6);
  student2 -> setGPA(2.8);
    
  //use nodes to print out list of two students
  head = new Node(student1);
  head -> setNext(new Node(student2));
    
  head ->getStudent()->getInfo();
    
  cout << endl;
    
  head->getNext()->getStudent()->getInfo();
    
  return 0;
}
