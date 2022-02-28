
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node
{
	public:
	int data;
	Node *next;
};
void push(Node** head_ref, int new_data) /* Given a reference (pointer to pointer)*/

{
	Node* new_node = new Node(); // 1. Allocate node

	
	new_node->data = new_data; // 2. Put in the data

	
	new_node->next = (*head_ref); // 3. Make next of new node as head

	
	(*head_ref) = new_node; // 4. Move the head to point to the 	// new node

}

/* Given a node prev_node, insert a new
node after the given prev_node */
void insertAfter(Node* prev_node,
				int new_data)
{
	if (prev_node == NULL) /* 1. Check if the given prev_node 	is NULL */
		
	{
		cout << "the given previous node cannot be NULL";
		return;
	}

	Node* new_node = new Node(); // 2. Allocate new node

	
	new_node->data = new_data; // 3. Put in the data

	new_node->next = prev_node->next// 4. Make next of new node as next // of prev_node

	prev_node->next = new_node; // 5. Move the next of prev_node 	// as new_node
}


void append(Node** head_ref,
			int new_data)
{
	// 1. Allocate node
	Node* new_node = new Node();

	// Used in step 5
	Node *last = *head_ref;

	// 2. Put in the data
	new_node->data = new_data;

	/* 3. This new node is going to be
		the last node, so make next of
		it as NULL */
	new_node->next = NULL;

	/* 4. If the Linked List is empty,
	then make the new node as head */
	if (*head_ref == NULL)
	{
		*head_ref = new_node;
		return;
	}

	// 5. Else traverse till the
	// last node
	while (last->next != NULL)
		last = last->next;

	// 6. Change the next of last node
	last->next = new_node;
	return;
}

// linked list starting from head
void printList(Node *node)
{
	while (node != NULL)
	{
		cout<<" "<<node->data;
		node = node->next;
	}
}

// Driver code
int main()
{
	// Start with the empty list
	Node* head = NULL;
	append(&head, 6); 
	push(&head, 7);
	push(&head, 1);
	append(&head, 4);
	
	
	insertAfter(head->next, 8);
	
	cout << "Created Linked list is: ";
	printList(head);
	
	return 0;
}


