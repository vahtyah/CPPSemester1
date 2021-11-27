#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cout<<"Input (m,n): "<<endl;
	cin >> n>>m;
	int* a = new int[m-n];
	a[0] = 0;
	a[1] = 1;
	cout<<"Output: "<<endl;
	for (int i = 0; i < m-n; i++)
	{
		if(i>1)
		a[i] = a[i - 1] + 2*a[i - 2];
		cout << a[i] << endl;
	}
	delete[] a;
	return 0;
}
