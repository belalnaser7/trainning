#include <iostream>
#include <vector>
#include "person.h"
#include "student.h"
#include "professor.h"
#include "depertment.h"
#include "universty.h"
using namespace std;

/* ================== main ================== */
int main() {

    University uni("Cairo University");

    // Students
    uni.addStudent("Ahmed");
    uni.addStudent("Omar");

    // Departments
    uni.addDepartment("Computer Science");
    uni.addDepartment("Engineering");

    // Add data to departments
    uni.getDepartment(0).addProfessor("Dr. Ali");
    uni.getDepartment(0).addCourse("Data Structures");
    uni.getDepartment(0).addCourse("OOP");

    uni.getDepartment(1).addProfessor("Dr. Hassan");
    uni.getDepartment(1).addCourse("Mechanics");

    // Display everything
    uni.display();

    return 0;
}
