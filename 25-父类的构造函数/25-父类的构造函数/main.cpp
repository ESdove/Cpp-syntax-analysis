#include <iostream>
using namespace std;

//class Person {
//	int m_age;
//public:
//	Person(int age) :m_age(age) {}
//};
//
//class Student : Person {
//	int m_no;
//public:
//	Student(int age, int no) :m_no(no), Person(age) {}
//};


struct Person
{
	Person()
	{
		cout << "Person::Person()" << endl;
	}
	~Person()
	{
		cout << "Person::~Person()" << endl;
	}
};

struct Student : Person
{
	Student()
	{
		// call Person::Person
		cout << "Student::Student()" << endl;
	}
	~Student()
	{
		cout << "Student::~Student()" << endl;
		// call Person::~Person
	}
};

/*
Person::Person()
Student::Student()
Student::~Student()
Person::~Person()
*/

int main()
{

	{
		Student student;
	}

	// Student student(18, 34);

	getchar();
	return 0;
}