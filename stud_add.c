#include"header.h"
void add_end(struct st **head)
{
	struct st *newnode,*currentnode;
	newnode=(struct st*)malloc(sizeof(struct st));
	printf("enter the name:");
	scanf(" %s",newnode->n);
	printf("enter the percentage:");
	scanf("%f",&newnode->percent);
        if(*head==0)
	{
		newnode->roll_no=1;
		*head=newnode;
	}
	else
	{
	   struct st *currentnode=*head;
	   while(currentnode->next!=NULL)
		   currentnode=currentnode->next;
	   newnode->roll_no = currentnode->roll_no+1;
	    currentnode->next = newnode;
	}


}
