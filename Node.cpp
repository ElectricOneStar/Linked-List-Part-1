// Node class .cpp flie
#include <iostream> // libraries
#include "Node.h"
#include <cstring>
using namespace std;

Node::Node(Student* s){ // constructor
  
  student = s;
  node = NULL;
  //
  //Node* node = new Node;
  // node = new Node;
}
Node::~Node(){ // destructor
  delete student;
  delete node;
}
Node* Node::getNext(){ // gets the next node pointer
return node;
}
Student* Node::getStudent(){ // gets the student pointer from this ndoe
  return student;
}
void Node::setNext(Node* n ){ // sets the next node pointer
  node = n;
}
