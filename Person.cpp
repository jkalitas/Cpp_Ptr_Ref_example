/**
 * @file Peron.cpp
 * @author Jose Silva
 * @brief Implementation of Person definition
 */

#include "Person.h"
#include <iostream>

Person::Person() : name("John Doe"), age(0) {}
Person::Person(const std::string &name, int age) : name(name), age(age) {}

void Person::display() const{
  std::cout << "NAME:\t" << name << std::endl;
  std::cout << "AGE:\t" << age << std::endl;
}

Person::~Person(){
  std::cout << "Called Person destructor" << std::endl;
}