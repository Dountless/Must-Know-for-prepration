#include<stdio.h>
float fx(float);
int main()
{	
	float x1,x2,x3;
	int n;
	printf("Enter two numbers nearest to root:");
	scanf("%f%f",&x1,&x2);
	if( (fx(x1)<0 && fx(x2)>0) || (fx(x1)>0 && fx(x2)<0) )
	{

		printf("Enter number of iteration:->");
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			printf("\n\tITERATION:%d\n",i);
			x3=(x1*fx(x2)-x2*fx(x1))/(fx(x2)-fx(x1));
			printf("\nValue of root is:%0.5f\n",x3);
			if(fx(x3)>0)
				x2=x3;
			else
				x1=x3;
			
			printf("\n\nx1=%f and x2=%f \n\n",x1,x2);
		}
		
		printf("FINAL VALUE OF ROOT IS:->%0.4f\n",x3);
	}
	else
		printf("YOU HAVE ENTERED WRONG CHOICE");
		
	return 0;
		
	
}

float fx(float p)
{
	return ((p*p*p)-p*p-2 );
}
	

