#include<stdio.h>
int main(){
	struct node{
		int data;
		struct node* next;
	};
	
	typedef struct node NODE;
	NODE* head=NULL, temp=NULL, temp1= NULL;
	int k;
	do{
		temp = (NODE*)malloc(sizeof(NODE));
		if(head == NULL){
			head = temp;
			printf("Enter a number to push: ");
			scanf("%d", temp->data);
			temp->next == NULL;
		}
		else{
			temp->next = head;
			head = temp;
			printf("Enter a number to push: ");
			scanf("%d", temp->data);
		}
		printf("Press 1 to continue adding: ");
		scanf("%d", &k);
	}while(k==1);
	
	temp = head;
	
	while(temp!=NULL){
		int n = temp->data;
		printf("%d\t", n);
		temp = temp->next;
	}
	
	return 0;
}
