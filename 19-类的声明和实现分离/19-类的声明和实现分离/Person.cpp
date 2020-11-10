#include "Person.h"

void Person::setAge(int age)
{
	m_age = age;
}

int Person::getAge()
{
	return m_age;
}

Person::Person()
{
	m_age = 0;
}

Person::~Person()
{

}