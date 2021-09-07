#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct arrayStack
{
	int top;
	int capacity;
	int *array;
}arrayStack;



void PUSH(arrayStack*stack,char item)
{
	stack->top=stack->top+1;
	stack->array[stack->top]=item;
}

char POP(arrayStack*stack)
{
	int pop;
	pop=stack->array[stack->top];
	stack->top=stack->top-1;
	return pop;
}

/*CHECK THE PRECEDENCE OF OPERATOR */ 

int precedence(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
			return 2;
			break;
		case '*':
		case '/':
		case '%':
			return 3;
			break;
		case '(':
		case ')':
			return 1;
			break;
	}
}

/*CHECK WHETHER THE SYMBOL IS OPERATOR ?*/

int isOperator(char symbol)
{
	switch(symbol)
	{
		case '+':
		case '-':
		case '*':
		case '/':
		case '%':
		case '(':
		case ')':
			return 1;
			break;
		default:
			return 0;
	}
}



/* CREATE STACK */

arrayStack*createStack(int cap)
{
	arrayStack*stack;
	stack=(arrayStack*)malloc(sizeof(arrayStack));
	stack->top=-1;
	stack->capacity=cap;
	stack->array=(int*)malloc(sizeof(int)*stack->capacity);
	return stack;
}



char EvaluatePostfix(arrayStack*stack,char*P)
{
	/*Find last index*/
	int i,j=0,a,b,c,k;
	for(i=0;*(P+i)!='\0';i++);

	/* STEP 1 */
	P[i]=')';

	/* STEP -> 2 */
	
	for(k=0;P[k]!=')';k++)
	{
			if(isOperator(P[j])==0)
			{
				PUSH(stack,P[j]);
				j++;
			}
			else
			{
				if(P[j]!=')' )
				{
					if(P[j]!='(')
					{
						a=POP(stack)-'0';
						b=POP(stack)-'0';

						 switch(P[j])
					        {
					                case '+':
								c=b+a;
								PUSH(stack,c+'0');
								break;							
					                case '-':
								c=b-a;
								PUSH(stack,c+'0');	
								break;
						        case '*':
								c=b*a;
								PUSH(stack,c+'0');
								break;
					                case '/':
								c=b/a;
								PUSH(stack,c+'0');
								break;
					                case '%':
								c=b%a;			
								PUSH(stack,c+'0');
								break;
        					}
						
					}
					j++;
				}
		
			}
	}
	return stack->array[stack->top];
	
}

int main()
{
	char symbol;
	int i=0,j=0,result;
	char Q[50];
	char P[45];
	arrayStack*stack;
	stack=createStack(45);
	
	printf("\nEnter expression in character:->");
	scanf("%s",Q);
	/*STEP->1*/

	PUSH(stack,'(');
	Q[strlen(Q)]=')';
	

	/*STEP:->2*/
	while(stack->top!=-1)
	{
		symbol=Q[i];
		
		/* step->3 */

		if(isOperator(symbol)==0)
		{
				P[j]=symbol;
				j++;
		}
		else
		{
			/* step->4*/
			if(symbol=='(')
			{
				PUSH(stack,symbol);
			}
			else
			{
				/* step-> 6 */ 
				if (symbol==')')
				{
					while(stack->array[stack->top]!='(')
					{
						P[j]=POP(stack);
						j++;
					}
					POP(stack);
				}
			
			/* STEP -> 5 */ 
				else
				{
					if(precedence(symbol)>precedence(stack->array[stack->top]))
					{
                                        	PUSH(stack,symbol);
					}
					else
					{
						while(stack->array[stack->top]!='(')
               					{
                                			//if(precedence(stack->array[stack->top])>=precedence(symbol))
                                			//{
                                			        P[j]=POP(stack);
                                			        j++;
                               				 //}
	                           	 	}
						PUSH(stack,symbol);
					 }
                                }
                        }

		}
		i++;
			
	}
	
	P[j]='\0';

	printf("\nYour Postfix Expression is:-> ");
	
	for(i=0;P[i]!='\0';i++)
		printf("%c",P[i]);
	printf("\n");

	

	result=EvaluatePostfix(stack,P)-'0';
	printf("\nyour result is:->%d",result);
	return 0;
}

	
	
			
				
			
