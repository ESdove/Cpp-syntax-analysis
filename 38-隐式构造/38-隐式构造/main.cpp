#include <iostream>
using namespace std;

class Person
{
	int m_age;
public:
	Person()
	{
		cout << "Person() - " << this << endl;
	}
	Person(int age) :m_age(age)
	{
		cout << "Person(int) - " << this << endl;
	}
	Person(const Person &person)
	{
		cout << "Person(const Person &person) - " << this << endl;
	}
	~Person()
	{
		cout << "~Person() - " << this << endl;
	}
	void display()
	{
		cout << "display() - age is " << m_age << endl;
	}
};

void test1(Person person)
{

}

Person test2()
{
	return 40;
}

int main()
{
	test1(30);
	test2();

	/*Person p1;
	Person p2(10);
	Person p3 = p2;*/

	// Person p1 = 20;
	// Person p2(20);

	Person p1;
	p1 = 40;

	// Person p1 = 40;

	getchar();
	return 0;
}