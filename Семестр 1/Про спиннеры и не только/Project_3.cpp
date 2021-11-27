#include <iostream>
using namespace std;

bool check(float n)
{
	if (n <= 0 || n > 75000 || n != rintf(n))
		return false;
	return true;
}

int main()
{
	float m, n;
	cout << "Input (N,M): " << endl;
Again:
	cin >> n >> m;
	if (!check(n) || !check(m))
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		cout << "Re-input: ";
		goto Again;
	}
	int output = (m + 1) * m / 2 * (n + 1) * n / 2;
	cout << "Output: " << output << endl;
}
