#include <iostream>
#include <conio.h>
// using namespace std;

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

	if (head == NULL)
	{
		head = newnode;
		head->prev = NULL;
	}
	else
	{
		node *temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
		newnode->next = NULL;
	}
}

void display(node *&head)
{

	for (node *temp = head; temp != NULL; temp = temp->next)
	{
		std::cout << temp->data << " ";
	}
	// while (temp->next != NULL)
	// {
	// 	temp = temp->next;
	// }
}

int main()
{
	node *head = NULL;
	std::cout << "Doubly Linked List" << std::endl;

	insert(head, 1);
	insert(head, 2);
	insert(head, 3);

	display(head);
}