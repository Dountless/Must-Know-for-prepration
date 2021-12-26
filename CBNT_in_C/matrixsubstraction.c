

#include<stdio.h>
int main()
{
	int i,j,m,n,p,q;
	
	printf("Enter number of row(m) for first matrix:->");
	scanf("%d",&m);
	printf("Enter number of column(n) for first matrix:->");
	scanf("%d",&n);
 
	printf("Enter number of row(p) for second matrix:->");
        scanf("%d",&p);
        printf("Enter number of column(q) for second matrix:->");
        scanf("%d",&q);
	
	if(m*n != p*q)
		printf("\nMatrix dimension is not equal for addition..\n");
	else
	{	
		int a[m][n],b[p][q],c[m][n];

		printf("Enter %d  element in first array..\n",m*n);
	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				scanf("%d",&a[i][j]);
		}
		printf("Enter %d  element in second array..\n",p*q);
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
				scanf("%d",&b[i][j]);
		}
	
		printf("Matrix Substraction  is...\n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

	
