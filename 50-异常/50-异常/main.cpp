#include <iostream>
using namespace std;

void test1()
{
	cout << 1 << endl;

	for (int i = 0; i < 99999; i++)
	{
		// 这句代码可能会产生异常（抛出异常）
		try
		{
			int *p = new int[9999999];
			cout << 2 << endl;
			/*
			....
			....
			....
			*/
		}
		catch (...)
		{
			cout << "产生异常了：内存不够用" << endl;
			break;
		}
	}

	cout << 3 << endl;
}

int divide1(int v1, int v2) throw(int)
{
	if (v2 == 0)
	{
		// 抛出异常
		throw 666;
	}
	return v1 / v2;
}

void test2()
{
	cout << 1 << endl;

	try
	{
		int a = 10;
		int b = 0;
		cout << divide1(a, b) << endl;
	}
	catch (int exception)
	{
		cout << "产生异常了(int):" << exception << endl;
	}
	catch (const char *exception)
	{
		cout << "产生异常了(const char *):" << exception << endl;
	}

	cout << 2 << endl;
}

void func1()
{
	cout << "func1-begin" << endl;

	throw 666;

	cout << "func1-end" << endl;
}

void func2()
{
	cout << "func2-begin" << endl;

	func1();

	cout << "func2-end" << endl;
}

void test3()
{
	cout << "main-begin" << endl;

	try
	{
		func2();
	}
	catch (int exception)
	{
		cout << "产生异常了(int):" << exception << endl;
	}

	cout << "main-end" << endl;
}

// 所有异常的基类
class Exception
{
public:
	virtual const char *what() const = 0;
	virtual int code() const = 0;
};

class DivideException : public Exception
{
public:
	const char *what() const
	{
		return "不能除以0";
	}

	int code() const
	{
		return 202;
	}
};

class AddException : public Exception
{
public:
	const char *what() const
	{
		return "加法有问题";
	}

	int code() const
	{
		return 201;
	}
};

int divide(int v1, int v2)
{
	if (v2 == 0)
	{
		// 抛出异常
		throw DivideException();
	}
	return v1 / v2;
}

void test4()
{
	cout << 1 << endl;

	try
	{
		int a = 10;
		int b = 0;
		cout << divide(a, b) << endl;
	}
	catch (const Exception &exception)
	{
		cout << "产生异常了：" << exception.what() << endl;
	}

	/*try {
		int a = 10;
		int b = 0;
		cout << divide(a, b) << endl;
	} catch (const DivideException &exception) {
		cout << "产生异常了（DivideException）：" << exception.what() << endl;
	} catch (const AddException &exception) {
		cout << "产生异常了（AddException）" << endl;
	}*/

	cout << 2 << endl;
}

int main()
{

	cout << 1 << endl;

	for (int i = 0; i < 99999; i++)
	{
		try
		{
			int *p = new int[9999999];
		}
		catch (const exception &exception)
		{
			cout << "产生异常了：内存不够用 - " << exception.what() << endl;
			break;
		}
	}

	cout << 3 << endl;

	getchar();
	return 0;
}