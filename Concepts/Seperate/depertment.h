#pragma once
#include <iostream>
#include <vector>
#include "professor.h"
using namespace std;




/* ================== Department ================== */
class Department {
    string depName;
    vector<Professor> professors;  // composition
    vector<string> courses; 

public:
    Department(string name) {
        depName = name;
    }

    void addProfessor(string name) {
        professors.push_back(Professor(name));
    }

    void addCourse(string course) {
        courses.push_back(course);
    }

    void display() {
        cout << "\nDepartment: " << depName << endl;

        cout << "Professors:\n";
        for (auto& p : professors) {
            cout << "- " << p.getName() << endl;
        }

        cout << "Courses:\n";
        for (auto& c : courses) {
            cout << "- " << c << endl;
        }
    }
};
