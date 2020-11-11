#include <iostream>
using namespace std;

//struct Person {
//	int m_age;
//};
//
//struct Student : public Person {
//	int m_score;
//};

void test()
{
	// 父类指针 指向 子类对象
	/*Person *p = new Student();
	p->m_age = 10;*/

	/*Student *p = (Student *) new Person();
	p->m_age = 10;
	p->m_score = 100;*/
}

struct Animal
{
	virtual void speak()
	{
		cout << "Animal::speak()" << endl;
	}
	virtual void run()
	{
		cout << "Animal::run()" << endl;
	}
};

struct Dog : Animal
{
	// 重写（覆写、覆盖、override）
	void speak()
	{
		cout << "Dog::speak()" << endl;
	}
	void run()
	{
		cout << "Dog::run()" << endl;
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
};

struct Pig : Animal
{
	void speak()
	{
		cout << "Pig::speak()" << endl;
	}
	void run()
	{
		cout << "Pig::run()" << endl;
	}
};

void liu(Animal *p)
{
	p->speak();
	p->run();
}

int main()
{
	/*Animal *p = new Pig();
	p->speak();
	p->run();*/

	//Animal *p = new Dog();
	//p->speak(); // call Animal::speak
	//p->run(); // call Animal::run

	liu(new Dog());
	liu(new Cat());
	liu(new Pig());


	getchar();
	return 0;
}
//
//void liu(Dog *p) {
//	p->speak();
//	p->run();
//}
//
//void liu(Cat *p) {
//	p->speak();
//	p->run();
//}
//
//void liu(Pig *p) {
//	p->speak();
//	p->run();
//}