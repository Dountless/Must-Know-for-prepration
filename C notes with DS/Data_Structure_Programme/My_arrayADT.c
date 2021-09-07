			/* Dountless Array ADT(Abstract Data Type) Programme */
#include<stdio.h>
#include<stdlib.h>
/* CREATE A MEMORY BLOCK TO HOLD ARRAY META INFORMATION*/

typedef struct arrayADT
{
	int capacity;
	int lastIndex;
	int *ptr;
}AADT;

/* CREATE ARRAY AT A GIVEN SIZE*/

AADT*createADT(int cap)
{
	AADT*arr;
	arr=(AADT*)malloc(sizeof(AADT));
	arr->capacity=cap;
	arr->lastIndex=-1;
	arr->ptr=(int*)malloc(sizeof(int)*arr->capacity);
	return arr;
}

/* RETRIVE A PARTICULAR ITEM FROM GIVEN INDEX*/

int getItem(AADT*arr,int index)
{
	if(index<0 || index>arr->lastIndex)
		return -1;
	else
		return arr->ptr[index];
}

/*STORE AN ITEM AT GIVEN INDEX*/

void setItem(AADT*arr,int index,int item)
{	
	int i;
	if(index>arr->capacity-1)
		printf("\nOverflow\n");
	else if(index<0 || index>arr->lastIndex+1)
		printf("\nInvalid Index");
	else
	{
		arr->lastIndex=arr->lastIndex+1;
		i=arr->lastIndex;	
		while(i!=index)
		{
			arr->ptr[i]=arr->ptr[i-1];
			i--;
		}
		arr->ptr[index]=item;
	}
}

/* UPDATE DATA IN ARRAY */ 
  
void editItem(AADT*arr, int index,int item)
{
	if(index<0 || index>arr->lastIndex)
		printf("Invaid index");
	else
	{
		arr->ptr[index]=item;
		printf("\n\nUpdate uccessfully");
	}
}

/*COUNT NO. OF DATA IN ARRAY*/

int countItem(AADT*arr)
{
	return arr->lastIndex+1;
}

/*REMOVE DATA IN ARRAY*/

void removeItem(AADT*arr,int index)
{
	printf("%d\n\n",index);
	if( index<0 || index>arr->lastIndex)
		printf("\n\nInvalid index");
	if(index<arr->lastIndex)
	{
		int i=index;
		while(i!=arr->lastIndex)
		{
			arr->ptr[i]=arr->ptr[i+1];
			i++;
		}
		arr->lastIndex=arr->lastIndex-1;
	}	
	if(index==arr->lastIndex)
		arr->lastIndex=arr->lastIndex-1;
}

/* SEARCH ITEM IN ARRAY...*/

void searchItem(AADT*arr,int item)
{
	int n,i,l,u,m,flag=0;
	n=arr->lastIndex;
	/* sorting*/
	for(int r=0;r<n-1;r++)
	{
		for(int c=0,t;c<n-1-r;c++)
		{
			if(arr->ptr[c]>arr->ptr[c+1])
			{
				t=arr->ptr[c];
				arr->ptr[c]=arr->ptr[c+1];
				arr->ptr[c+1]=t;
			}
		}
	}

	printf("Searching start...");
	l=0;
	u=arr->lastIndex;
	
	for(i=0;i<n;i++)
	{
		m=(l+u)/2;

		if(item==arr->ptr[m])
		{
			printf("\nsearching successfully...\n");
			printf("Your Data is %d at the index of %d",item,m);
			flag=1;
			break;
		}
		else if(item>arr->ptr[m])
			l=m;
		else
			u=m;
	}
	
	if(flag==1)
		printf("\nsearching successfully...\n");
	else
		printf("\nsuccess unsuccessfully..\n");
	

}

/* SORT ARRAY */

void sortItem(AADT*arr)
{
	int r;
	for(int r=0;r<arr->lastIndex;r++)
        {
                for(int c=0,t;c<arr->lastIndex-r;c++)
                {
                        if(arr->ptr[c]>arr->ptr[c+1])
                        {
                                t=arr->ptr[c];
                                arr->ptr[c]=arr->ptr[c+1];
                                arr->ptr[c+1]=t;
                        }
                }
        }

	printf("\n Your Array is sorted you can see threw menu option...\n");
}



/* PRINT ARRAY*/

void printArray(AADT*arr)
{
	int i;
	if(arr->lastIndex==-1)
		printf("\nArray is Empty..\nGo to menu and select 1. to set item in array...\n");
	else
	{
		for(i=0;i<countItem(arr);i++)
			printf("%d\t",getItem(arr,i));
	}
}
			
	
	

int main()
{
	AADT*arr;
	int index;
	int cap,choice,item;
	printf("\nEnter size of array:->");
	scanf("%d",&cap);
	arr=createADT(cap);
	while(1)
	{
		printf("\n\n\t\t\t\t1.Print Array");
		printf("\n\n\t\t\t\t2. setItem");
		printf("\n\n\t\t\t\t3. getItem");
		printf("\n\n\t\t\t\t4. editItem");
		printf("\n\n\t\t\t\t5. countItem");
		printf("\n\n\t\t\t\t6. removeItem");
		printf("\n\n\t\t\t\t7. searchItem");
		printf("\n\n\t\t\t\t8. sortItem");
		printf("\n\n\t\t\t\t9. Exit");
		printf("\n\nEnter Your Choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printArray(arr);
				break;
			case 2:
				printf("\nEnter Item to set in array:->");
				scanf("%d",&item);
				printf("\nEnter a index no. where to store data");
				scanf("%d",&index);
				setItem(arr,index,item);
				break;
			
			case 3:
				printf("Enter a Index no. to get value:->");
				scanf("%d",&index);
				if(arr->lastIndex==-1)
					printf("\nArray is Empty..\nGo to menu and select 1. to set item in array...\n");
				else
				{
					item=getItem(arr,index);
					if(item==-1)
						printf("\nInvalid Index...\n");
					else
						printf("\nYour item is:->%d",item);
					
				}
				break;

					
			case 4:
				printf("\nEnter data to update:->");
				scanf("%d",&item);
				printf("Enter index no. where to update:->");
				scanf("%d",&index);
				editItem(arr,index,item);
				break;
			case 5:
				printf("\n\nYou have %d data in array",countItem(arr));
				break;
				
		
			case 6:
				printf("\nEnter a index no. to remove data:->");
				scanf("%d",&index);
				removeItem(arr,index);
				break;
			case 7:
				printf("\nEnter Item You want to search :->");
				scanf("%d",&item);
				searchItem(arr,item);
				break;
			case 8:
				sortItem(arr);
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("\n\nInvalid Entry...");
				
		}
	}
	return 0;
}

		
