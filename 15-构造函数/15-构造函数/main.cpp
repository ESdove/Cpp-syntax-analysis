#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//	int m_money;
//
//	//Person() {
//	//	m_age = 0;
//	//	cout << "Person()" << endl;
//	//}
//
//	Person(int age, int money) {
//		m_age = age;
//		m_money = money;
//		cout << "Person(int age, int money)" << endl;
//	}
//
//	Person(int age) {
//		m_age = age;
//		cout << "Person(int age)" << endl;
//	}
//
//	void display() {
//		cout << "age is " << m_age << ", money is " << m_money << endl;
//	}
//};

void test() {
	/*Person person1(10, 20);
	person1.display();

	Person person2(20);
	person2.display();

	Person person3(30);
	person3.display();*/
}

//struct Person {
//	int m_age;
//
//	Person() {
//		cout << "Person::Person()" << endl;
//	}
//
//	void run() {
//		cout << "Person::run() - " << m_age << endl;
//	}
//};
//
//void test2() {
//	/*Person *p = new Person;
//
//	delete p;*/
//
//	Person *p = (Person *) malloc(sizeof(Person));
//	p->m_age = 10;
//	p->run();
//
//	free(p);
//}

struct Person
{
	int m_age;

	Person() {
		m_age = 0;
		cout << "Person()" << endl;
	}

	Person(int age) {
		m_age = age;
		cout << "Person(int age)" << endl;
	}
};

Person g_person0; // Person()
Person g_person1(); // 函数声明
Person g_person2(10); // Person(int)

int main() {

	Person person0; // Person()
	Person person1(); // 函数声明
	Person person2(20); // Person(int)

	Person *p0 = new Person; // Person()
	Person *p1 = new Person(); // Person()
	Person *p2 = new Person(30); // Person(int)

	/* 4个无参，3个有参，一共创建了7个Person对象 */

	getchar();
	return 0;
}