#pragma once
#include<iostream>
#include<stdio.h>
#include<stdarg.h>
using namespace std;

void FuncValue(int arg)
{
	arg = 1;
}

void FuncPointer(int* arg)
{
	*arg = 2;
}

void FuncReference(int& arg)
{
	arg = 3;
}

void one()
{
	int i = 0;
	FuncValue(i);
	cout << i << endl;

	int j = 0;
	FuncPointer(&j);
	cout << j << endl;

	int k = 0;
	FuncReference(k);
	cout << k << endl;
}

int GetNextValue(int arg)
{

	return arg + 1;

}

void two()
{
	cout << GetNextValue(1) << endl;
}

int IncrementPrev(int n)
{
	n = n + 1;
	int value = n;
	return value;
}

int IncrementPost(int n)
{
	int n = 4;
	int value = n;
	n = n + 1;
	return value;
}

int Absolute(int n)
{
	int rtn;
	if (n < 0)
		return (-1) * n;
	else
		rtn = n;
	return rtn;
}

void three()
{
	int a = 3;
	int b = -5;

	Absolute(a);
	Absolute(b);

	cout << a << endl;
	cout << b << endl;

}

int Sum(int a = 0, int b = 0, int c = 0)
{
	return a + b + c;
}

void four()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
}

