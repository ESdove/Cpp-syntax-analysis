#include <iostream>
using namespace std;

/*
浅拷贝（shallow copy）：指针类型的变量只会拷贝地址值
深拷贝（deep copy）：将指针指向的内容拷贝到新的存储空间
*/

//class Car {
//	int m_price;
//	char *m_name;
//	void copy(const char *name = NULL) {
//		if (name == NULL) return;
//
//		// 申请新的堆空间
//		m_name = new char[strlen(name) + 1] {};
//		// 拷贝字符串数据到新的堆空间
//		strcpy(m_name, name);
//	}
//public:
//	Car(int price = 0, const char *name = NULL) :m_price(price) {
//		copy(name);
//	}
//
//	Car(const Car &car) :m_price(car.m_price) {
//		copy(car.m_name);
//	}
//
//	~Car() {
//		if (m_name == NULL) return;
//
//		delete[] m_name;
//		m_name = NULL;
//	}
//
//	void display() {
//		cout << "price is " << m_price << ", name is " << m_name << endl;
//	}
//};

class Car
{
	int m_price;
	char *m_name;
};

class Person
{
	int m_age;
	Car m_car;
};

int main()
{
	/*Person person1;

	Person person2 = person1;*/


	/*Car car1(100, "bmw");
	Car car2 = car1;
	car2.display();*/

	// const char *name = "bmw";

	// char name[] = {'b', 'm', 'w', '\0'};

	// char *name = new char[4] {'b', 'm', 'w', '\0'};

	/*Car *car = new Car(100, "bmw");
	car->display();*/

	// delete[] name;




	getchar();
	return 0;
}