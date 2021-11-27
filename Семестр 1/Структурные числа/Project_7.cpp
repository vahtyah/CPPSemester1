#include <iostream>
using namespace std;

bool check(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i==0)
		{
			dem++;
		}
	}
	if (dem==2)
	{
		return true;
	}
	return false;
}

int main()
{
	int n, m;
	cout<<"Input (m,n): "<<endl;
	cin >> n >> m;
	cout<<"Output: "<<endl;
	for (int i = n; i <= m; i++)
	{
		if (check(i)&&check(2*i+1))
		{
			cout << i << endl;
		}
	}
	return 0;
}
