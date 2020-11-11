#include <iostream>
using namespace std;

struct Animal
{
	void speak()
	{
		cout << "Animal::speak()" << endl;
	}
	void run()
	{
		cout << "Animal::run()" << endl;
	}

	Animal()
	{
		cout << "Animal::Animal()" << endl;
	}

	virtual ~Animal()
	{
		cout << "Animal::~Animal()" << endl;
	}
};

struct Cat : Animal
{
	void speak()
	{
		cout << "Cat::speak()" << endl;
	}
	void run()
	{
		cout << "Cat::run()" << endl;
	}

	Cat()
	{
		cout << "Cat::Cat()" << endl;
	}

	~Cat()
	{
		cout << "Cat::~Cat()" << endl;
	}
};

int main()
{
	// 动态性

	Animal *cat0 = new Cat();
	delete cat0;

	/*Animal *cat0 = new WhiteCat();
	cat0->speak();
	cat0->run();

	WhiteCat *cat1 = new WhiteWhiteCat();
	cat1->speak();
	cat1->run();*/

	/*Animal *anim = new Animal();
	anim->speak();
	anim->run();

	Animal *cat = new Cat();
	cat->speak();
	cat->run();*/

	getchar();
	return 0;
}



//struct WhiteCat : Cat {
//	void speak() {
//		cout << "WhiteCat::speak()" << endl;
//	}
//	void run() {
//		cout << "WhiteCat::run()" << endl;
//	}
//};
//
//struct WhiteWhiteCat : WhiteCat {
//	void speak() {
//		cout << "WhiteWhiteCat::speak()" << endl;
//	}
//	void run() {
//		cout << "WhiteWhiteCat::run()" << endl;
//	}
//};