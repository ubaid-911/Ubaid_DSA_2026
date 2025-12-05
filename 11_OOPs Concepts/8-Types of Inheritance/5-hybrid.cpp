#include <iostream>
using namespace std;

// Parent Class 1
class Person {
public:
    void identity() {
        cout << "I am a person." << endl;
    }
};

// Child Class 1 (from Person)
class Student : public Person {
public:
    void study() {
        cout << "I am studying." << endl;
    }
};

// Child Class 2 (from Person)
class Teacher : public Person {
public:
    void teach() {
        cout << "I am teaching." << endl;
    }
};

// Hybrid Child (Multiple Inheritance from Student + Teacher)
class Monitor : public Student, public Teacher {
public:
    void duty() {
        cout << "I maintain discipline." << endl;
    }
};

int main() {
    Monitor m;

    m.Student::identity();   // From Person (via Student)
    m.Teacher::identity();   // From Person (via Teacher)

    m.study();               // From Student
    m.teach();               // From Teacher
    m.duty();                // From Monitor

    return 0;
}
