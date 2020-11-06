#include <iostream>
using namespace std;

//CR宏测试,与主题const无关，顺手写的
#define _CR(Record,TYPE,Field) ((TYPE *)((char *)(Record) - (char *)&((TYPE *)0)->Field))

struct Date
{
	int year;
	int month;
	int day;
};

int main() {
	// const int age = 20;

	/*const Date d = {2011, 2, 5};
	Date d2 = {2013, 4, 8};
	d = d2;
	d.year = 2015;*/

	Date d1 = {2011, 2, 5};
	/*Date d2 = {2013, 4, 8};

	const Date *p = &d1;
	p->year = 2015;
	(*p).month = 5;
	*p = d2;

	cout << d1.year << endl;*/
	
	cout << &d1 << endl;

	cout <<(Date*)((char *)(&(d1.day))) <<endl;
	//Date *aspp = (Date*)((char *)(&(d1.day)));

	//求偏移量，空指针访问会引发异常
	//cout << (char *)&((Date *)0)->day<< endl;
	
	//结构体成员地址减去偏移量即可得到结构体首地址
	cout<<_CR(&(d1.day), Date, day)<<endl;

	//cout << *p << endl;
	int age = 10;
	int height = 30;

	// p1不是常量，*p1是常量
	const int *p1 = &age;
	// p2不是常量，*p2是常量
	int const *p2 = &age;
	// p3是常量，*p3不是常量
	int * const p3 = &age;
	// p4是常量，*p4也是常量
	const int * const p4 = &age;
	// p5是常量，*p5也是常量
	int const * const p5 = &age;

	//*p4 = 20; // age = 20;
	//p4 = &height;
	//*p4 = 40; // height = 40;

	getchar();
	return 0;
}