#include <iostream>
using namespace std;

struct Person
{
private:
	int m_age;
public:
	void setAge(int age) {
		if (age <= 0)
		{
			m_age = 1;
		}
		else
		{
			m_age = age;
		}
	}

	int getAge() {
		return m_age;
	}
};

int main() {
	Person person;
	person.setAge(-4);

	cout << person.getAge() << endl;
	// person.m_age = -4;

	getchar();
	return 0;
}