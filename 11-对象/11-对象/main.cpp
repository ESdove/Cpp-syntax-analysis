#include <iostream>
using namespace std;

struct Person
{
	int m_id;
	int m_age;
	int m_height;

	void display()
	{
		cout << "id = " << m_id
			<< ", age = " << m_age
			<< ", height = " << m_height << endl;
	}
};

// 全局区（数据段）
// Person person;

int main()
{

	// 这个person对象内存在栈空间
	Person person;
	person.m_id = 1;
	person.m_age = 2;
	person.m_height = 3;

	cout << "&person == " << &person << endl;
	cout << "&person.m_id == " << &person.m_id << endl;
	cout << "&person.m_age == " << &person.m_age << endl;
	cout << "&person.m_height == " << &person.m_height << endl;

	getchar();
	return 0;
}