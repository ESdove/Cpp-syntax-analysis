#include <iostream>
using namespace std;

int func() { return 8; }

int myAge()
{
	cout << "myAge()" << endl;
	return 10;
}
int myHeight()
{
	cout << "myHeight()" << endl;
	return 10;
}


//struct Person {
//	int m_age;
//	int m_height;
//
//	/*Person(int age, int height) {
//		m_age = age;
//		m_height = height;
//	}*/
//
//	// 语法糖
//	Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
//};

struct Person
{
	int m_age;
	int m_height;
	Person(int age = 0, int height = 0);
};

Person::Person(int age, int height) :m_age(age), m_height(height)
{

}

int main()
{
	/*
	push        2
	push        1
	call        009910EB
	*/

	/*
	test(1, 2);
	push        2
	push        1
	call        00CC10EB
	*/

	/*Person person1;
	Person person2(17);
	Person person(18, 180);

	cout << person.m_age << endl;
	cout << person.m_height << endl;*/

	getchar();
	return 0;
}

