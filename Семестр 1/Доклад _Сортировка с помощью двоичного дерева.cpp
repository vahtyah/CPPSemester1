#include <iostream>
using namespace std;

typedef struct Tree
{
	int data;
	Tree* pLeft, * pRight;
}TREE;

void CreateTree(TREE*& t)
{
	t = NULL;
}

void AddNode(TREE*& t, int x)
{
	if (t == NULL)
	{
		TREE* q = new TREE;
		q->data = x;
		q->pLeft = NULL;
		q->pRight = NULL;
		t = q;
	}
	else
	{
		if (x < t->data)
			AddNode(t->pLeft, x);
		else if (x > t->data)
			AddNode(t->pRight, x);
	}
}

void FindAndReplace(TREE* p, TREE* q)
{
	if (q->pLeft != NULL)
		FindAndReplace(p, q->pLeft);
	else
	{
		p->data = q->data;
		p = q;
		q = q->pRight;
	}
}

void DelNode(TREE*& t, int x)
{
	if (t == NULL)
		return;
	else
	{
		if (x > t->data)
			DelNode(t->pRight, x);
		else if (x < t->data)
			DelNode(t->pLeft, x);
		else
		{
			TREE* p = t;
			if (t->pLeft == NULL)
				t = t->pRight;
			else if (t->pRight == NULL)
				t = t->pLeft;
			else
				FindAndReplace(p, t->pRight);
			delete p;
		}
	}
}

TREE* FindNode(TREE* t, int x)
{
	if (t == NULL)
		return NULL;
	else
	{
		if (t->data > x)
			FindNode(t->pLeft, x);
		else if (t->data < x)
			FindNode(t->pRight, x);
		else return t;
	}
}

void NLR(TREE* t)
{
	if (t != NULL)
	{
		cout << t->data << " ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}

void DestroyTree(TREE*& t)
{
	if (t)
	{
		DestroyTree(t->pLeft);
		DestroyTree(t->pRight);
		delete t;
	}
}

void Menu(TREE* t)
{
	int select;
	do
	{
		system("cls");
		cout << "\n\n\t\t ===== MENU =====\n" << endl;
		cout << "\t0. Destroy Node" << endl;
		cout << "\t1. Add Node" << endl;
		cout << "\t2. NLR" << endl;
		cout << "\t3. Find Node" << endl;
		cout << "\t4.Delete Node" << endl;
		cout << "\n\t\t ===== END =====" << endl;
		cout << "Please choose: "; cin >> select;
		switch (select)
		{
		default:
			break;
		case 0:
		{
			cout << "Exit the program!" << endl;
			DestroyTree(t);
			system("pause");
			break;
		}
		case 1:
		{
			int x;
			cout << "Enter the value of the node to add: "; cin >> x;
			AddNode(t, x);
			break;
		}
		case 2:
		{
			NLR(t);
			system("pause");
			break;
		}
		case 3:
		{
			int x;
			cout << "Enter the value of the node to find: "; cin >> x;
			TREE* q = FindNode(t, x);
			if (q == NULL)
				cout << "This node does not exist!" << endl;
			else
				cout << "This node exists!" << endl;
			system("pause");
			break;
		}
		case 4:
		{
			int x;
			cout << "Enter the value of the node to delete: "; cin >> x;
			DelNode(t, x);
			break;
		}
		}
	} while (select);
}

int main()
{
	TREE* t;
	CreateTree(t);
	Menu(t);
	return 0;
}
