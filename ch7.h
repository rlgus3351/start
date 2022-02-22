#pragma once
#include <iostream>
#include <stddef.h>
using namespace std;

struct STag
{
	int m;
	char str1[4];
	char* str2;
};

int one()
{
	char str3[10] = "World";
	STag s1;
	STag* s2 = &s1;
	s1.m = 2017;
	memcpy(s1.str1, "C++", 4);
	s2->str2 = str3;
	cout << s1.m << " " << s1.str1 << " " << s1.str2 << endl;
	return 0;
	
}

typedef struct STag1
{
	int i;
	char c;
}SType1;

void two()
{
	cout << sizeof(SType1) << endl;
}

typedef struct STag2
{
	int a;
	int b;
	int c;
}SType2;

void three()
{
	SType2 s1, s2;
	s1.a = 1;
	s1.b = 2;
	s1.c = 3;
	s2 = s1;
	cout << s1.a << " " << s1.b << " " << s1.c << " " << endl;
}

typedef struct STag3
{
	char c;
	int i;
}SType3;

void four()
{
	SType3 s;
}

typedef struct STag4
{
	char c;
	int i;
	double d;
}SType4;

void five()
{
	int OffsetC = offsetof(SType4, c);
	int OffsetI = offsetof(SType4, i);
	int OffsetD = offsetof(SType4, d);
	cout << "c Offset:" << OffsetC << endl;
	cout << "I Offset:" << OffsetI << endl;
	cout << "D Offset:" << OffsetD << endl;
}
typedef struct STag5
{
	int m;
}SType5;

void Func(SType5 arg)
{
	arg.m = 2;
	cout << arg.m << endl;
}

void six()
{
	SType5 a;
	a.m = 1;
	Func(a);
	cout << a.m << endl;
}

typedef struct STag6
{
	int m;
}SType6;

void Func1(SType6* pArg)
{
	pArg->m = 2;
	cout << pArg->m << endl;
}
void seven()
{
	SType6 a;
	a.m = 1;

	Func1(&a);
	cout << a.m << endl;
}

typedef union
{
	int a;
	int b;
	int c;
}UType1;

void eight()
{
	UType1 u;
	u.a = 1;

	cout << u.b << endl;
	cout << u.c << endl;
}

typedef union
{
	__int64 a;
	int b;
}UType2;

void nine()
{
	UType2 u;
	u.a = 1;

	cout << u.b << endl;
	cout << sizeof(u) << endl;
}

typedef struct 
{
	char* name;
	double height;
	double weight;
	double power;
}Robot;

void Value(Robot* robot, char* _name, int _height, int _weight, int _power)
{
	robot->name = _name;
	robot->height = _height;
	robot->weight = _weight;
	robot->power = _power;

}
void Print(Robot* robot)
{
	for (int i = 0; i < 4; i++)
	{ 
		cout << "이름" << robot[i].name << ", 신장 : " << robot[i].height << ", 무게 : " << robot[i].weight << ", 마력 : " << robot[i].power << endl;
	}
}
