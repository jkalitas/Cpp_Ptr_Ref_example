/**
 * @file Person.h
 * @author Jose Silva
 * @brief Person definition class
 */


#ifndef CPP_PERSON_H
#include <string>
#define CPP_PERSON_H

/**
 * Person class definition.
 */
class Person {

 private:
  /**
   * Person's name
   */
  std::string name;
  /**
   * Person's age
   */
  int age;

 public:
  /**
   * Generic constructor
   */
  Person();
  /**
   * Person's complete constructor
   */
  Person(const std::string &name, int age);
  /**
   * Function to display person's information
   */
  virtual void display() const;
  /**
   * Generic destructor
   */
  virtual ~Person();

};

#endif //CPP_PERSON_H
