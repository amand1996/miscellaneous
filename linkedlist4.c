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
	NODE* temp2 =NULL;
	NODE* head1;
	
	do{
		if(head==NULL){
			temp = (NODE*)malloc(sizeof(NODE));
			printf("Enter a number\n");
			scanf("%d", &n);
			temp->data = n;
			temp->next = NULL;
			head=temp;
		}
		else{
			temp2=temp;
			temp = (NODE*)malloc(sizeof(NODE));
			printf("Enter a number\n");
			scanf("%d", &n);
			temp->data = n;
			temp->next = NULL;
			temp2->next=temp;
		}
		printf("Press 1 to enter more numbers, else, press 0:\n");
		scanf("%d", &op);
	}while(op==1);
	int count=0;
	temp=head;
	while(temp1!=head){
		temp=head;
		
	while(temp->next!=NULL){
			temp1=temp;
			temp = temp->next;
		}
		if(count==0){
			head1 = temp;
			count++;
		}
		temp->next = temp1;
		temp1->next=NULL;
	}
	
		
		head = head1;
	
	printf("The list is as follows\n");
	temp1=head;
	while(temp1!=NULL){
		printf("%d ", temp1->data);
		temp1 = temp1->next;
	}
	printf("\n");
	return 0; 
	
}
