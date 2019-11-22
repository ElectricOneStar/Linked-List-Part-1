/*
Linked list part 1 by Andrew Thomas 11/22/19 Mr.Galbraith C++ sem 1 Class. This includes this main claass, a node class, and a student class. The student class has name, id, and gpa, and that is stored in the node, which can point to other nodes and their corresponding student. This is the main function and demonstrates the use of these nodes. It defines two nodes and puts students in the two node. Then I get the first student from the first node and print that informition. Then I get the second student from the second node by using the first node and printing that information. 
*/
#include <iostream> // libraries
#include <cstring>
#include "Student.h"
#include "Node.h"
using namespace std;
int main(){
  cout << "Welcome to Linked List" << endl; // intro
  //return 0;
  // Node* ListTail = new Node;
  Student* newStudent = new Student; // student 1
     char* name = new char;
   int* id = new int;
   float* gpa = new float;
   (*id) = 323241;
   (*gpa) = 4.00;
   strcpy(name, "Andrew");
   (*newStudent).setName(name); // sets information of student 1
   (*newStudent).setID(id);
   (*newStudent).setGPA(gpa);
   //   for(int i = 0; i < strlen(name); i++){
   // cout << name[i];
   //}
   
   //for(int i = 0; i < strlen((*newStudent).getName()); i++){
   // cout << (*newStudent).getName()[i];
   //}
   Node* ListTail = new Node(newStudent); // initialzes node one and puts student 1 in it.
   Student* newStudentTwo = new Student; // student 2
   char* nameTwo = new char;
   int* idTwo = new int;
   float* gpaTwo = new float;
   strcpy(nameTwo, "Thomas");
   (*idTwo) = 346258;
   (*gpaTwo) = 3.00;
   (*newStudentTwo).setName(nameTwo); // sets infromation of studnet 2
   (*newStudentTwo).setID(idTwo);
   (*newStudentTwo).setGPA(gpaTwo);
   Node* NewTail = new Node(newStudentTwo); //initializes node two and puts student 2 in it.
  //Student* newStudentThree = new Student;
  
   for(int i = 0; i < strlen((*(*ListTail).getStudent()).getName()); i++){ // prints name of s1
    cout << (*(*ListTail).getStudent()).getName()[i];
}
  cout << " ";
  //for(int i = 0; i < strlen((*(*ListTail).getStudent()).getID()); i++){
  cout << (*(*(*ListTail).getStudent()).getID()); // id s1
    //}
  cout << " "; 
  //for(int i = 0; i < strlen((*(*ListTail).getStudent()).getGPA()); i++){
  cout << (*(*(*ListTail).getStudent()).getGPA()); // gpa s1
    //}

  cout << endl;
  (*ListTail).setNext(NewTail); // connects the nodes(node 1 points to node 2)
    //(*ListTail).getNext();
  for(int i = 0; i < strlen((*(*(*ListTail).getNext()).getStudent()).getName()); i++){ // prints name of s2 using node 1
    cout << (*(*(*ListTail).getNext()).getStudent()).getName()[i];
}
      cout << " ";
      cout << (*(*(*(*ListTail).getNext()).getStudent()).getID()); // id s2
      cout << " ";
      cout << (*(*(*(*ListTail).getNext()).getStudent()).getGPA()); // gpa s2
      cout << endl;
}
