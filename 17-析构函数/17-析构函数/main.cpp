#include <iostream>
using namespace std;

class Person
{
	int m_age;
public:
	// 新的Person对象诞生的象征
	Person() {
		cout << "Person::Person()" << endl;
	}

	// 一个Person对象销毁的象征
	~Person() {
		cout << "~Person()" << endl;
	}
};

void test() {
	Person person;
}

int main() {

	Person *p = new Person;

	// 堆空间的地址
	cout << p << endl;
	// 栈空间的地址
	cout << &p << endl;

	delete p;


	getchar();
	return 0;
}