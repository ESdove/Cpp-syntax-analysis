#include <iostream>
using namespace std;

//class Person {
//	int m_age;
//public:
//	Person() {
//		cout << "Person()" << endl;
//	}
//	Person(int age) :m_age(age) {
//		cout << "Person(int)" << endl;
//	}
//	~Person() {
//		cout << "~Person()" << endl;
//	}
//	void run() {
//		cout << "run() - " << m_age << endl;
//	}
//};

template <typename T>
class SmartPointer
{
private:
	T *m_obj;
public:
	SmartPointer(T *obj) :m_obj(obj) {}
	~SmartPointer()
	{
		if (m_obj == nullptr) return;

		delete m_obj;
	}

	T *operator->()
	{
		return m_obj;
	}
};

//void test() {
//	/*Person *p = new Person(20);
//	p->run();*/
//
//	// 可以理解为：智能指针p指向了堆空间的Person对象
//	cout << 1 << endl;
//	{
//		auto_ptr<Person> p(new Person(20));
//		p->run();
//	}
//	cout << 2 << endl;
//
//	/*Person p(20);
//	p.run();*/
//}
//
//void test2() {
//	cout << 1 << endl;
//	{
//		SmartPointer<Person> p(new Person(20));
//		p->run();
//	}
//	cout << 2 << endl;
//}
//
//void test3() {
//	{
//		shared_ptr<Person> p4;
//		{
//			shared_ptr<Person> p1(new Person(10));
//			cout << p1.use_count() << endl; // 1
//
//			shared_ptr<Person> p3;
//			{
//				shared_ptr<Person> p2 = p1;
//				cout << p2.use_count() << endl; // 2
//
//				p3 = p2; // 3
//			} // 2
//			cout << p3.use_count() << endl; // 2
//
//			p4 = p3;
//			cout << p4.use_count() << endl; // 3
//		} // 1
//
//		cout << p4.use_count() << endl; // 1
//	}
//}

class Person;

class Car
{
public:
	weak_ptr<Person> m_person;
	Car()
	{
		cout << "Car()" << endl;
	}
	~Car()
	{
		cout << "~Car()" << endl;
	}
};

class Person
{
public:
	shared_ptr<Car> m_car;
	Person()
	{
		cout << "Person()" << endl;
	}
	~Person()
	{
		cout << "~Person()" << endl;
	}
};

int main()
{

	/*{
		shared_ptr<Person> person(new Person());
		shared_ptr<Car> car(new Car());

		person->m_car = car;
		car->m_person = person;
	}
*/

	unique_ptr<Person> p0;
	{
		unique_ptr<Person> p1(new Person());
		p0 = std::move(p1);
	}

	getchar();
	return 0;
}