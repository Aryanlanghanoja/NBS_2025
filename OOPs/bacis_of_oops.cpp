#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
        cout << "Person Constructor - Parent" << endl;
    }

    Person(string name, int age) : name(name), age(age)
    {
        cout << "Values are assigned Successfully. From Person (Parent)" << endl;
    };
    // {
    //     this->name = name;
    //     this->age = age;
    // }

    ~Person()
    {
        cout << "Person Destructor - Parent" << endl;
    }
};

class Student : public Person
{
public:
    int rollNo;

    Student()
    {
        cout << "Student Constructor - Child" << endl;
    }

    Student(string name, int age, int rollNo) : Person(name, age), rollNo(rollNo)
    {
        cout << "Values are assigned Successfully. From Student (Child)" << endl;
    };

    ~Student()
    {
        cout << "Student Destructor - Child" << endl;
    }
};

int main()
{
    Student s1("Aryan Langhanoja", 20, 30);
    return 0;
}