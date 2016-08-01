#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
int main(){
	struct node{
		int num;
		struct node *next;
	};
	
	typedef struct node NODE;
	
	NODE* head = NULL;
	NODE* head1 = NULL;
	NODE* temp = NULL;
	int n;
	int ch;
	
	do{
		if(head==NULL){
			temp= (NODE*)malloc(sizeof(NODE));
			printf("Enter the first number\n");
			scanf("%d", &n);
			temp->num = n;
			head = temp;
			temp->next=NULL;
		}
		
		else{
			temp = (NODE*)malloc(sizeof(NODE));
			printf("Enter number\n");
			scanf("%d", &n);
			temp->num = n;
			temp->next=NULL;
			head1 = head;
			while(head1->next!=NULL){
				head1 = head1->next;
			}
			head1->next=temp;
		}
		
		printf("Do you want to enter more elements: 1 or 0?\n");
		
		scanf("%d", &ch);
	}while(ch==1);
	
	printf("The elements of linked list are:\n");
	head1=head;
	while(head1->next!=NULL){
		printf("%d\n", head1->num);
		head1=head1->next;
	}
	printf("%d\n", head1->num);
	return 0;
}
