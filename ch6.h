#pragma once
#include <iostream>
using namespace std;

void func(int arg)
{
	arg++;
	cout << arg << endl;
}

void func1(int arg[1])
{
	arg[0]++;
	cout << arg[0] << endl;
}
void func2(int arg[4])
{
	cout << sizeof(arg) << endl;
}

void func3(int arg[2][3])
{
	arg[1][2] = 1;
}
void one()
{
	int arr1[2];
	int N = 2;

	const int CN = 2;
	int arr3[CN];

}

void two()
{
	int arr[2] = { 1,2 };
	int* p = arr;
	cout << *p << ", " << *arr << endl;
}

void three()
{
	int arr[2] = { 1,2 };
	int(*p)[2] = &arr;
	cout << (*p)[0] << ", " << (*p)[1] << endl;
}

void four()
{
	int arr[2] = { 1,2 };
	int* p1 = arr;
	int(*p2)[2] = &arr;
}

void five()
{
	int arr1[8] = { 1 };
	int arr2[8] = { 1, };
	int arr3[8] = { 0 };
	int arr4[8] = {};
	int arr5[8] = { 1,2,3 };
	int arr6[8] = { 1,2,3, };
	int arr7[8];
}

void six()
{
	char str1[] = { 'C','+','+' };
	char str2[] = "C++";
	char str3[] = { "C++" };

	wchar_t wstr1[] = { L'C',L'+',L'+' };
	wchar_t wstr2[] = L"C++";
	wchar_t wstr3[] = { L"C++" };

}

void seven()
{
	int arr[2][3] = { {11,12,13},{21,22,23} };
}

void eight()
{
	int arr[2][3][2] =
	{
		{
			{111, 112},
			{121,122},
			{131,132}
		},
		{
			{211, 212},
			{221,222},
			{231,232}
		}
	};
}

void nine()
{
	char s1[] = "C++";
	/*char* s2 = "C++";*/
}

void ten()
{
	int arr[2] = { 1,2 };
	int* p = arr;
	cout << p[0] << ", " << p[1] << endl;
}

void eleven()
{
	int arr[2][3] = { {11,12,13},{21,22,23} };
	int** pp = (int**)arr;
	cout << pp[1][2] << endl;
}

void twelve()
{
	int arr[2][3] = { {11,12,13},{21,22,23} };
	int* arrM[2] = { arr[0],arr[1] };
	int** pp = arrM;
	cout << pp[1][2] << endl;
}

void thirteen()
{
	int a = 1;
	func(a);
	cout << a << endl;
}

void fourteen()
{
	int arr[1] = { 1 };
	func1(arr);
	cout << arr[0] << endl;
}

void fifteen()
{
	int arr[4] = { 1,2,3,4 };
	func2(arr);
}

void sixteen()
{
	int arr[2][3] = { {0} };
	func3(arr);
	cout << arr[1][2] << endl;
}

void seventeen()
{
	int arr[2][3];
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
}

void eighteen()
{
	int arr[4][3] =
	{
		{100,100,50},
		{90,70,80},
		{70,80,90},
		{80,100,90}
	};

	int i, j;
	int sum;

	for (i = 0; i < 4; i++)
	{
		sum = 0;
		for (j = 0; j < 3; j++)
		{
			sum = sum + arr[i][j];
		}
		cout << "학생" << i + 1 << "의 총점은" << sum << "점입니다." << endl;
	}
	for (j = 0; j < 3; j++)
	{
		sum = 0;
		for (i = 0; i < 4; i++)
		{
			sum = sum + arr[i][j];
		}
		string subject = "";
		switch (j)
		{
		case 0: subject = "국어";
			break;
		case 1: subject = "영어";
			break;
		case 2: subject = "수학";
			break;
		}
		cout << subject << "과목의 평균은" << sum / 4.0 << "점입니다." << endl;
	}
}