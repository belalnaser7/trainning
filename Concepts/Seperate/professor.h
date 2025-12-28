#pragma once
#include <iostream>
#include "person.h"
using namespace std;

/* ================== Professor ================== */
class Professor : public Person {
public:
    Professor(string name) : Person(name) {}
};