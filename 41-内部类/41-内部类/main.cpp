#include <iostream>
using namespace std;

class Person
{
private:
	int m_age;

public:
	class Car
	{
	private:
		int m_price;
	};
};

int main()
{
	// Person::Car car1;
	// Person::Car car2;

	Person person;

	getchar();
	return 0;
}