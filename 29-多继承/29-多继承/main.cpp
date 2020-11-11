#include <iostream>
using namespace std;

//struct Student {
//	int m_score;
//	Student(int score) :m_score(score) {}
//	void study() {
//		cout << "Student::study() - score = " << m_score << endl;
//	}
//};
//
//struct Worker {
//	int m_salary;
//	Worker(int salary) :m_salary(salary) {}
//	void work() {
//		cout << "Worker::work() - salary = " << m_salary << endl;
//	}
//};
//
//struct Undergraduate : Student, Worker {
//	int m_grade;
//	Undergraduate(int score, int salary, int grade) 
//		:m_grade(grade), 
//		Student(score), 
//		Worker(salary) {}
//	void play() {
//		cout << "Undergraduate::play() - grade = " << m_grade << endl;
//	}
//};

//struct Student {
//	void eat() {
//		cout << "Student::eat()" << endl;
//	}
//};
//
//struct Worker {
//	void eat() {
//		cout << "Worker::eat()" << endl;
//	}
//};
//
//struct Undergraduate : Student, Worker {
//	void eat() {
//		cout << "Undergraduate::eat()" << endl;
//	}
//};

struct Student
{
	int m_age;
};

struct Worker
{
	int m_age;
};

struct Undergraduate : Student, Worker
{
	int m_age;
};

int main()
{

	Undergraduate ug;
	ug.m_age = 10;
	ug.Student::m_age = 11;
	ug.Worker::m_age = 12;
	ug.Undergraduate::m_age = 13;

	/*Undergraduate ug;
	ug.eat();
	ug.Student::eat();
	ug.Worker::eat();
	ug.Undergraduate::eat();*/

	/*Undergraduate ug;
	ug.m_score = 100;
	ug.m_salary = 2000;
	ug.m_grade = 4;
	ug.study();
	ug.work();
	ug.play();*/

	getchar();
	return 0;
}