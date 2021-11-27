#include <iostream>
using namespace std;

int Check(int a)
{
	int x=0;
	for (int i = 1; i <= a; i++)
		if (a%i==0)
			x++;
	if (x==2)
		return 1;
	return 0;
}

int main()
{
	int a;
	cout << "Enter: ";
	cin >> a;
	for (int i = 2; i <= a; i++)
		if (Check(i)==1)
			cout << i << " ";
	return 0;
}
