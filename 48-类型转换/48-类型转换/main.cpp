#include <iostream>
using namespace std;

class Person
{
	virtual void run() {}
};

class Student : public Person
{

};

class Car
{

};

void test_const()
{
	const Person *p1 = new Person();
	Person *p2 = const_cast<Person *>(p1);
	Person *p3 = (Person *)p1;
}

void test_dynamic()
{
	Person *p1 = new Person();
	Person *p2 = new Student();

	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

	Car *c1 = (Car *)p1;
	Car *c2 = dynamic_cast<Car *>(p2);

	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;


	// Student *stu1 = dynamic_cast<Student *>(p1); // 不安全
	// Student *stu2 = dynamic_cast<Student *>(p2); // 安全

	//Student *stu1 = (Student *) p1; // 不安全
	//Student *stu2 = (Student *) p2; // 安全

	// cout << "stu1 = " << stu1 << endl;
	// cout << "stu2 = " << stu2 << endl;
}

void test_static()
{
	Person *p1 = new Person();
	const Person *p2 = p1;

	int a = 10;
	double d = static_cast<double>(a);

	// Car *c1 = dynamic_cast<Car *>(p1);
	// Car *c2 = static_cast<Car *>(p1);
}

int main()
{

	// 0A 00 00 00
	//int a = 10;
	//// 00 00 00 00 00 00 24 40
	//// double d = a;
	//// 0A 00 00 00 cc cc cc cc
	//double d = reinterpret_cast<double&>(a);

	//cout << "a = " << a << endl;
	//cout << "d = " << d << endl;

	// int a = 10;
	int *p = reinterpret_cast<int *>(0x100);
	int a = reinterpret_cast<int>(p);

	getchar();
	return 0;
}