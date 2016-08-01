#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main(){
	struct node{
		int data;
		struct node *next;
	};
	int n;
	int op;
	typedef struct node NODE;
	
	NODE* head = NULL;
	NODE* temp = NULL;
	NODE* temp1 = NULL;
	
	do{
		if(head==NULL){
			temp = (NODE*)malloc(sizeof(NODE));
			printf("Enter a number\n");
			scanf("%d", &n);
			temp->data = n;
			temp->next = NULL;
			head = temp;
		}
		else{
			temp = (NODE*)malloc(sizeof(NODE));
			printf("Enter a number\n");
			scanf("%d", &n);
			temp->data = n;
			temp->next = head;
			head = temp;
		}
		printf("Press 1 to enter more numbers, else, press 0:\n");
		scanf("%d", &op);
	}while(op==1);
	
	printf("The list is as follows\n");
	temp1=head;
	while(temp1!=NULL){
		printf("%d ", temp1->data);
		temp1 = temp1->next;
	}
	return 0; 
	
}
