#include <iostream>
using namespace std;

class Point
{
	// friend Point operator+(const Point &, const Point &);
	friend ostream &operator<<(ostream &, const Point &);
	friend istream &operator>>(istream &cin, Point &point);
	int m_x;
	int m_y;
public:
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display()
	{
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
	Point(const Point &point)
	{
		m_x = point.m_x;
		m_y = point.m_y;
	}

	const Point operator+(const Point &point) const
	{
		return Point(m_x + point.m_x, m_y + point.m_y);
	}

	const Point operator-(const Point &point) const
	{
		return Point(m_x - point.m_x, m_y - point.m_y);
	}

	Point &operator+=(const Point &point)
	{
		m_x += point.m_x;
		m_y += point.m_y;
		return *this;
	}

	bool operator==(const Point &point) const
	{
		// true\false
		// YES\NO
		// 1\0
		/*if ((m_x == point.m_x) && (m_y == point.m_y)) {
			return 1;
		} else {
			return 0;
		}*/

		return (m_x == point.m_x) && (m_y == point.m_y);
	}

	bool operator!=(const Point &point) const
	{
		return (m_x != point.m_x) || (m_y != point.m_y);
	}

	const Point operator-() const
	{
		return Point(-m_x, -m_y);
	}

	// 前置++
	Point &operator++()
	{
		m_x++;
		m_y++;
		return *this;
	}

	// 后置++
	const Point operator++(int)
	{
		Point old(m_x, m_y);
		m_x++;
		m_y++;
		return old;
	}
};

// output stream -> ostream
ostream &operator<<(ostream &cout, const Point &point)
{
	cout << "(" << point.m_x << ", " << point.m_y << ")";
	return cout;
}

// input stream -> istream
istream &operator>>(istream &cin, Point &point)
{
	cin >> point.m_x;
	cin >> point.m_y;
	return cin;
}

class Person
{
private:
	int m_age;
	int m_height;
	void operator=(const Person &person) {}
public:
	Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
	/*Person &operator=(const Person &person) {
		m_age = person.m_age;
		return *this;
	}*/
	void display()
	{
		cout << m_age << ", " << m_height << endl;
	}
};

int main()
{
	Person p1(10, 180);
	Person p2(11, 175);

	// Java：toString()方法
	// OC：description方法

	// int a = 10;
	// cout << a << endl;

	/*Point p2 = p1++ + Point(30, 40);
	p1.display();
	p2.display();*/

	// (p1 += p2) = Point(50, 60);
	// p1.display();

	// cout << (p1 != p2) << endl;

	/*Point p3(30, 40);
	Point p4 = p1 + p2 - p3;
	p4.display();*/

	// Point p3(30, 40);
	// Point p4 = p1 + p2 + p3;
	// p4.display();

	getchar();
	return 0;
}