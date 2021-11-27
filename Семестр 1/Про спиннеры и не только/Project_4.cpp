#include <iostream> 
#include <locale>
using namespace std;

void condition(double& num) {
	while (num > 54 || num < 1 || num != rintf(num)){
		cout << "Ввод неправилный!\nВведите еще раз: ";
		cin >> num;
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");
	bool Hang[55] = { false };
	double n, count = 0, total = 0;
	cout << "Количество мест (int)[1;54]: ";
	cin >> n; condition(n);
	double* seats = new double[n];
	cout << "Номера мест (int)[1;54]: " << endl;
	for (int i = 0; i < n; i++){
		cin >> seats[i];
		condition(seats[i]);
		Hang[(int)seats[i]] = true;
	}
	for (int i = 0; i < 55; i++){
		count++;
		if (!Hang[i]) count = 0;
		if (count == 4 && Hang[(56 - (i / 2))] && Hang[(55 - (i / 2))]) total++;
	}
	cout << "Вывод: " << total;
	delete[] seats;
	return 0;
}


#include <iostream>
#define A 3
#define B 18
using namespace std;

void Create_a_list_of_seats(int a[][B])
{
	a[0][0] = 1;
	a[1][0] = 2;
	a[2][0] = 53;
	for (int j = 1; j < B; j++)
	{
		a[0][j] = a[0][j - 1] + 2;
		a[1][j] = a[1][j - 1] + 2;
		if (j % 2 != 0)
			a[2][j] = a[2][j - 1] + 1;
		else
			a[2][j] = a[2][j - 1] - 3;
	}
}

int Xac_Dinh_Ghe(int n, int a[][B], int x[])
{
	int sum = 0;
	for (int i = 0; i < A; i++)
		for (int j = 0; j < B; j++)
			for (int k = 0; k < n; k++)
				if (x[k] == a[i][j])
					a[i][j] = 0;
	for (int i = 0; i < B; i++)
	{
		if (a[0][i] == 0)
		{
			if (i % 2 == 0 && a[0][i + 1] == 0 && a[1][i] == 0 && a[1][i + 1] == 0 && a[2][i] == 0 && a[2][i + 1] == 0)
			{
				sum++;
				a[0][i] = 1;
			}
			else if (i % 2 != 0 && a[0][i - 1] == 0 && a[1][i] == 0 && a[1][i - 1] == 0 && a[2][i] == 0 && a[2][i - 1] == 0)
			{
				sum++;
				a[0][i] = 1;
			}
		}
	}
	return sum;
}

int main()
{
	int a[A][B], n;
	Create_a_list_of_seats(a);
	cout << "Number of free seats: "; cin >> n;
	int* x = new int[n];
	cout << "INPUT: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cout << "OUTPUT: " << Xac_Dinh_Ghe(n, a, x);
	delete[]x;
	return 0;
}
