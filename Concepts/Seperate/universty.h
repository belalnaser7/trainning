#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include "professor.h"
#include "depertment.h"
using namespace std;




/* ================== University ================== */
class University {
    string uniName;
    vector<Student> students;
    vector<Department> departments;

public:
    University(string name) {
        uniName = name;
    }

    void addStudent(string name) {
        students.push_back(Student(name));
    }

    void addDepartment(string name) {
        departments.push_back(Department(name));
    }

    Department& getDepartment(int index) {
        return departments[index];
    }

    void display() {
        cout << "University: " << uniName << endl;

        cout << "\nStudents:\n";
        for (auto& s : students) {
            cout << "- " << s.getName() << endl;
        }

        for (auto& d : departments) {
            d.display();
        }
    }
};
