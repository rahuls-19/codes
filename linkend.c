#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* link;
	};
struct node* head = NULL;
int insert (int x){
	struct node* p;
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp->link = NULL;
	if(head==NULL){
		head=temp;
		}
	else{
		p=head;
		while(p->link!=NULL){
			p=p->link;
			}
		p->link=temp;
		
	}
}
void print(){
	struct node* temp;
	temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
int main(){
	int n,i,x;
	head;
	printf("Please Enter number of element to be inserted\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter the number to be inserted\n");
		scanf("%d",&x);
		insert(x);
		print();
	}
return 0;
}
