#include <iostream>
using namespace std;

bool check(float n)
{
	if (n <= 0 || n > 2e9 || n != rintf(n))
		return false;
	return true;
}

int main()
{
	float a, b, c, i = 0;
	cout << "Input (a,b,c): " << endl;
Again:
	cin >> a >> b >> c;
	if (!check(a) || !check(b) || !check(c) || a > c)
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		cout << "Re-input (a,b,c): ";
		goto Again;
	}
	while (true)
	{
		if (a + b * i > c)
		{
			cout << "Output: " << i - 1;
			break;
		}
		i++;
	}
	return 0;
}
