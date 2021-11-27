#include <bits/stdc++.h>
using namespace std;

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");
    B:
    int m, n, select;
    cout << "Введите количество столбцов: "; cin >> m;
    cout << "Введите количество строк: "; cin >> n;
    if(m<=0||n<=0)
    {
        cout<<"Input is false"<<endl;
        system("pause");
        system("cls");
        cout<<"Re-enter: "<<endl;
        goto B;
    }
        int** a = new int* [m];
    for (int i = 0; i < m; i++)
        a[i] = new int[n];




Again:
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j]=-10+rand()%21;
    do {
        system("cls");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

        cout << "1.Re-random the matrix" << endl;
        cout << "45).Написать программу, которая вводит по строкам с клавиатуры двумерный массив и вычисляет суммы его элементов по столбцам." << endl;
        cout << "47).Написать программу, которая вычисляет сумму диагональных элементов квадратной матрицы." << endl;
        cout << "Пожалуйста, выбери: "; cin >> select;
        switch (select)
        {
        default: {cout << "Пожалуйста, введите еще раз!" << endl; system("pause"); break; }
        case 0: break;
        case 1:
            goto Again;
        case 45: {
            int sum=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    sum += a[j][i];
                }
                cout << "a[" << i << "]= " << sum << endl;
                sum = 0;
            }
            system("pause");
            break;
        }
        case 47:
        {
            int sum=0;
            if (m != n)
            {
                cout << "Не квадратная матрица!" << endl;
            }
            else {
                for (int i = 0; i < n; i++)
                {
                    sum += a[i][i];
                }
                cout << sum<<endl;
            }
            system("pause");
            break;
        }
        }
    } while (select);

    for (int i = 0; i < m; i++)
    {
        delete[] a[i];
    }
    delete[] a;
}
