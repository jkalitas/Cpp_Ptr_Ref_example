/**
 * @file Student.cpp
 * @author Jose Silva
 * @brief Main program for Pointer Reference example
 */

#include "Student.h"
#include "iostream"

Student::Student() : course("Unknown"){}
Student::Student(const std::string &name, int age, const std::string course) : Person(name,age), course(course) {}

void Student::display() const{
  //Calling the parent base class display function
  Person::display();

  std::cout << "COURSE:\t" << course << std::endl;
}

Student::~Student(){
  std::cout << "Called Student destructor" << std::endl;
}