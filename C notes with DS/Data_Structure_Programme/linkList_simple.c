#include<stdio.h>
#include<stdlib.h>


/* DEFINE NODE */

typedef struct NODE
{
        int info;
        struct NODE*link;
}NODE;

NODE*START=NULL;

/* View List */

int viewList()
{
    NODE*t;
    t=START;
    if(START==NULL)
	   return -1;
    else
    {
        printf("\n[ ");
        while(t->link!=NULL)
        {
              printf("%d ",t->info);
              t=t->link;
        }
        printf("%d ]\n\n",t->info);
 
    }
 }



/* CREATE NODE */

NODE*createNode()
{
	NODE*n;
	n=(NODE*)malloc(sizeof(NODE));
	return n;
}

/* INSERT NODE  at end of list */

int insertEndNode(int data)
{
	NODE*ptr,*t;
	ptr=createNode();
	ptr->info=data;
	ptr->link=NULL;
	
	if(START==NULL)
		START=ptr;
	else
	{
		t=START;
		while(t->link!=NULL)
			t=t->link;
		t->link=ptr;
	}
	return 1;
}

/* INSERT NODE AT STARTING  */

int insertStartNode(int data)
{
	NODE*ptr;
	ptr=createNode();
	ptr->info=data;
	ptr->link=NULL;
	if(START==NULL)
		START=ptr;
	else
	{
		ptr->link=START;
		START=ptr;
	}
	return 1;
};

int insertAfterNode(int data)
{
	NODE*ptr,*t,*s;
	int item,check;
	ptr=createNode();
	ptr->info=data;
	ptr->link=NULL;
	printf("\n\tYour list is...\n\n");
	check=viewList();
	if(check==-1)
		return -1;
	printf("\n\tEnter data in given list for after add new data:->");
	scanf("%d",&item);
	
	t=START;
	if(START==NULL)
		printf("\n\t\tNo one node here...\n");
	else
	{
		while(t->info!=item)
			t=t->link;
		s=t->link;
		t->link=ptr;
		ptr->link=s;
		printf("\nAdded successfully...\n");
	}

}

		

/* Delete Starting Node */ 

void deleteStartNode()
{
	NODE*r;
	r=START;
	if(START==NULL)
		printf("\nList is Empty...\n");
	else
	{
		START=START->link;
		printf("\n\t%d is deleted at strarting position...\n",r->info);
		free(r);
		
	}
}

/* Delete END node */ 

void deleteEndNode()
{
	NODE*temp,*prev;
	temp=START;
	if(START==NULL)
		printf("\n\tList is Empty...\n");
	else
	{
		while(temp->link!=NULL)
		{
			prev=temp;
			temp=temp->link;
		}
		if(START==temp)
		{
			START=NULL;
			printf("\n\t%d is deleted at strarting position...\n",temp->info);
			free(temp);
		}
		else
		{
			prev->link=NULL;
			printf("\n\t%d is deleted at strarting position...\n",temp->info);
			free(temp);
		}

	}
}

/* Delete Given Node */

void deleteGivenNode()
{
	NODE*t,*p;	
	int check,item;
	check=viewList();		
	if(check==-1)
	{
		printf("\n\nList is empty nodata...\n\n");
		START==NULL;
	}
	else	
	{
		t=START;
		printf("\n\tEnter data from list to delete...\n");
		scanf("%d",&item);
	 	while(t->info!=item)
		{
			p=t;
			t=t->link;
		}
		if(START==t)
		{
			START=t->link;	
			//if(START==p)
			//	START=NULL;
			printf("\n\t%d is deleted at strarting position...\n",t->info);
			free(t);
		}
		else
		{
			p->link=t->link;
			printf("\n\t%d is deleted at strarting position...\n",t->info);
			free(t);
		}
	}
}
		

/* Length of linklist */

void getLength()
{
	NODE *temp;
	int count=0;
	temp=START;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	printf("\nLength of List is %d\n",count);
}

/* Reverse list by itrative method */ 

void reverseList()
{

	NODE*prev,*temp,*next;
	prev=NULL;
	temp=next=START;
	if(START==NULL)
		printf("\nList is Empty...\n");
	else
	{
		while(temp!=NULL)
		{
			next=next->link;
			temp->link=prev;
			prev=temp;
			temp=next;
		}
		START=prev;
		printf("\n\nReverse Successfully...\n\n");
	}
}	
		

int main()
{
	int ch,data,check;
	while(1)
	{
		system("clear");
		printf("\n\t\t\t0.Insert Start Node .\n");
		printf("\n\t\t\t1.Insert End Node .\n");
		printf("\n\t\t\t2.Insert node after given data\n");
		printf("\n\t\t\t3.Delete Starting Node.\n");
		printf("\n\t\t\t4.Delete End Node.\n");
		printf("\n\t\t\t5.Delete Given Node.\n");
		printf("\n\t\t\t6.View List\n");
		printf("\n\t\t\t7.Get Length of list\n");
		printf("\n\t\t\t8.Reverse list\n");
		printf("\n\t\t\t9.Exit\n");
		printf("\n\nEnter Your Choice:->");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 0:
				printf("\nEnter data:->");
				scanf("%d",&data);
				check=insertStartNode(data);
				if(check==1)
					printf("\n\t\tAdded Successfully...\n");
				sleep(1);
				continue;
			case 1:
					printf("\nEnter data:->");
				scanf("%d",&data);
				check=insertEndNode(data);
				if(check==1)
					printf("\n\t\tAdded Successfully...\n");
				sleep(1);
				continue;
			case 2:
				printf("Enter data:->");
				scanf("%d",&data);
				check=insertAfterNode(data);
				if(check==-1)
					printf("\n\tYour list is empty...\n");
			
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
				check=viewList();
				if(check==-1)
					printf("\n\tList is Empty...\n");
	
				break;
			case 7:
				getLength();
				break;
			case 8:
				reverseList();
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\n\tINVALID CHOICE...\n");
		}
		sleep(2);
	}
	return 0;
}
			
