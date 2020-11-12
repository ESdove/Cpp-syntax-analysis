#include <iostream>
using namespace std;

class Car
{
public:
	Car()
	{
		cout << "Car() - " << this << endl;
	}

	Car(const Car &car)
	{
		cout << "Car(const Car &) - " << this << endl;
	}

	~Car()
	{
		cout << "~Car() - " << this << endl;
	}

	void run()
	{
		cout << "run()" << endl;
	}
};

void test1(Car car)
{

}

Car test2()
{
	return Car();
}

//Car test2() {
//	Car car; // Car()
//	return car;
//}

int main()
{
	// Car car2; // Car()
	// car2 = test2();

	// test1(Car());

	/*cout << 1 << endl;
	Car().run();
	cout << 2 << endl;*/

	// Car car1; // Car()
	// test1(car1);

	// Car car2; // Car()
	// car2 = test2();

	// Car car3 = test2();

	getchar();
	return 0;
}