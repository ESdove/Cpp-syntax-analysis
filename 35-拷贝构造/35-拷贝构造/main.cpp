#include <iostream>
using namespace std;

//class Car {
//public:
//	int m_price;
//	int m_length;
//	Car(int price = 0, int length = 0) :m_price(price), m_length(length) {
//		cout << "Car(int price = 0, int length = 0)" << endl;
//	}
//
//	// 拷贝构造函数
//	/*Car(const Car &car) :m_price(car.m_price) {
//		cout << "Car(const Car &car)" << endl;
//	}*/
//
//	void display() {
//		cout << "price=" << m_price << ", length=" << m_length << endl;
//	}
//};


//class Car {
//	int m_price;
//	int m_length;
//public:
//	Car(int price = 0, int length = 0) :m_price(price), m_length(length) {
//		cout << "Car(int price = 0, int length = 0)" << endl;
//	}
//
//	Car(const Car &car) :m_price(car.m_price), m_length(car.m_length) {
//		cout << "Car(const Car &car)" << endl;
//	}
//
//	void display() {
//		cout << "price=" << m_price << ", length=" << m_length << endl;
//	}
//};

class Person
{
public:
	int m_age;
	Person(int age = 0) :m_age(age) {}
	Person(const Person &person) :m_age(person.m_age) {}
};

class Student : public Person
{
public:
	int m_score;
	Student(int age = 0, int score = 0) :Person(age), m_score(score) {}
	Student(const Student &student) :m_score(student.m_score) {}
};

/*
Student的拷贝构造函数如果没有调用父类的拷贝构造函数,
就只给m_score赋值,
为什么m_age是0,而不是cc,是默认调用了父类的构造函数么
*/

int main()
{

	Student stu1(18, 100);
	Student stu2(stu1);

	cout << stu2.m_age << endl;
	cout << stu2.m_score << endl;

	//Car car1(100, 5); // Car(int price = 0, int length = 0)
	//Car car2(car1); // Car(const Car &car)
	//Car car3 = car2; // Car(const Car &car)
	//Car car4; // Car(int price = 0, int length = 0)

	//car4.display();

	// 这里并没有调用拷贝构造函数（仅仅是简单的赋值操作）
	/*car4 = car3;

	car4.display();*/



	/*Car car1(100, 5);
	Car car2(car1);
	car2.display();*/


	/*Car car1;
	Car car2(100);*/
	// Car car3(100, 5);

	// 利用已经存在的car3对象创建了一个car4新对象
	// car4初始化时会调用拷贝构造函数
	// Car car4(car3);
	/*car4.m_price = car3.m_price;
	car4.m_length = car3.m_length;*/
	// car4.display();

	getchar();
	return 0;
}