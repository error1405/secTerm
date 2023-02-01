#include <iostream>
#include <conio.h>
using namespace std;

class node
{
public:
	int data;
	node *prev;
	node *next;

	node(int val)
	{
		data = val;
		prev = NULL;
		next = NULL;
	}
};

void insert(node *&head, int val)
{
	node *newnode = new node(val);

	// if (head == NULL)
	// {
	// }
}

void main()
{
	cout << "Hello";
}