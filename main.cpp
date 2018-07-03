/**
 * @file main.cpp
 * @author Jose Silva
 * @brief Main program for Pointer Reference example
 */

#include <iostream>
#include "Student.h"

//void demoPointer(Person *ptr);
//void demoReference(Person &ref);

void demoPointer(Person *ptr) {
  ptr->display();
}
void demoReference(Person &ref) {
  ref.display();
}
int main() {

  Person *ptr = new Student("Jose Silva", 35, "Computer Science");

  std::cout << "###\tPointer display" << std::endl;
  ptr->display();

  std::cout << "###\tPointer Demo" << std::endl;
  demoPointer(ptr);
  std::cout << "###\tReference Demo" << std::endl;
  demoReference(*ptr);

  delete ptr;//don't forget to always deallocate memory

  return 0;
}


