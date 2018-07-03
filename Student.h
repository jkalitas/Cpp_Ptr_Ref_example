/**
 * @file main.cpp
 * @author Jose Silva
 * @brief Main program for Pointer Reference example
 */

#ifndef CPP_STUDENT_H
#include "Person.h"
#define CPP_STUDENT_H

/**
 * Student's class definition
 */
class Student : public Person {

 private:
  /**
   * The student's course
   */
  std::string course;

 public:
  /**
   * Generic constructor
   */
  Student();
  /**
   * Complete constructor
   */
  Student(const std::string &name, int age, const std::string course);


  /**
   * Function to display student's information
   */
  virtual void display() const;
  /**
   * Virtual destructor
   */
  virtual ~Student();
};

#endif //CPP_STUDENT_H
