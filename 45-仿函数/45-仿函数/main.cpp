#include <iostream>
using namespace std;

//int sum(int a, int b) {
//	return a + b;
//}

class Sum
{
public:
	int m_age;
	int operator()(int a, int b)
	{
		if (m_age)
		{

		}
		return a + b;
	}

	void func()
	{
		m_age = 10;
	}
};

int main()
{

	Sum sum;
	sum.m_age = 10;
	// sum.func();
	cout << sum(10, 20) << endl;

	// cout << sum.operator()(10, 20) << endl;

	getchar();
	return 0;
}