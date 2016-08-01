#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<queue>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

typedef struct node bst;

int min(bst*);
int height(bst*);
int max(bst*);
bst* insert(bst*, int);
bst* getNewNode(int);
using namespace std;
int main(){
	bst* root = NULL;
	root = insert(root, 8);
	root = insert(root, 6);
	root = insert(root, 7);
	root = insert(root, 14);
	root = insert(root, 26);
	root = insert(root, 32);
	
	printf("The minimum element of the series is %d\n", min(root));
	printf("The maximum element of the series is %d\n", max(root));
	printf("The height of the tree is %d\n", height(root));
	
	queue<bst*> Q;
	Q.push(root);
	while(!Q.empty()){
		bst* current = Q.front();
		int p = current->data;
		printf("%d\n", p);
		if(current->left !=NULL) Q.push(current->left);
		if(current->right !=NULL) Q.push(current->right);
		Q.pop();
	}
	
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

int height(bst* root){
	if(root==NULL){
		return -1;
	}
	
	int left_height = height(root->left);
	int right_height = height(root->right);
	int max;
	if(right_height > left_height){
		max = right_height;
	}
	else{
		max = left_height;
	}
	return max+1;
}
