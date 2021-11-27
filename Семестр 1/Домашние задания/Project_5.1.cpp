#include <iostream>
using namespace std;

int Subtraction(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

int Division(int a, int b)
{
	if (a == 0 || b == 0)
		return a + b;
	while (a && b)
	{
		if (a > b)
			a = a % b;
		else
			b = b % a;
	}
	return a + b;
}
int main()
{
	int a, b;
	cout << "Input a,b: ";
	cin >> a >> b;
	cout << "Greatest common divisor:" << endl;
	cout << "Subtraction: " << Subtraction(a, b) << endl;
	cout << "Division: " << Division(a, b) << endl;
	return 0;
}
