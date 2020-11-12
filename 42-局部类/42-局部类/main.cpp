#include <iostream>
using namespace std;

int g_age = 10;



void test()
{
	static int age = 10;

	// 局部类
	class Car
	{
	public:
		void run()
		{
			age = 20;
		}
	};

	Car car;
	car.run();
}




int main()
{


	getchar();
	return 0;
}