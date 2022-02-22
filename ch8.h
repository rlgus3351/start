#pragma once
#include<iostream>
#include<stdio.h>
#include<stdarg.h>
using namespace std;

int Multiply1(int a, int b)
{
	int Result = a * b;
	return Result;
	Result = 0;
}

double Multiply2(double a, double b)
{
	return a * b;
}
void Mod(int, int);

void Sub(int arg, int m)
{
	Mod(arg - m, m);
}

void Mod(int arg, int m)
{
	if (arg < m)
	{
		cout << arg << endl;
	}
	else
	{
		Sub(arg, m);
	}
}

int Increment1(int arg)
{
	arg++;
	return arg;
}

void Increment2(int arg)
{
	arg++;
}

void Increment3(int* pArg)
{
	(*pArg)++;
}

void Increment4(int& arg)
{
	arg++;
}

int Increment5(int arg, int delta = 1)
{
	return arg + delta;
}

int Add(int& a, int& b)
{
	return a + b;
}

int Sum(int a = 0, int b = 0, int c = 0)
{
	return a + b + c;
}

void VFFunc1(int arg1, int arg2, ...)
{

}

void VFFunc2(int arg1, int arg2, ...)
{
	char* p = (char*)&arg2;
#ifdef _WIN64
	cout << *(double*)(p + 8) << endl;
#else
	cout << *(double*)(p + 4) << endl;
#endif

}

void VFFunc3(int arg1, int arg2, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, arg2);
	double varg3 = va_arg(arg_ptr, double);
	char varg4 = va_arg(arg_ptr, char);
	char* varg5 = va_arg(arg_ptr, char*);
	va_end(arg_ptr);

	cout << arg1 << endl;
	cout << arg2 << endl;
	cout << varg3 << endl;
	cout << varg4 << endl;
	cout << varg5 << endl;
}

int VFSum(int Count, ...)
{
	va_list arg_ptr;
	va_start(arg_ptr, Count);

	int Sum = 0;
	for (int i = 0; i < Count; i++)
	{
		Sum += va_arg(arg_ptr, int);
	}

	va_end(arg_ptr);

	return Sum;
}

void one()
{
	int Result = Multiply1(3, 4);
	cout << Result << endl;
	return;
}

void two()
{
	double Result = Multiply2(3.3, 7.7);
	cout << Result << endl;
}

void three()
{
	Mod(11, 3);
}

void four()
{
	printf("C++\r\n");
}

void five()
{
	cout << Increment1(3) << endl;
}

void six()
{
	int i = 3;
	Increment2(i);
	cout << i << endl;
}

void seven()
{
	int i = 3;
	Increment3(&i);
	cout << i << endl;
}

void eight()
{
	int i = 3;
	Increment4(i);
	cout << i << endl;
}

void nine()
{
	int a = 1;
	int b = 2;

	cout << Add(a, b) << endl;
}

void ten()
{
	cout << Increment5(3) << endl;
	cout << Increment5(3,2) << endl;
}

void eleven()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
}

void thirteen()
{
	VFFunc2(1, 2, 3.0, '4', "Five");
}

void fourteen()
{
	VFFunc3(1, 2, 3.0, '4', "Five");
}

void fifteen()
{
	cout << VFSum(5, 1, 10, 100, 1000, 10000) << endl;
}

void Func(int* arg)
{
	cout << "int* " << endl;
}

void Func(const int* arg)
{
	cout << "const int*" << endl;
}

void sixteen()
{
	int a = 1;
	Func(&a);

	const int ca = 1;
	Func(&ca);
}

void Func3(short arg)
{
	cout << "short: " << arg << endl;
}

void Func3(int arg)
{
	cout << "int: " << arg << endl;
}

void Func3(__int64 arg)
{
	cout << "__int64:" << arg << endl;
}

void seventeen()
{
	Func3((short)1);
	Func3(2);
	Func3((__int64)3);
}

void Func4(unsigned int arg)
{
	cout << "unsigned int: " << arg << endl;
}

void Func4(int arg)
{
	cout << "int: " << arg << endl;
}

void nineteen()
{
	Func4(1);
	Func4(2u);
}

