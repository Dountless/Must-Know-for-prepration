#include<stdio.h>
#include<stdlib.h>

/* CREATE ARRAY OF QUEUE */

typedef struct
{
	int front,rear;
	int capacity;
	int *array;
}QUEUE;


QUEUE*createQueue(QUEUE*Q,int cap)
{
	Q=(QUEUE*)malloc(sizeof(QUEUE));
	Q->front=-1;
	Q->rear=-1;
	Q->capacity=cap;
	Q->array=(int*)malloc(sizeof(int)*Q->capacity);
	return Q;
}

/* CHECK QUEUE IS FULL OR NOT */

int isFull(QUEUE*Q)
{
	if((Q->rear+1)%(Q->capacity)==Q->front)
		return 1;
	return 0;
}


/*CHECK QUEUE IS EMPTY OR NOT */
		
int isEmpty(QUEUE*Q)
{
	
	if(Q->front==-1 && Q->rear==-1)
		return 1;
	return 0;
}


/* INSERT DATA IN QUEUE */

int enQueue(QUEUE*Q,int item)
{
	if(isFull(Q))
		return 0; 
	/* INCREMENT FRONT AND REAR IF EMPTY*/	
	else if(isEmpty(Q))
	{
		Q->front=Q->rear=0;
		Q->array[Q->rear]=item;
		return 1;
	}
	/* ADDED ELEMENT */
	else
	{
		Q->rear=(Q->rear+1)%(Q->capacity);
		Q->array[Q->rear]=item;
		return 1;	
	}

}

/* DELETE ELEMENT IN QUEUE */
int deQueue(QUEUE*Q)
{
	if(isEmpty(Q))
		return 0;
	 
	/* CHECK LAST ELEMENT AND DELETED */

	else if(Q->front==Q->rear)
	{
		Q->front=Q->rear=-1;
		printf("\nlast element int Queue is  Deleted\n");
		return 0;
	}
	/* DELETED ELEMENT IN FRONT */

	else
	{
		Q->front=(Q->front+1)%(Q->capacity);
		return 1;
	}
}



/* SHOW DATA IN FRONT OF QUEUE */

void peek(QUEUE*Q)
{
	if(isEmpty(Q))
		printf("Queue is Empty...");
	else
	     printf("\n%d\n", Q->array[Q->front]);
}

/* DISPLAY ALL ELEMENT IN QUEUE */
void displayQueue(QUEUE*Q)
{
	
	int i=Q->front;
	if(isEmpty(Q))
		printf("Queue is Empty...");
	else
	{
		
		printf("\n\n\n\n");

		for(i;i!=Q->rear;i=(i+1)%(Q->capacity))
			printf("%d\t",Q->array[i]);
		printf("%d\t",Q->array[i]);
		printf("\n\n\n\n");
		sleep(4);
	}

}
	
				

int main()
{	
	int capacity,choice,item,temp;
	QUEUE*Q;
	printf("Enter Size Of Queue:->");
	scanf("%d",&capacity);
	Q=createQueue(Q,capacity);
	while(1)
	{
		sleep(1);
		system("clear");
		printf("\n\t\t\t1.Insert Data in Queue");
		printf("\n\t\t\t2.delete Data in Queue");
		printf("\n\t\t\t3.display front Data in Queue");
		printf("\n\t\t\t4.display all  Data in Queue\n");
		printf("\n\t\t\t5.Check full or noy Queue\n");
		printf("\n\t\t\t6.exit\n");
		printf("\n\t\t\tEnter Your Choice:->");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				
				printf("\nEnter data to add in Queue:->");	
				scanf("%d",&item);
				temp=enQueue(Q,item);
				if(temp==1)
					printf("Added Successfully\n");
				else
					printf("\nOverflow\n");

				break;
			case 2:
				
	
				temp=deQueue(Q);
				if(temp==1)
					printf("\nData deleted...\n");
				else
					printf("\nQueue is Empty...\n");
				break;
			case 3:
				peek(Q);
				break;	
							
			case 4:
				displayQueue(Q);
				break;
			case 5:
				temp=isFull(Q);
				if(temp==1)
					printf("\n\nqueue is full\n\n");
				break;
			case 6:
				exit(0);
				break;
			
			default:
				printf("\nInvalid Choice...\n");
		}
	}
	return 0;
}

			
	
				
				
	
