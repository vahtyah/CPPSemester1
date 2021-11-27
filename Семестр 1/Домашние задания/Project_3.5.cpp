#include <iostream>
using namespace std;

void Sort(string& str)
{
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			char tg1 = str[i];
			char tg2 = str[j];
			if (tg1 >= 'A' && tg1 <= 'Z') tg1 += 31.5;
			if (tg2 >= 'A' && tg2 <= 'Z') tg2 += 31.5;
			if (tg1 > tg2)
			{
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}

int main()
{
	string str;
	cout << "Input string: " << endl;
	cin >> str;
	Sort(str);
	cout << str << endl;
}
