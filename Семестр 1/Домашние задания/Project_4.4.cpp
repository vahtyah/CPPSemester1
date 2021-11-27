#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			if (i <= 5 && i%2==0 && j <= 7) cout << "* ";
			else if(i<=5 && i%2!=0 && j<=7)cout <<" *";
			else if(i%2==0)
            {
                cout << "||";
            }
            else
                cout<<" ";
		}
		cout << endl;
	}
}
