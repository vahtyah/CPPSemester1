#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Input: ";
	cin >> n;
	int* a = new int[n];
	a[1] = a[2] = 1;
	for (int i = 3; i < n; i++)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	cout << n << "th Fibonacci number = " << a[n - 1] + a[n - 2] << endl;
	delete[] a;
}
