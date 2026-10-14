#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    static int totalStudents;

public:
    Student(string name) : name(name)
    {
        totalStudents++;
    }

    void displayName()
    {
        cout << "Name : " << name << endl;
    }

    static int getTotalStudents()
    {
        return totalStudents;
    }
};

int Student::totalStudents = 0;

int main(int argc, char const *argv[])
{
    Student s1("Krish");
    Student s2("Rahul");
    Student s3("Aman");

    s1.displayName();
    s2.displayName();
    s3.displayName();

    cout << Student::getTotalStudents() << endl;
    return 0;
}
