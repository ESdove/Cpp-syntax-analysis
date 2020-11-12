#include <iostream>
using namespace std;

/*
很多教程都说：编译器会为每一个类都生成空的无参的构造函数
*/

//class Person {
//public:
//	int m_age = 0;
//};
//
//class Student : public Person {
//public:
//
//};


//class Car {
//public:
//	int m_price = 0;
//};
//
//class Person {
//public:
//	Car car;
//};

class Student
{
public:
	int m_price;
	void run()
	{

	}
};

int main()
{

	Student student;
	student.run();

	getchar();
	return 0;
}