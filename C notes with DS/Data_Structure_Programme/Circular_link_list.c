#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
	int info;
	struct NODE*next;
}NODE;

NODE*LAST=NULL;

NODE*createList()
{
	NODE*ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	return ptr;
}


void displayList()
{
        NODE*t;
        if(LAST==NULL)
                printf("\n\tList is Empty...\n");
        else
        {
                t=LAST->next;
		printf("\n\t[");
                do
                {
                        printf("%d ",t->info);
                        t=t->next;
                }while(t!=LAST->next);
		printf("]\n");
        }

}



void insertStartNode(NODE*ptr,int data)
{
	if(LAST==NULL)
	{
		ptr->info=data;
		ptr->next=ptr;
		LAST=ptr;
	}
	else
	{
		ptr->info=data;
		ptr->next=LAST->next;
		LAST->next=ptr;
	}
	printf("\nadded susseccfully...\n");
}

void insertLastNode(NODE*ptr,int data)
{
	if(LAST==NULL)
	{
		ptr->info=data;
		ptr->next=ptr;
		LAST=ptr;
	
	}
	else
	{
		ptr->info=data;
		ptr->next=LAST->next;
		LAST->next=ptr;
		LAST=ptr;
	}
	printf("\n\tAdded Successfully...\n");
}	

void insertAfterNode(NODE*ptr)
{
	NODE*t;
	
	int item,data;
	if(LAST==NULL)
		printf("\n\tList is Empty...\n");
	else
	{
					
		printf("Enter data to add:->");
                scanf("%d",&data);
		t=LAST;
		printf("\nYour list is...\n");
		displayList();
		printf("\n\tEnter data from list to add after:->");
		scanf("%d",&item); 	
		while(t->info!=item)
			t=t->next;
		ptr->next=t->next;
		t->next=ptr;
		ptr->info=data;
		printf("Added Successfully...\n");
	}
}


void deleteStartNode()
{
	NODE*t;
	if(LAST==NULL)
		printf("\n\tList is Empty...\n");
	else
	{
		if(LAST->next->next==LAST->next)
		{	
			t=LAST;
			LAST=NULL;
			free(t);
			printf("\nyour last element is deleted...\n");
		}
		else
		{	
			t=LAST->next;
			LAST->next=LAST->next->next;
			free(t);
			printf("\n\tDeleted Successfully at beginning...\n");
		}
	}
}

	
void deleteEndNode()
{
	NODE*t;
	if(LAST==NULL)
		printf("\nList is Empty...\n");
	else
	{
		 if(LAST->next->next==LAST->next)
                {
                        t=LAST;
                        LAST=NULL;
                        free(t);
                        printf("\nyour last element is deleted...\n");
                }
		else
		{	
			t=LAST;
			while(LAST->next!=t)
				LAST=LAST->next;
			LAST->next=t->next;
			free(t);
			printf("\n\tDeleted Successfully at End...\n");
		}	
	}
}	
		

void deleteAfterNode()
{
        NODE*t,*p;

        int item;
        if(LAST==NULL)
                printf("\n\tList is Empty...\n");
        else
        {

                t=LAST;
		p=LAST->next;
                printf("\nYour list is...\n");
                displayList();
                printf("\n\tEnter  data from list to delete :->");
                scanf("%d",&item);
		if(item==LAST->info || item==LAST->next->info)
			printf("\n\nPlease select start and end delete operation...\n");
		else
		{ 
               		 while(p->info!=item)
			{
				p=p->next;
        	                t=t->next;
			}
        	        t->next=p->next;
        	        free(p);
        	        printf("Deleted Successfully...\n");
        	}
	}
}	

	
int main()
{

	NODE*n;
	int ch,data;
	while(1)
	{
		printf("\n\t\t\t1.Insert Node at beginning");
		printf("\n\t\t\t2.Insert Node at end");
		printf("\n\t\t\t3.Insert Node after data");
		printf("\n\t\t\t4.Delete Node at begning");
		printf("\n\t\t\t5.Delete Node at end");
		printf("\n\t\t\t6.Delete Node at given value ");
		printf("\n\t\t\t7.Display List...");
		printf("\n\t\t\t8.Exit...");
		printf("\n\tEnter Your Choice...");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				n=createList();
				printf("Enter data to add:->");
				scanf("%d",&data);
				insertStartNode(n,data);
				break;
			case 2:
				n=createList();
				printf("Enter data to add:_>");
				scanf("%d",&data);
				insertLastNode(n,data);
				break;
			case 3:
				n=createList();
				insertAfterNode(n);
				break;
			case 4:
				deleteStartNode();
				break;
			case 5:
				deleteEndNode();
				break;
			case 6:
				deleteAfterNode();
				break;
			case 7:
				displayList();
				break;
			default:
				printf("\n\t\tInvalid choice...\n");
				break;
		}
	}
	return 0;
}

