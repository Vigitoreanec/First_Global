﻿// GIt global repositories.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

struct vector {
	int* arr;
	unsigned int size;
};

vector init_vector(unsigned int size)
{
	vector mas;
	mas.arr = new int[size];
	mas.size = size;

	for (unsigned int i = 0; i < size; i++)
	{
		mas.arr[i] = rand() % 45;
	}
	return mas;
}

int main()
{
	vector mas = init_vector(4);



}
