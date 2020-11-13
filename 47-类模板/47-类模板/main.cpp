#include <iostream>
#include "Array.hpp"

using namespace std;

class Point
{
	friend ostream &operator<<(ostream &, const Point &);
	int m_x;
	int m_y;
public:
	Point(int x = 0, int y = 0) :m_x(x), m_y(y) {}
};

ostream &operator<<(ostream &cout, const Point &point)
{
	return cout << "(" << point.m_x << ", " << point.m_y << ")";
}

class Person
{

};

class Car
{

};

int main()
{
	Array<Point> array;
	array.add(Point(1, 2));
	array.add(Point(3, 4));

	array.remove(0);
	array.get(0);


	array.insert(2, 33);

	cout << array << endl;

	/*Array<int> array;
	array.add(10);
	array.add(20);
	array.add(30);

	cout << array << endl;*/
	// [10, 20, 30]

	/*Array<void *> array;
	array.add(&Point(1, 2));
	array.add(new Point(3, 4));
	array.add(new Car());*/

	/*cout << array.get(0) << endl;
	cout << array.size() << endl;*/


	getchar();
	return 0;
}