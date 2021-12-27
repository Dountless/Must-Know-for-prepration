#include<stdio.h>
float fx(float);
int main()
{	
	float x0,x1,x2;
	int n;
	printf("Enter two numbers nearest to root:");
	scanf("%f%f",&x0,&x1);
	if( (fx(x0)<0 && fx(x1)>0) || ( fx(x0)>0 && fx(x1)<0  )  )
	{

		printf("Enter number of iteration:->");
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			printf("\n\tITERATION:%d\n",i);
			x2=(x1-( (x1-x0)/( fx(x1)-fx(x0) ))*fx(x1));
			printf("\nValue of root is:%0.5f\n",x2);
			
			x0=x1;
			x1=x2;
			
			
			printf("\n\nx1=%f and x0=%f \n\n",x1,x0);
		}
		
	
		printf("FINAL VALUE OF ROOT IS:->%0.4f\n",x2);
	
	}
	else
		printf("You have entered wrong choice");
	
	return 0;
		
	
}

float fx(float p)
{
	return ((p*p*p)-2*p-5 );
}
	

