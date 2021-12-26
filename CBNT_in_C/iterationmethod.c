#include<stdio.h>
float fx(float);
float gx(float);
int main()
{	
	float x0,x1,x2;
	int n;
	printf("Enter two number nearest to root\n");
	scanf("%f%f",&x0,&x1);
	if( (fx(x0)<0 && fx(x1)>0 ) || ( fx(x0)>0 && fx(x1)<0 ) )
	{
		printf("Enter number of iteration:->");
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
		{
			printf("\n\tITERATION:%d\n",i);
			x2=gx(x0);
			printf("\nValue of root is:%0.5f\n",x2);
			x0=x2;
		}
		
		printf("FINAL VALUE OF ROOT IS:->%0.4f\n",x2);
	}
	else
		printf("You have enter wrong choice");
		
	return 0;
		
	
}

float fx(float p)
{
     return ((p*p*p)+4*p-9 );
}
float gx(float q)
{
    return ( 9/( (q*q)+4) );
}
	

