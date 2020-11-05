
#include <iostream>
using namespace std;

/*
	第三方框架\库：可能是用C语言写的开源库
*/


#include "other.h"
#include "math.h"
#include "test.h"

int main() {

	cout << sum(10, 20) << endl;
	cout << delta(30, 20) << endl;
	cout << divide(30, 3) << endl;

	getchar();
	return 0;
}


//extern "C" void func() {
//
//}
//
//extern "C" void func(int v) {
//
//}

//extern "C" {
//	void func() {
//
//	}
//
//	void func(int v) {
//
//	}
//}

//extern "C" void func();
//extern "C" void func(int v);

//extern "C" {
//	void func();
//	void func(int v);
//}

//void func() {
//	cout << "func()" << endl;
//}
//
//void func(int v) {
//	cout << "func(int v)" << endl;
//}