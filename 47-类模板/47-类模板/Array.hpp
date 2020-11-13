#pragma once
#include <iostream>
using namespace std;

template <typename Item>
class Array
{
	friend ostream &operator<<<>(ostream &, const Array<Item> &);
	// 用于指向首元素
	Item *m_data;
	// 元素个数
	int m_size;
	// 容量
	int m_capacity;
	void checkIndex(int index);
public:
	Array(int capacity = 0);
	~Array();
	void add(Item value);
	void remove(int index);
	void insert(int index, Item value);
	Item get(int index);
	int size();
	Item operator[](int index);
};

template <typename Item>
Array<Item>::Array(int capacity)
{
	m_capacity = (capacity > 0) ? capacity : 10;

	// 申请堆空间
	m_data = new Item[m_capacity];
}

template <typename Item>
Array<Item>::~Array()
{
	if (m_data == NULL) return;
	delete[] m_data;
}

template <typename Item>
void Array<Item>::checkIndex(int index)
{
	if (index < 0 || index >= m_size)
	{
		// 报错：抛异常
		throw "数组下标越界";
	}
}

template <typename Item>
void Array<Item>::add(Item value)
{
	if (m_size == m_capacity)
	{
		// 扩容
		/*
		1.申请一块更大的新空间
		2.将旧空间的数据拷贝到新空间
		3.释放旧空间
		*/
		cout << "空间不够" << endl;
		return;
	}

	m_data[m_size++] = value;
}

template <typename Item>
void Array<Item>::remove(int index)
{
	checkIndex(index);

}

template <typename Item>
void Array<Item>::insert(int index, Item value)
{

}

template <typename Item>
Item Array<Item>::get(int index)
{
	checkIndex(index);

	return m_data[index];
}

template <typename Item>
int Array<Item>::size()
{
	return m_size;
}

template <typename Item>
Item Array<Item>::operator[](int index)
{
	return get(index);
}

template <typename Item>
ostream &operator<<<>(ostream &cout, const Array<Item> &array)
{
	cout << "[";

	for (int i = 0; i < array.m_size; i++)
	{
		if (i != 0)
		{
			cout << ", ";
		}
		cout << array.m_data[i];
	}

	return cout << "]";
}