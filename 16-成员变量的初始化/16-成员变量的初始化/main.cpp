#include <iostream>
using namespace std;

struct Person
{
	int m_age;

	Person() {
		memset(this, 0, sizeof(Person));
	}
};

// 全局区：成员变量初始化为0
Person g_person;

void test() {
	// 栈空间：没有初始化成员变量
	// Person person; 

	// 堆空间：没有初始化成员变量
	Person *p0 = new Person;
	// 堆空间：成员变量初始化为0
	Person *p1 = new Person();

	cout << g_person.m_age << endl;
	// cout << person.m_age << endl;
	cout << p0->m_age << endl;
	cout << p1->m_age << endl;
}

int main() {

	/*Person *p = new Person[3] {};

	cout << p[0].m_age << endl;*/

	getchar();
	return 0;
}