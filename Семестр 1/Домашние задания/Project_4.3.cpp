#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;
void AreaOfRectangle(float a, float b)
{
	if (a >= 0 && b >= 0) {
		cout << "Area of Rectangle: S= " << a * b << endl;
	}
	else
	{
		cout << "Input is false" << endl;
	}
}
void AreaOfTriangle(float a, float b, float c)
{
	float x = a + b - c;
	float y = a + c - b;
	float z = c + b - a;
	if (x>0&&y>0&&z>0)
	{
		float d = (a + b + c) / 2;
		cout << "Area of Triangle: S= " << sqrt(d * (d - a) * (d - b) * (d - c)) << endl;
	}
	else
	{
		cout << "Input is false" << endl;
	}
}
void AreaOfCircle(float r)
{
	if (r >= 0)
	{
		cout << "Area of Circle: S= " << PI * r * r << endl;
	}
	else
	{
		cout << "Input is false" << endl;
	}
}
int main()
{
	int select;
	do
	{
		system("cls");
		cout << "\n\t==========MENU==========\n" << endl;
		cout << "\t1.Area of Rectange" << endl;
		cout << "\t2.Area of Triangle" << endl;
		cout << "\t3.Area of Circle" << endl;
		cout << "\t0.QUIT" << endl;
		cout << "\n\t==========END==========\n" << endl;
		cout << "Please choose: "; cin >> select;
		switch (select)
		{
		default:
		{
			cout << "Input is false" << endl;
			system("pause");
			break;
		}
		case 0:
		{
			break;
		}
		case 1:
		{
			float a, b;
			cout << "Input lenght: a= "; cin >> a;
			cout << "Input wight: b= "; cin >> b;
			AreaOfRectangle(a, b);
			system("pause");
			break;
		}
		case 2:
		{
			float a, b, c;
			cout << "Input edge: a= "; cin >> a;
			cout << "Input edge: b= "; cin >> b;
			cout << "Input edge: c= "; cin >> c;
			AreaOfTriangle(a, b, c);
			system("pause");
			break;
		}
		case 3:
		{
			float r;
			cout << "Input radius: r= "; cin >> r;
			AreaOfCircle(r);
			system("pause");
			break;
		}
		}


	} while (select);
}
