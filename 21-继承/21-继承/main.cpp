#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//	void run() { }
//};
//
//struct Student : Person {
//	int m_score;
//	void study() { }
//};
//
//struct Worker : Person {
//	int m_salary;
//	void work() { }
//};

// 基类：最基本的类。其他所有的类最终都会继承自它。类的老祖宗 

struct Person
{

};

struct Student : Person
{
	int m_no;
};

struct GoodStudent : Student
{
	int m_money;
};

int main()
{

	cout << sizeof(GoodStudent) << endl;

	//GoodStudent gs; // 12
	//gs.m_no = 2;
	//gs.m_money = 3;

	//GoodStudent gs2; // 12
	//gs2.m_no = 2;

	getchar();
	return 0;
}