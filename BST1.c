#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct bstnode{
	int data;
	struct bstnode* left;
	struct bstnode* right;
};
typedef struct bstnode Bst;
Bst* GetnewNode(int);
Bst* Insert(Bst*, int);
int Search(Bst*, int);

void main(){
	
	Bst* root = NULL;
	root = Insert(root, 8);
	root = Insert(root, 10);
	root = Insert(root, 5);
	root = Insert(root, 12);
	root = Insert(root, 3);
	root = Insert(root, 16);
	
	printf("Search for an item: ");
	int s;
	scanf("%d",&s);
	int val = Search(root, s);
	if(val==1){
		printf("Found\n");
	}
	else{
		printf("Not Found\n");
	}
}

int Search(Bst* root,int s){
	if(root == NULL){
		return 0;
	}
	else if(s == root->data){
		return 1;
	}
	else if(s < root->data){
		Search(root->left, s);
	}
	else if(s > root->data){
		Insert(root->right, s);
	}
	
	
}

Bst* Insert(Bst* root, int data){
	if(root == NULL){
		root = GetnewNode(data);
	}
	else if(data < root->data){
		root->left = Insert(root->left, data);
	}
	else if(data > root->data){
		root->right = Insert(root->right, data);
	}
	return root;
	
}

Bst* GetnewNode(int num){
	Bst* temp = (Bst*)malloc(sizeof(Bst));
	temp->data = num;
	temp->left = temp->right = NULL;
	return temp;
}
