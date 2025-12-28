#pragma once
#include <iostream>

using namespace std;

/* ================== Person ================== */
class Person {
protected:
    string name;

public:
    Person(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }
};