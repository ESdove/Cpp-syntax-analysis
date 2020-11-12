#include <iostream>
using namespace std;

class Point
{
	// friend Point add(Point, Point);
	friend class Math;
private:
	int m_x;
	int m_y;
public:
	int getX() { return m_x; };
	int getY() { return m_y; };
	Point(int x, int y) :m_x(x), m_y(y) {}
	void display()
	{
		cout << "(" << m_x << ", " << m_y << ")" << endl;
	}
};



class Math
{
public:
	Point add(Point p1, Point p2)
	{
		return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
	}

	void test()
	{
		Point p1(10, 20);
		p1.m_x = 10;
		p1.m_x;
	}
};

int main()
{

	Point p1(10, 20);
	Point p2(20, 30);

	Point p3 = Math().add(p1, p2);
	p3.display();

	getchar();
	return 0;
}