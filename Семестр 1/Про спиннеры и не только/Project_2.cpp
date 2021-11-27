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
	float a;
	bool b = false;
	cout << "Input: ";
Again:
	cin >> a;
	if (!check(a))
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		cout << "Re-input: ";
		goto Again;
	}
	cout << "Output: " << endl;
	for (int i = 0; i < a; i++)
		for (int j = 0; j < a; j++)
			if (i * 3 + 4 * j == a)
			{
				b = true;
				cout << i << " " << j << endl;
				return 0;
			}
	if (!b)
		cout << 0 << endl << 0;
	return 0;
}
