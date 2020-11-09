#include <iostream>
using namespace std;

struct Date
{
	int year;
	int month;
	int day;
};

void test()
{
	//引用数组
	/*int age = 10;
	int &ref = age;*/

	/*Date d = {2011, 1, 5};

	Date &ref = d;
	ref.day = 2014;*/

	//引用指针
	/*int age = 10;
	int *p = &age;
	int *&ref = p;
	*ref = 30;
	int height = 30;
	ref = &height;*/

	//引用数组
	/*int array[] = {1, 2, 3};
	int (&ref)[3] = array;*/

	/*
	int *p;
	// 指针数组，数组里面可以存放3个int *
	int *arr1[3] = {p, p, p};
	// 用于指向数组的指针
	int (*arr2)[3];
	*/
}

void test1()
{
	int height = 20;
	int age = 10;

	// ref1不能修改指向，但是可以通过ref1间接修改所指向的变量
	int & const ref1 = age;
	ref1 = 30;

	// ref2不能修改指向，不可以通过ref2间接修改所指向的变量
	int const &ref2 = age;
	// ref2 = 40;

	// p1不能修改指向，可以利用p1间接修改所指向的变量
	int * const p1 = &age;
	// p1 = &height;
	*p1 = 30;

	// p2可以修改指向，不可以利用p2间接修改所指向的变量
	int const *p2 = &age;
	p2 = &height;
	// *p2 = 30;

	/*int age = 10;
	const int &ref = age;
	const int *p = &age;
	ref = 30;
	*p = 30;

	cout << ref << endl;
	cout << *p << endl;*/
}

int func()
{
	return 8;
}

int sum(int &v1, int &v2)
{
	cout << "sum(int &v1, int &v2)" << endl;
	return v1 + v2;
}

int sum(const int &v1, const int &v2)
{
	cout << "sum(const int &v1, const int &v2)" << endl;
	return v1 + v2;
}

void test2()
{
	// 非const实参
	int a = 10;
	int b = 20;
	sum(a, b);

	// const实参
	const int c = 10;
	const int d = 20;
	sum(c, d);

	sum(10, 20);
}

// 不同编程语言转成的汇编是一样的么？
// Java、C++、OC、Swift写代码  --> 汇编\机器码（取决于CPU架构）
// X86 ARM
int main()
{

	/*int age = 10;
	const long &ref = age;
	age = 30;

	cout << ref << endl;*/

	// 数组名arr其实是数组的地址，也是数组首元素的地址
	// 数组名arr可以看做是指向数组首元素的指针（int *）
	int arr[] = { 1, 2, 3 };
	// int (&ref)[3] = arr;
	int * const &ref = arr;

	// int age = 10;
	// const double &ref = age;

	//int a = 1;
	//int b = 2;
	//// const int &ref = 30;
	//// const int &ref = a + b;
	//const int &ref = func();

	getchar();
	return 0;
}