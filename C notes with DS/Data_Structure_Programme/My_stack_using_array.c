#include<stdio.h>
#include<stdlib.h>
typedef struct ArrayStack
{
	int top;
	int capacity;
	int *array;
}arrStack;


int isFull(arrStack*stack)
{
	if(stack->top==stack->capacity-1)
		return 1;
	else
		return 0;
}

int isEmpty(arrStack*stack)
{
	if(stack->top==-1)
		return 1;
	else
		return 0;
}



/* FUNCTION TO CREATE AND RETURN ADDRESS OF STACK BLOCK */

arrStack*createStack(int cap)
{
	arrStack*stack;
	stack=(arrStack*)malloc(sizeof(arrStack));
	stack->top=-1;
	stack->capacity=cap;
	stack->array=(int*)malloc(sizeof(int)*stack->capacity);
	return stack;
}

int PUSH(arrStack*stack,int item)
{
	if(!isFull(stack))	
	{
		stack->top=stack->top+1;
		stack->array[stack->top]=item;
		printf("\nPUSH SUCCESSFULLY...\n");
		return 1;
	}
	return -1;
}

int POP(arrStack*stack)
{
	int pop;
	if(!isEmpty(stack))
	{
		pop=stack->array[stack->top];
		stack->top=stack->top-1;
		return pop; 

	}
	return -1;
	
}

int peek(arrStack*stack,int index)
{
	if(index>stack->top && index<=stack->capacity-1)
	{
		return -1;
	}
	else if(index<0||index>stack->capacity-1)
	{
		printf("\nInvalid Index\n");
		return -1;
	}
	else
		return stack->array[index];
}

void displayItem(arrStack*stack)
{	
	if(!isEmpty(stack))
	{
		for(int i=0;i<=stack->top;i++)
			printf("\n%d\t",stack->array[i]);
	}
	else
		printf("\nstack is Empty...\n");
}





		


int main()
{
	arrStack*stack;
	int cap,choice,item,value,index;
	printf("Enter Size of Array:->");
	scanf("%d",&cap);

	/* CREATE STACK */

	stack=createStack(cap);
	while(1)
	{
		printf("\n\n\t\t\t\t1. PUSH element ");
		printf("\n\n\t\t\t\t2. POP element ");
		printf("\n\n\t\t\t\t3. PEEK(get data by index)");
		printf("\n\n\t\t\t\t4. display stack elements");
		printf("\n\n\t\t\t\t5. exit\n\n");
		
		printf("Enter choice:->");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:

				printf("\nEnter item to push in stack:->");
				scanf("%d",&item);
				
				value=PUSH(stack,item);
				if(value==-1)
					printf("Stack is Full...");

				break;	
			case 2:
				item=POP(stack);
				if(item==-1)
					printf("\nStack is empty...\n");
				else
					printf("Your POP data is:->%d",item);
				break;
			case 3:
				
				printf("\nEnter a index number:->");
				scanf("%d",&index);
				item=peek(stack,index);
				if(item==-1)
	                        	printf("\nData not found at %d index",index);
				else
					printf("Your data is:->%d",item);
				break;
			case 4:	
				displayItem(stack);
				break;
			case 5:
				exit(0);

			default:
				printf("\nInvalid Index\n");
				break;
		}	
	}
	return 0;
}	
		
				
