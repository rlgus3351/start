#include "example8.h"

int Sum(int a = 0, int b = 0, int c = 0)
{
	return a + b + c;
}

void main()
{
	cout << Sum(1, 2, 3) << endl;
	cout << Sum(1, 2) << endl;
	cout << Sum(1) << endl;
	cout << Sum() << endl;
}