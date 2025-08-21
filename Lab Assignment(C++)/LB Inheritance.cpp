#include <iostream>
using namespace std;

// Base class
class Person
{
  protected:
    string name;
    int age;

  public:
    void setPersonInfo(string n, int a)
    {
        name = n;
        age = a;
    }

    void displayPersonInfo()
    {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person
{
  private:
    string studentID;
    string course;

  public:
    void setStudentInfo(string id, string c)
    {
        studentID = id;
        course = c;
    }

    void displayStudentInfo()
    {
        cout << "\n--- Student Info ---" << endl;
        displayPersonInfo();
        cout << "Student ID: " << studentID << "\nCourse: " << course << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person
{
  private:
    string employeeID;
    string subject;

  public:
    void setTeacherInfo(string id, string s)
    {
        employeeID = id;
        subject = s;
    }

    void displayTeacherInfo()
    {
        cout << "\n--- Teacher Info ---" << endl;
        displayPersonInfo();
        cout << "Employee ID: " << employeeID << "\nSubject: " << subject << endl;
    }
};

// Main function
int main()
{
    // Create Student object
    Student s;
    s.setPersonInfo("Alice", 20);
    s.setStudentInfo("S123", "Computer Science");
    s.displayStudentInfo();

    // Create Teacher object
    Teacher t;
    t.setPersonInfo("Mr. Sharma", 45);
    t.setTeacherInfo("T456", "Mathematics");
    t.displayTeacherInfo();

    return 0;
}
