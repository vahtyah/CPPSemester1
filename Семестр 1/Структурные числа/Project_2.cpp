#include <iostream>
using namespace std;

bool check(int &x)
{
	int sum = 0;
	for (int i = 1; i < x; i++)
	{
		if (x%i==0)
		{
			sum += i ;
		}

	}
	if (sum==2)
	{
		return 1;
	}
}

int main()
{
	int m, n, sum = 0;
	cout<<"Input (m,n): "<<endl;
	cin >> m >> n;
	if (m<=2)
		m = 3;
    cout<<"Output: "<<endl;
	for (int i = m; i <= n; i++)
	{
		if (check(i)==1)
		{
			cout << i << " ";
		}
	}
	return 0;
}
