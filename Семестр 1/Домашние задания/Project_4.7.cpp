#include <iostream>
#define MAX 100
using namespace std;

int main() {
	int m, i, c;
	int s[MAX];
	cout << "Input m,i,c: " << endl;
	cin >> m >> i >> c;
	cout<<"Random: "<<endl;
	s[0] = 0;
	for (int j = 1; j < MAX; j++)
	{
		s[j] = (m * s[j - 1] + i) % c;
		cout << "S[" << j-1 << "]= " << s[j - 1] << endl;
	}
	return 0;
}
