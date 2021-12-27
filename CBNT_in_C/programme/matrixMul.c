

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
	
	if(n != p)
		printf("\nMatrix multiplication  is not valid .\n");
	else
	{	
		int a[m][n],b[p][q],c[m][q],sum=0;

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
	
		printf("Matrix multiplication   is...\n");
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				for(int k=0;k<p;k++)
					sum=sum+a[i][k]*b[k][j];
				c[i][j]=sum;
				sum=0;
				printf("  %d  ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

	
