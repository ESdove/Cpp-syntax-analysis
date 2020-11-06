#include <iostream>
using namespace std;

/*
什么时候使用内联函数？
1.函数代码体积不大
2.频繁调用的函数
*/

inline void func() {
	cout << "func()" << endl;
}

inline int sum(int v1, int v2) {
	return v1 + v2;
}

inline void run() {
	run();
}

void test() {
	run();
	func();

	int c = sum(10, 20);
	cout << c << endl;
}

// #define add(v) v + v

inline int add(int v) {
	return v + v;
}

// 代价
int main() {
	/*int a = 10;
	int c = add(++a);

	cout << c << endl;*/

	int a = 1;
	int b = 2;

	(a > b ? a : b) = 4;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	getchar();
	return 0;
}