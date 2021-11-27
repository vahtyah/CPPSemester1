#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void Ex4(char str[])
{
    char b[30];
    char c[30];
    int j = 0, maxlength = 0;
    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != 32 && str[i] != '\0') {
            b[j++] = str[i];
        }
        else {
            b[j] = '\0';
            if (strlen(b) > maxlength) {
                strcpy_s(c, b);
                maxlength = strlen(b);
            }
            j = 0;
        }
    }
    j = 0;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] != 32 && str[i] != '\0') {
            b[j++] = str[i];
        }
        else {
            b[j] = '\0';
            if (strlen(b) == maxlength) {
                strcpy_s(c, b);
                puts(c);
            }
            j = 0;
        }
    }
}

void Ex36(char str[])
{
    char c;
    cout << "Введите символ, который хотите удалить: ";
    cin >> c;
    int j;
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] == c)
        {
            j = i;
            while (str[j + 1] != '\0')
            {
                str[j] = str[j + 1];
                j++;
            }
            str[j] = '\0';
            i--;
        }
    }
    cout << str << endl;
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[100];
    int select;
    cout << "Введите строку: ";
    cin.getline(str, 100);
    do
    {
        system("cls");
        cout << "String: " << str << endl;
        cout << "4.Поиск в тексте слова максимальной длины." << endl;
        cout << "36.Исключение из текстового файла заданных символов." << endl;
        cout << "Пожалуйста,выбери: "; cin >> select;
        switch (select)
        {
        default:
            break;
        case 0: break;
        case 4:
        {
            cout << "Самое длинное слово: " << endl;
            Ex4(str);
            system("pause");
            break;
        }
        case 36:
        {
            Ex36(str);
            system("pause");
            break;
        }
        }
    } while (select);
}
