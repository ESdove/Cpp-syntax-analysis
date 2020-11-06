#include <iostream>
using namespace std;

void test() {
	int age = 10;

	int height = 20;

	// 定义了一个age的引用，ref相当于是age的别名
	int &ref = age;
	int &ref1 = ref;
	int &ref2 = ref1;

	ref += 10;
	ref1 += 10;
	ref2 += 10;

	cout << age << endl;
}

//void swap(int *v1, int *v2) {
//	int tmp = *v1;
//	*v1 = *v2;
//	*v2 = tmp;
//}

/*
后面还可以再用别的值调换吗？不是说引用“从一而终”吗
*/

void swap(int &v1, int &v2) {
	int tmp = v1;
	v1 = v2;
	v2 = tmp;
}

void test2() {
	int a = 10;
	int b = 20;
	// swap(&a, &b);
	swap(a, b);
	cout << "a = " << a << ", b = " << b << endl;

	int c = 2;
	int d = 3;
	swap(c, d);
	cout << "c = " << c << ", d = " << d << endl;
}

//struct Student {
//	int &age;
//};

// x86: 32bit
// x64: 64bit
int main() {
	// cout << sizeof(Student) << endl;

	int age = 10;

	// *p就是age的别名
	int *p = &age;
	*p = 30;

	// ref就是age的别名
	int &ref = age;
	ref = 30;

	int a = 3;
	int b = a + 1;

	getchar();
	return 0;
}