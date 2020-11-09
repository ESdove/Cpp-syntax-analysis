#include <iostream>
using namespace std;

//int g_age = 10;
//
//void test() {
//	int a = 1;
//	int b = 2;
//	int c = a + b;
//
//	g_age = 1;
//}

void test() {
	int *p = (int *)malloc(4);
	*p = 10;

	/*char *p = (char *) malloc(4);
	p[0] = 10;
	p[1] = 11;
	p[2] = 12;
	p[3] = 13;*/
	/*
	*p = 10;
	*(p + 1) = 11;
	*(p + 2) = 12;
	*(p + 3) = 13;
	*/

	/*free(p);*/
}

void test2() {
	/*int *p = new int;
	*p = 10;

	delete p;*/

	/*char *p = new char;
	*p = 10;

	delete p;*/

	char *p = new char[4];

	delete[] p;
}

void test3() {
	// int *p = (int *) malloc(4);
	// *p = 0;

	int size = sizeof(int) * 10;
	int *p = (int *)malloc(size);
	// memory set
	memset(p, 0, size);

	// 从p地址开始的连续4个字节中的每一个字节都设置为1
	// memset(p, 1, 4);

	// 将4个字节设置为1
	// 00000000 00000000 00000000 00000001

	// 将4个字节中的每一个字节都设置为1
	// 00000001 00000001 00000001 00000001
}

void test4() {
	int *p0 = new int;
	int *p1 = new int();
	int *p2 = new int(5);

	cout << *p0 << endl;
	cout << *p1 << endl;
	cout << *p2 << endl;
}

int main() {

	test4();

	getchar();
	return 0;
}