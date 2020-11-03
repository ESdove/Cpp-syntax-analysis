#include <iostream>
using namespace std;

//C++允许函数设置默认参数，在调用时可以根据情况省略实参。规则如下：
//默认参数只能按照从右到左的顺序
//如果函数同时有声明、实现，默认参数只能放在函数声明中
//默认参数的值可以是常量、全局符号（全局变量、函数名）
//如果函数的参数经常是同一个值，可以考虑使用默认参数



//int age = 20;
//
//int sum(int v1, int v2 = 20) {
//	return v1 + v2;
//}

//void test(int a) {
//	cout << "test(int) - " << a << endl;
//}
// 
//void func(int v1, void(*p)(int) = test) {
//	p(v1);
//}

int sum(int v1 = 3, int v2 = 4) {
	return v1 + v2;
}

int main() {

	sum(1);
	sum(1, 4);
	sum(2, 4);
	

	/*sum(1);
	sum(2);
	sum(3);
	sum(4);
	sum(5);
	sum(6, 15);
	sum(7);*/

	/*func(30);
	func(20, test);*/

	/*void(*p)(int) = test;
	p(10);*/

	//cout << sum() << endl; // 11
	//cout << sum(10) << endl; // 16
	//cout << sum(10, 20) << endl; // 30

	getchar();
	return 0;
}

//int sum(int v1, int v2) {
//	return v1 + v2;
//}
