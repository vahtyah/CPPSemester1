#include <iostream>
using namespace std;

void MaxMinA(float c[][2])
{
	float max = c[0][0], min = c[0][0],a=0,b=0;
	for (int i = 0; i < 3; i++)
	{
		if (max > c[i][0])
		{
			max = c[i][0];
			a = i;
		}
		if (min < c[i][0])
		{
			 min = c[i][0];
			 b = i;
		}
	}
	cout << "1." << endl;
	cout << "The seller - prodavets " << a+ 1 << " earned the most money = " << max << endl;
	cout << "The seller - prodavets " << b + 1 << " earned the least money = " << min << endl;
	cout << endl;
}

void MaxMinB(float c[][2])
{
	float max = c[0][1], min = c[0][1], a = 0, b = 0;
	for (int i = 0; i < 3; i++)
	{
		if (max > c[i][1])
		{
			max = c[i][1];
			a = i;
		}
		if (min < c[i][1])
		{
			min = c[i][1];
			b = i;
		}
	}
	cout << "2." << endl;
	cout << "The seller - prodavets " << a + 1 << " gets the most commissions = " << max << endl;
	cout << "The seller - prodavets " << b + 1 << " gets the least commissions = " << min << endl;
	cout << endl;
}

float SumA(float c[][2])
{
	float s = 0;
	for (int i = 0; i < 3; i++) {
		s += c[i][0];
	}
	return s;

}

float SumB(float c[][2])
{
	float s = 0;
	for (int i = 0; i < 3; i++) {
		s += c[i][1];
	}
	return s;

}

float SumC(float c[][2])
{
	return (SumA(c) + SumB(c));
}
int main()
{
	float a[3][4] = { { 5,2,0,10 }, { 3,5,2,5 }, { 20,0,0,0 } },
		b[4][2] = { {1.2,0.5},{2.8,0.4},{5,1},{2,1.5} },
		c[4][2] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				c[i][j] += (a[i][k] * b[k][j]);
			}
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	MaxMinA(c);
	MaxMinB(c);
	cout << "3.\n" << SumA(c) << endl << endl;
	cout << "4.\n" << SumB(c) << endl << endl;
	cout << "5.\n" << SumC(c) << endl << endl;

}
