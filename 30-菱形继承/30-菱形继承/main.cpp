#include <iostream>
using namespace std;

// 没有使用虚继承（92）：10 * 2 + 3 = 23
// 使用虚继承（60）：10 + 3 + 2 = 15
struct Person
{
	int m_age = 1;
	/*int m_age1 = 1;
	int m_age2 = 1;
	int m_age3 = 1;
	int m_age4 = 1;
	int m_age5 = 1;
	int m_age6 = 1;
	int m_age7 = 1;
	int m_age8 = 1;
	int m_age9 = 1;*/
};

struct Student : virtual Person
{
	int m_score = 2;
};

struct Worker : virtual Person
{
	int m_salary = 3;
};

struct Undergraduate : Student, Worker
{
	int m_grade = 4;
};

int main()
{
	Undergraduate ug;
	ug.m_age = 10;

	cout << sizeof(Undergraduate) << endl;

	getchar();
	return 0;
}