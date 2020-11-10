#include <iostream>
#include "Person.h"
using namespace std;

// .h
//class Person {
//private:
//	int m_age;
//public:
//	void setAge(int age);
//	int getAge();
//	Person();
//	~Person();
//};

// .cpp
//void Person::setAge(int age) {
//	m_age = age;
//}
//
//int Person::getAge() {
//	return m_age;
//}
//
//Person::Person() {
//	m_age = 0;
//}
//
//Person::~Person() {
//
//}

int main()
{
	Person person;
	person.setAge(10);

	cout << person.getAge() << endl;

	getchar();
	return 0;
}