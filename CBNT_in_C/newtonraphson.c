#include<stdio.h>
float fx(float);
float drive_fx(float);
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
			x2=(x0-(fx(x0)/drive_fx(x0)) );
			printf("\nValue of root is:%0.5f\n",x2);
			printf("\n\nx0=%f and x1=%f \n\n",x0,x2);
			x0=x2;
		}
		
		printf("FINAL VALUE OF ROOT IS:->%0.4f\n",x2);
	}
	else
		printf("you have entered wrong choice");
			
	return 0;
			
		
}

float fx(float p)
{
	//return ((p*p*p*p)-p-10 );
	return ( (p*p)-(5*p)+2);
}
float drive_fx(float q)
{
    //return ((4*q*q*q)-1); 
     return ((2*q)-5 );
}
	

