#include <iostream>
using namespace std;

//class Person {
//	// 成员变量（属性）
//	int age;
//
//	// 成员函数（方法）
//	void run() {
//		cout << "Person::run()" << endl;
//	}
//};

// 语法糖层面、概念层面
// class
struct Person
{
	// 成员变量（属性）
	int m_age;

	// 成员函数（方法）
	void run()
	{
		cout << "Person::run() - " << m_age << endl;
	}
};

void test()
{
	// Java\JS
	// Person person = new Person();

	// OC
	// Person *person = [Person new];

	// 利用类创建对象
	Person person;
	person.m_age = 20;
	person.run();

	Person *p = &person;
	p->m_age = 40;
	p->run();

	Person person1;
	person1.m_age = 10;

	Person person2;
	person2.m_age = 20;

	Person person3;
	person3.m_age = 30;
}

class Car
{
public:
	int m_price;

	void run()
	{
		cout << "Car::run() " << m_price << endl;
	}
};

int main()
{
	// mov         dword ptr [ebp-8],0Ah
	// mov         dword ptr [ebp-8],0Ah
	Car car;
	car.m_price = 10;
	car.run(); // call 函数地址


	Car car2;
	car2.m_price = 20;
	car2.run(); // call 函数地址


	Car car3;
	car3.m_price = 30;
	car3.run(); // call 函数地址

	getchar();
	return 0;
}