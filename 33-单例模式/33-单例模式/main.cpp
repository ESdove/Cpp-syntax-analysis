#include <iostream>
using namespace std;

/*
单例模式：设计模式的一种，保证某个类永远只创建一个对象
1.构造函数\析构函数私有化
2.定义一个私有的static成员变量指向唯一的那个单例对象
3.提供一个公共的访问单例对象的接口
*/

class Rocket
{
private:
	static Rocket *ms_rocket;
	Rocket() {}
	Rocket(const Rocket &rocket) {}
	~Rocket() {}
	void operator=(const Rocket &rocket) {}
public:
	static Rocket *sharedRocket()
	{
		// 这里要考虑多线程安全
		if (ms_rocket == NULL)
		{
			ms_rocket = new Rocket();
		}
		return ms_rocket;
	}

	static void deleteRocket()
	{
		// 这里要考虑多线程安全
		if (ms_rocket != NULL)
		{
			delete ms_rocket;
			ms_rocket = NULL;
		}
	}
};

Rocket *Rocket::ms_rocket = NULL;

int main()
{
	Rocket *p1 = Rocket::sharedRocket();
	Rocket *p2 = Rocket::sharedRocket();

	//int *p = new int;
	//*p = 10;
	//delete p; // 回收堆空间（4个字节）

	//int *p2 = new int;
	//cout << *p2 << endl; 

	// 回收堆空间内存：这块堆空间内存可以重新被别人使用

	// Rocket *p1 = Rocket::sharedRocket();
	// Rocket *p2 = p1->sharedRocket();

	// delete p1;
	
	/*Rocket *p2 = Rocket::sharedRocket();
	Rocket *p3 = Rocket::sharedRocket();
	Rocket *p4 = Rocket::sharedRocket();

	Rocket::deleteRocket();

	Rocket::sharedRocket();
	Rocket::sharedRocket();
	Rocket::sharedRocket();
	Rocket::sharedRocket();
	Rocket::sharedRocket();
	Rocket::sharedRocket();

	cout << p1 << endl;
	cout << p2 << endl;
	cout << p3 << endl;
	cout << p4 << endl;*/

	/*Rocket rocket1;
	Rocket *p = new Rocket();*/
	/*Rocket rocket1;
	Rocket rocket2;
	Rocket rocket3;
	Rocket rocket4;

	Rocket *p = new Rocket();*/

	getchar();
	return 0;
}