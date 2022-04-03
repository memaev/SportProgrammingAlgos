//binary tree structure

#include <bits/stdc++.h>
using namespace std;

struct node{
	int val; //data in these node
	struct node* left; //pointer to the left child
	struct node* right; //pointer to the right child

	node(int value){
		this->val = value;
		
		//in default pointers to the left and right child are null
		left = NULL; 
		right = NULL;
	}
};

//recursive function to print all binary tree
void print(node* p){
	cout << "Cur: " << p-> val << ", left: "
	       	<< ((p->left!=NULL)?to_string((p->left->val)):"null") << ", right: " 
		<< ((p->right!=NULL)?to_string((p->right->val)):"null") << endl;
	if (p->left!=NULL) print(p->left);
	if (p->right!=NULL) print(p->right);
}

node* add(node* root, int value){
	if (root==NULL) root=new node(value);
	else if (value<=root->val){
		root->left = add(root->left, value);
	}
	else{
		root->right = add(root->right, value);
	}
	return root;
}

signed main(){
	
	struct node* root = new node(5);
	root = add(root, 10);
	root = add(root, 1);
	root = add(root, -1);
	root = add(root, 4);

	print(root);

	return 0;
}

