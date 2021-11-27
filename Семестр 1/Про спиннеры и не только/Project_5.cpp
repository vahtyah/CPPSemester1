#include <iostream>
#include <deque>
#include <algorithm>
#define MAX 1e18
using namespace std;

int main()
{
	deque<int> seats;
	int n, k;
	cout << "Input (n,k): ";
Again:
	cin >> n >> k;
	if (n < 1 || k < 1 || MAX < n < k )
	{
		cout << "Input is falsed!" << endl;
		system("pause");
		system("cls");
		cout << "Re-input (n,k): ";
		goto Again;
	}
	seats.push_back(n);
	while (k > 0)
	{
		seats.push_back(n / 2);
		seats.push_front((n - 1) / 2);
		for (int i = 0; i < seats.size(); i++) if (seats[i] == *max_element(seats.begin(), seats.end()))
			seats.erase(seats.begin() + i);
		n = *max_element(seats.begin(), seats.end());
		k--;
	}
	cout << seats.front() << " " << seats.back();
	return 0;
}
