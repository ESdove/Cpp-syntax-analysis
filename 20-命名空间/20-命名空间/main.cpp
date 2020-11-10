#include <iostream>
#include "Person.h"
using namespace std;
//package com.mj.bb;
//
//Person person1;
//com.mj.aa.Person person2;

//namespace MJ {
//	int g_age;
//
//	void func() {
//	}
//
//	class Person {
//		int m_age;
//		int m_money;
//	};
//}

//namespace MJ {
//	int g_age;
//}
//
//namespace FX {
//	int g_age;
//}

void func()
{
	cout << "func()" << endl;
}

namespace MJ
{
	void func()
	{
		cout << "MJ::func()" << endl;
	}
}

int main()
{
	using namespace MJ;
	/*using namespace MJ;
	MJ::func();
	::func();
	::MJ::func();

	Person person;*/

	/*using namespace MJ;
	using namespace FX;

	FX::g_age = 10;*/

	// using MJ::g_age;
	// g_age = 10;

	/*using namespace MJ;

	g_age = 10;
	func();
	Person person;*/

	// MJ::g_age = 10;
	// MJ::func();
	// MJ::Person person;

	// cout << sizeof(person) << endl;

	getchar();
	return 0;
}


