#include <iostream>
using namespace std;

unsigned long long Factorial(int n)
{
	if (n == 1 || n == 0)
		return 1;
	return n * Factorial(n - 1);
}

unsigned long long Combination(int n, int k)
{
	return (Factorial(n) / (Factorial(k) * Factorial(n - k)));
}

int main()
{
	int n, m;
	cout<<"Input (m,n): "<<endl;
	cin >> n >> m;
	if (n < 1) n = 1;
	cout<<"Output: "<<endl;
	for (int i = n; i <= m; i++)
	{
		int* a = new int[i+1];
		for (int j = 1; j <= i; j++)
		{
			a[j] = (1 / (float)i) * Combination(i, j - 1) * Combination(i, j);
			cout << a[j] << " ";
		}
		cout << endl;
		delete[] a;
	}

	return 0;
}
