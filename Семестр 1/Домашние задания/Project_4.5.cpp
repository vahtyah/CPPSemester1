#include <bits/stdc++.h>
using namespace std;
#define WIDTH 60
#define HEIGHT 20
#define X WIDTH/2
#define Y HEIGHT/2
#define MaxX WIDTH-X
#define MinX -(WIDTH-X)
#define MaxY HEIGHT-Y
#define MinY -(HEIGHT-Y)

char PosPoint[WIDTH][HEIGHT];

void Graph()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			PosPoint[j][i] = ' ';
		}
	}
	for (int i = 0; i < HEIGHT; i++)
	{
		PosPoint[X][i] = '|';
	}
	for (int j = 0; j < WIDTH; j++)
	{
		PosPoint[j][Y] = '-';
	}
	PosPoint[X][Y] = '+';
}

void Init_Graph(int x, int y)
{
	if (x > MaxX && x<MinX || y>MaxY && y < MinY)
	{
		return;
	}
	PosPoint[x + X][Y - y] = '*';
}

void Show_Graph()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			putchar(PosPoint[j][i]);
		}
		putchar('\n');
	}
}

int main()
{
	Graph();
	for (float i = -3.14159; i < 3.14159; i+=0.1)
	{
		float j = sin(i);
		Init_Graph(rintf(i * 7), rintf(j * 9));
	}
	Show_Graph();
	return 0;
}
