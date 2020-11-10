#include <iostream>
using namespace std;

struct Car
{
	int m_price;

	Car()
	{
		m_price = 0;
		cout << "Car::Car()" << endl;
	}

	~Car()
	{
		cout << "Car::~Car()" << endl;
	}
};

struct Person
{
private:
	int m_age;
	Car *m_car;
public:
	// 用来做初始化的工作
	Person()
	{
		m_age = 0;
		m_car = new Car();

		cout << "Person::Person()" << endl;
	}

	// 用来做内存清理的工作
	~Person()
	{
		delete m_car;

		cout << "Person::~Person()" << endl;
	}
};

int main()
{

	// 内存泄露：该释放的内存并没有得到释放
	/*{
		Person person;
	}*/

	int age = 20;
	int *p = &age;

	getchar();
	return 0;
}