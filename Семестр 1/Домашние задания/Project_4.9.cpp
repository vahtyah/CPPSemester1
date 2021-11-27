#include <iostream>
#include <conio.h>
using namespace std;

void Convert10ToAll(int n, int m)
{
	if (n < m)
	{
		cout << "0123456789ABCDEF"[n];
		return;
	}
	else
		Convert10ToAll(n / m, m);
	cout << "0123456789ABCDEF"[n % m];
}

int ConverAllTo10(string str, int a[], int m)
{
	int n = 0, k = 0;
	for (int i = str.length() - 1; i >= 0; i--)
	{
		n += a[i] * pow(m, k);
		k++;
	}
	return n;
}

void ConvertStringToInt(string str, int* p_a)
{
	int k = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			p_a[i] = str[i] - 48;
		}
		else
		{
			p_a[i] = str[i] - 55;
		}
	}
}

int main()
{
	int ori_sys, sys_convert;
	string str_value;
EnterAgain:
	cout << "Enter the original numbering system (2-16): "; cin >> ori_sys;
	cout << "Enter value: "; cin >> str_value;
	int* p_value = new int[str_value.length()];
	ConvertStringToInt(str_value, p_value);
	for (int i = 0; i < str_value.length(); i++)
	{
		if (p_value[i] >= ori_sys || ori_sys < 2)
		{
			cout << "\n\nInput is false!" << endl;
			delete[] p_value;
			cout << "Press enter to re-enter or any key to exit the program!";
			char c = _getch();
			if (c == 13)
			{
				system("cls");
				cout << "Please re-enter!" << endl;
				goto EnterAgain;
			}
			else return 0;
		}
	}
	int i_value = ConverAllTo10(str_value, p_value, ori_sys);
	while (true)
	{
	Enter_Sys_Cv_Again:
		system("cls");
		cout << "Original base " << ori_sys << " : " << str_value << endl;
		cout << "Enter the numbering system you want to convert (2-16): ";
		cin >> sys_convert;
		if (sys_convert < 2)
		{
			cout << "\n\nInput is false!" << endl;
			system("pause");
			goto Enter_Sys_Cv_Again;
		}
		cout << "New base " << sys_convert << " : ";
		Convert10ToAll(i_value, sys_convert);
		cout << "\n\n Press Enter to switch to another numbering system,1 to enter the new system, 0 to exit";
		char c = _getch();
		if (c == '0')
			break;
		else if (c == '1')
		{
			system("cls");
			goto EnterAgain;
		}

	}

	delete[] p_value;
	return 0;
}
