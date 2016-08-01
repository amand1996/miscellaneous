#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

typedef struct node bst;

int min(bst*);
int max(bst*);
bst* insert(bst*, int);
bst* getNewNode(int);

int main(){
	bst* root = NULL;
	root = insert(root, 8);
	root = insert(root, 10);
	root = insert(root, 43);
	root = insert(root, 14);
	root = insert(root, 26);
	root = insert(root, 32);
	
	printf("The minimum element of the series is %d\n", min(root));
	printf("The maximum element of the series is %d\n", max(root));
	return 0;
}

bst* getNewNode(int num){
	bst* root = (bst*)malloc(sizeof(bst));
	root->right = root->left = NULL;
	root->data = num;
	return root;
}

bst* insert(bst* root, int num){
	if(root == NULL){
		root = getNewNode(num);
	}
	
	else if(num < root->data){
		root->left = insert(root->left, num);
	}
	else if(num > root->data){
		root->right = insert(root->right, num);
	}
	return root;
}

int min(bst* root){
	while(root->left!=NULL){
		root = root->left;
	}
	return root->data;
}

int max(bst* root){
	while(root->right!=NULL){
		root = root->right;
	}
	return root->data;
}
