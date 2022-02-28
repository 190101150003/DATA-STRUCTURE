//  traversal of a linked list
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}

// Driver code
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	// allocate 3 nodes in the heap
	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 5; // assign data in first node
	head->next = second; // Link first node with second

	second->data = 7; // assign data to second node
	second->next = third;

	third->data = 9; // assign data to third node
	third->next = NULL;

	printList(head);

	return 0;
}



