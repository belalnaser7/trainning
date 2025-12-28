#pragma once
#include <iostream>
#include "person.h"
using namespace std;
/* ================== Student ================== */
class Student : public Person {
public:
    Student(string name) : Person(name) {}
};