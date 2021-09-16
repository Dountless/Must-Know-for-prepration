#include<stdio.h>
#include<stdlib.h>
typedef struct NODE
{
	int info;
	struct NODE*prev,*next;
}NODE;

NODE*START=NULL;

NODE*createNode()
{
	NODE*n;
	n=(NODE*)malloc(sizeof(NODE));
	n->prev=n->next=NULL;
	return n;
}


void viewList()
{
        NODE*t;
        t=START;
        if(START==NULL)
                printf("\nList is Empty...\n");
        else
        {
                printf("\n[");
                while(t!=NULL)
                {
                        printf("%d ",t->info);
                        t=t->next;
                }
                printf("]\n");
        }
}


void insertStartNode()
{
	NODE*n;
	int data;
	n=createNode();
	printf("\nEnter data:->");
	scanf("%d",&data);
	n->info=data;
	if(START==NULL)
		START=n;
	else
	{
		START->prev=n;
		n->next=START;
		START=n;
	}
}

void deleteStartNode()
{
	NODE*r;
       	r=START;
	if(START==NULL)
		printf("\nList is Empty...\n");
	else
	{
		if(START->next==NULL)
		{
			START=NULL;
			free(r);
		}
		else
		{
			START=START->next;
			START->prev=NULL;
			printf("\n%d data is deleted",r->info);
			free(r);
		}
	
	}
}

void deleteEndNode()
{
	NODE*t,*p;
	t=START;
	if(START==NULL)
		printf("\nList Is Empty...\n");
	else
	{
			while(t->next!=NULL)	
			{
				p=t;
				t=t->next;
			}
			if(t->prev==NULL)
			{
				START=p=NULL;
				printf("\n\n\tLast element is deleted..\n\n");
				free(t);
			}
			else
			{
				p->next=NULL;
				printf("\n\tDeleted Successfully...\n");
				free(t);
			}
	}
	
}


void deleteGivenNode()
{
	NODE*t;
	int data;
	t=START;
	printf("\n\tYour List is :-> ");
	viewList();
	if(START==NULL)
		printf("\n\n\tList is Empty...\n");
	else
	{
		printf("\nEnter data from list to delete:->");
		scanf("%d",&data);
		while(t->info!=data)
			t=t->next;
		if(t->next==NULL||t->prev==NULL)
			printf("\n\n\t\tPlese apply end or starting  Operation to delete...\n");
		else
		{
			t->prev->next=t->next;
			t->next->prev=t->prev;
			free(t);
		}
	}
}
			

void insertEndNode()
{
	NODE*n,*t;
	int data;
	n=createNode();
	printf("\n\tEnter data to add:->");
	scanf("%d",&data);
	n->info=data;
	if(START==NULL)
		START=n;
	
	else
	{
		t=START;
		while(t->next!=NULL)
			t=t->next;
		t->next=n;
		n->prev=t;
	}
	printf("\n\t\tAdded SuccessFully...\n");
}

void insertAfterNode()
{
        NODE*n,*t;
        int data,item;
        n=createNode();
        if(START==NULL)
                printf("\n\tList is Empty so apply Starting and End Operation to add..\n\t");

        else
        {
 
        	printf("\n\tEnter data to add:->");
	        scanf("%d",&data);
        	n->info=data;
		viewList();
		printf("\n\tEnter data from list to add after:->");
		scanf("%d",&item);
                t=START;
                while(t->info!=item)
                        t=t->next;
		if(t->next==NULL)
			printf("\n\tplease apply end or starting operation to add...\n");
		else
		{
               		 t->next->prev=n;
			 n->next=t->next;
	                 n->prev=t;
			t->next=n;
        	        printf("\n\t\tAdded SuccessFully...\n");
		}
		
                
        }
}
		


int main()
{
	int ch;
	while(1)
	{
		printf("\n1.Insert Node\n");
		printf("\n2.View Node\n");
		printf("\n3.delete starting  Node\n");
		printf("\n4.delete End Node\n");
		printf("\n5.delete node at given data\n");
		printf("\n6.Insert Node at end...\n");
		printf("\n7.Insert After Node ..\n");
		printf("Enter Your Choice:->");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertStartNode();
				break;
			case 2:
				viewList();
				break;
			case 3:
				deleteStartNode();
				break;
			case 4:
				deleteEndNode();
				break;
			case 5:
				deleteGivenNode();
				break;
			case 6:
				insertEndNode();
				break;
			case 7:
				insertAfterNode();
				break;
			default:
				printf("\nINVALID CHOICE\n");
		}
	}
	return 0;
}










	


		
