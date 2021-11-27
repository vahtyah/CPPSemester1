#include <iostream>
using namespace std;

bool check(int n,int m)
{
	int k=1,x=1;
	while (true)
	{
		if (n==k)
		{
			return 1;
		}
		else
		{
			x *= 10;
			k = m % x;
		}
		if (k>n)
		{
			return 0;
		}
	}
}

int main()
{
	int m, n, sum = 0;
	cout<<"Input (m,n): "<<endl;
	cin >> m >> n;
	cout<<"Output: "<<endl;
	for (int i = m; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (i*i==j&&check(i,j)==1)
			{
				cout << i << "," << j << endl;
			}
		}
	}
	return 0;
}
