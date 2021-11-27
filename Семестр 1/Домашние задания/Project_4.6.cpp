#include <iostream>
#include <cstring>
#include <conio.h>
#define MAX 35
using namespace std;

int main() {
	int len, i, k, a[MAX];
	char lama[MAX];
	cout << "Roman numerals ---- I V X L C D M" << endl;
	cout << "Enter Roman numerals: ";
	cin.getline(lama, 20);
	len = strlen(lama);
	for (i = 0; i < len; i++) {
		if (lama[i] == 'I')
			a[i] = 1;
		else if (lama[i] == 'V')
			a[i] = 5;
		else if (lama[i] == 'X')
			a[i] = 10;
		else if (lama[i] == 'L')
			a[i] = 50;
		else if (lama[i] == 'C')
			a[i] = 100;
		else if (lama[i] == 'D')
			a[i] = 500;
		else if (lama[i] == 'M')
			a[i] = 1000;
		else
		{
			cout << "Input is false" << endl;
			break;
		}
	}
	k = a[len - 1];
	for (i = len - 1; i > 0; i--) {
		if (a[i] > a[i - 1])
			{
			    k = k - a[i - 1];
			    a[i-1]=a[i];
			}
		else if (a[i] == a[i - 1] || a[i] < a[i - 1]) {
			k = k + a[i - 1];
		}

	}
	cout << "\nValue = " << k << endl;
	return 0;
}
