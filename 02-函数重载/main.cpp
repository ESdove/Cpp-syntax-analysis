#include <iostream>
using namespace std;

/*
	C语言不支持函数重载
	C++支持函数重载
*/

/*
===规则===
函数名相同
参数个数不同、参数类型不同、参数顺序不同

===注意===
返回值类型与函数重载无关
调用函数时，实参的隐式类型转换可能会产生二义性

===本质===
采用了name mangling或者叫name decoration技术
C++编译器默认会对符号名（比如函数名）进行改编、修饰，有些地方翻译为"命名倾轧"
重载时会生成多个不同的函数名，不同的编译器（MSVC、g++）有不同的生成规则
通过IDA打开【VS_Release_禁止优化】可以看到
*/

//int sum(int v1, int v2) {
//	return v1 + v2;
//}

//int sum(int v1, int v2, int v3) {
//	return v1 + v2 + v3;
//}

//void func(int v1, double v2) {
//	cout << "func(int v1, double v2)" << endl;
//}

//void func(double v1, int v2) {
//	cout << "func(double v1, int v2)" << endl;
//}


// 歧义，二义性
//int func() {
//	return 0;
//}

//double func() {
//	return 0;
//}

// display_v
void display()
{
	cout << "display()" << endl;
}

// display_i
void display(int a)
{
	cout << "display(int) - " << a << endl;
}

// display_l
void display(long a)
{
	cout << "display(long) - " << a << endl;
}

// display_d
void display(double a)
{
	cout << "display(double) - " << a << endl;
}

// Debug模式：很多调试信息，生成的可执行文件比较臃肿
// Release模式：去除调试信息，生成的可执行文件比较精简、高效

// 反汇编
// 逆向工程
int main()
{

	display();
	display(10);//去掉void display(int a)会产生二义性，10不知道会隐式转换成long还是double，保留则不会，直接找int
	display(10L);
	display(10.0);

	// 1010 1010 1111 0001 1010 1011
	// AA F1 AB 

	// func(10, 10.5);
	// func(10.5, 10);

	// cout << sum(10, 20) << endl;
	// cout << sum(10, 20, 30) << endl;

	getchar();
	return 0;
}