// C program to demonstrate insert
// operation in binary
// search tree.
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct node {
    char name[10];
	int key;
	struct node *left, *right;
};

// A utility function to create a new BST node
struct node* newNode(char *name,int item)
{
	struct node* temp= (struct node*)malloc(sizeof(struct node));
	temp->key = item;
    strcpy(temp->name,name);
	temp->left = temp->right = NULL;
	return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%d %s\n", root->key,root->name);
		inorder(root->right);
	}
}

/* A utility function to insert
a new node with given key in
* BST */
struct node* insert(struct node* node,char *name, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return newNode(name,key);

	/* Otherwise, recur down the tree */
	if (key < node->key)
		node->left = insert(node->left,name, key);
	else if (key > node->key)
		node->right = insert(node->right,name, key);

	/* return the (unchanged) node pointer */
	return node;
}

// Driver Code
int main()
{
	/* Let us create following BST
			50
		/	 \
		30	 70
		/ \ / \
	20 40 60 80 */
	struct node* root = NULL;
	root = insert(root,"the", 50);
	insert(root,"a", 30);
	insert(root,"adfa", 20);


	// print inoder traversal of the BST
	inorder(root);

	return 0;
}