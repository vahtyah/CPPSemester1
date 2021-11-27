#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int m, n;
	cout<<"Input (m,n): "<<endl;
	cin >> m >> n;
	cout<<"Output: "<<endl;
	for (int i = m; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			float a = sqrt(i * i + j * j);
			if (a<=n&&a>j&&a-(int)a==0)
				cout << i<<" " << j << " " << a << endl;
		}
	}
	return 0;
}
