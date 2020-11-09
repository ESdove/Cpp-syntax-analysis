#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//
//	/*void run(Person *person) {
//		cout << "Person::run() - " << person->m_age << endl;
//	}*/
//
//	void run() {
//		// this指针存储着函数调用者的地址
//		// this指向了函数调用者
//
//		// cout << "Person::run() - " << this->m_age << endl;
//
//		// this->m_age = 3;
//		m_age = 3;
//		/*
//		// ebp-8是this指针的地址
//		mov         dword ptr [ebp-8],ecx
//		mov         eax,dword ptr [ebp-8]
//		mov         dword ptr [eax],3
//		*/
//	}
//};

void func()
{

}

struct Person
{
	int m_id;
	int m_age;
	int m_height;

	void display()
	{
		// 中断：interrupt
		// cc -> int3 ：起到断点的作用
		// int3int3int3
		// eax == &person.m_age == &person + 4
		// mov eax, dword ptr [this]
		// [eax]、[eax + 4]、[eax + 8]
		// [&person + 4]、[&person + 4 + 4]、[&person + 4 + 8]
		cout << "id = " << m_id
			<< ", age = " << m_age
			<< ", height = " << m_height << endl;
	}
};

void test()
{
	Person person;
	person.m_id = 10;
	person.m_age = 20;
	person.m_height = 30;
	person.display();

	Person *p = &person;
	p->m_id = 10;
	p->m_age = 10;
	p->m_height = 10;
	p->display();
}

// 调用函数的时候，需要分配额外的存储空间来存储函数内部的局部变量
void test5()
{
	int a = 10;
	a += 20;
	int b = 20;
	int c = 30;
}

int main()
{
	test5();

	Person person;
	person.m_id = 10;
	person.m_age = 20;
	person.m_height = 30;

	Person *p = (Person *)&person.m_age;
	// eax == &person.m_age == &person + 4
	// mov eax, dword ptr [p]
	// mov dword ptr [eax + 0], 40
	// mov dword ptr [&person + 4 + 0], 40
	p->m_id = 40;
	// mov dword ptr [eax + 4], 50
	// mov dword ptr [&person + 4 + 4], 50
	p->m_age = 50;

	// 将person对象的地址传递给display函数的this
	// person.display();

	// 会将指针p里面存储的地址传递给display函数的this
	// 将&person.m_age传递给display函数的this
	p->display();

	cout << 0xCC << endl;



	getchar();
	return 0;
}