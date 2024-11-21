#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    void setName(const string& personName) {
        name = personName;
    }

    string getName() const {
        return name;
    }

    void setAge(int personAge) {
        age = personAge;
    }

    int getAge() const {
        return age;
    }

    virtual void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
private:
    int employeeID;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    void setStudentID(int id) {
        studentID = id;
    }

    int getStudentID() const {
        return studentID;
    }

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

int main() {
    Employee employee;
    Student student;

    employee.setName("Alice");
    employee.setAge(30);
    employee.setEmployeeID(101);
    cout << "Employee Details:" << endl;
    employee.displayInfo();

    student.setName("Bob");
    student.setAge(20);
    student.setStudentID(202);
    cout << "\nStudent Details:" << endl;
    student.displayInfo();

    return 0;
}

