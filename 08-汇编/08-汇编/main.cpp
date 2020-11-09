#include <iostream>
using namespace std;

void test()
{

}

void func()
{
	int a = 1;
	int b = 2;
	int c = a + b;
}

int sum(int a, int b)
{
	return a + b;
}

int main()
{

	int age = 3;

	int &ref = age;
	ref = 5;

	getchar();
	return 0;
}