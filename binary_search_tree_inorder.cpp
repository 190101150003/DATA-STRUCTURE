# include<iostream>
 
    using namespace std;

    struct Node{
	
	 int data;
	
	struct Node* left;
	struct Node* right;
	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
		
	}
	
};


void inorder(struct Node* root){
	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	
	inorder(root->right);
	
}
int main ()
{
	struct Node* root = new Node(12);
	root->left = new Node (6);
	root->right =new Node (10);
	root->left->left=new Node(7);
	root->left->right=new Node(8);
	root->right->left=new Node(9);
	root->right->right=new Node(11);
	
	inorder(root);
	return 0; 
}
