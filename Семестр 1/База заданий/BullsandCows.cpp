#include <iostream>
#include <time.h>
#include <stdio.h>
using namespace std;

struct Score
{
	int plus;
	int minus;
};

void IntToArr(int value, int arr[])
{
	for (int i = 0; i < 4; i++)
	{
		arr[i] = value % 10;
		value /= 10;
	}
}

int cpt()
{
Again:
	int computer = 1000 + rand() % 9000;
	int arr_cpt[4];
	IntToArr(computer, arr_cpt);
	for (int i = 0; i < 4; i++)
		for (int j = i + 1; j < 4; j++)
			if (arr_cpt[i] == arr_cpt[j])
				goto Again;
	return computer;
}

Score Compare(int arr_hm[], int arr_cpt[])
{
	Score score;
	score.minus = 0;
	score.plus = 0;
	for (int i = 0; i < 4; i++)
	{
		if (arr_hm[i] == arr_cpt[i])
			score.plus++;
		for (int j = 0; j < 4; j++)
			if (arr_hm[i] == arr_cpt[j] && i != j)
				score.minus++;
	}
	return score;
}

int main()
{
	srand(time(NULL));
	int arr_cpt[4];
	int arr_hm[4];
	int human;
Again:
	IntToArr(cpt(), arr_cpt);
Continue:
	system("cls");
	cout << "----------Welcome to the Bulls and Cows game!----------" << endl;
	cout << "|     1. Bulls = correct code, correct position.      |" << endl;
	cout << "|     2. Cows  = correct code, wrong position.        |" << endl;
	cout << "|             You win when Bulls = 4                  |" << endl;
	cout << "-------------------------------------------------------" << endl;
	cout << "\nEnter your number (XXXX): "; cin >> human;
	IntToArr(human, arr_hm);
	cout << "Bulls(+)= " << Compare(arr_hm, arr_cpt).plus << endl;
	if (Compare(arr_hm, arr_cpt).plus == 4)
	{
		cout << "\n----------You Win!!!----------\n" << endl;
		system("pause");
		system("cls");
		int select;
		cout << "Do you want to continue(1/0): "; cin >> select;
		if (select == 1)
		{
			system("cls");
			goto Again;
		}
		else return 0;
	}
	cout << "Cows(-)= " << Compare(arr_hm, arr_cpt).minus << endl;
	system("pause");
	goto Continue;
	cout << "\n----------Thanks for playing!----------" << endl;
	return 0;
}
