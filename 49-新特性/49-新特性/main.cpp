#include <iostream>
using namespace std;

void func(int v)
{
	cout << "func(int) - " << v << endl;
}

//void func(int *v) {
//	cout << "func(int *) - " << v << endl;
//}
//
//void test() {
//	func(NULL);
//	func(nullptr);
//}

//int add(int v1, int v2) {
//	return v1 + v2;
//}
//
//int sub(int v1, int v2) {
//	return v1 - v2;
//}
//
//int multiple(int v1, int v2) {
//	return v1 * v2;
//}
//
//int divide(int v1, int v2) {
//	return v1 / v2;
//}

//int exec(int v1, int v2, int (*func)(int, int)) {
//	return func(v1, v2);
//}

int age = 10;

//void * test() {
//	int a = 10;
//
//	return [] {
//		cout << "func()------" << age << endl;
//	};
//}

int main()
{
	// auto p = test();
	// p();

	/*auto func = [&a] {
		a++;
	};*/

	/*int a = 10;

	auto func = [a] () mutable {
		a++;
		cout << "lambda = " << a << endl;
	};
	func();

	cout << a << endl; */// 10;

	// 默认都是值捕获
	/*auto func = [a] {
		cout << a << endl;
	};*/

	// 地址捕获
	/*auto func = [&a] {
		cout << a << endl;
	};

	a = 20;

	func();*/

	/*cout << exec(20, 10, [] (int v1, int v2) { return v1 + v2; }) << endl;
	cout << exec(20, 10, [] (int v1, int v2) { return v1 - v2; }) << endl;
	cout << exec(20, 10, [] (int v1, int v2) { return v1 * v2; }) << endl;
	cout << exec(20, 10, [] (int v1, int v2) { return v1 / v2; }) << endl;*/

	/*void (*p)() = [] {
	   cout << "func()------" << endl;
	};*/

	/*auto p = [] {
	   cout << "func()------" << endl;
	};
	p();
	p();
	p();*/

	/*auto p = [] (int a, int b) {
		return a + b;
	};
	p(10, 20);*/
	// cout << p(10, 20) << endl;

	getchar();
	return 0;
}