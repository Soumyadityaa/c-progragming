#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("\t matrix multiplication \n");
	printf("enter the values of 1st matrix \n");
	
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter in (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n1st matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	
	printf("enter the values of 2nd matrix \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter in (%d,%d) : ",i,j);
			scanf("%d",&b[i][j]);
			
		}
	}
	printf("\n 2nd matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	
	
	for(k=0;k<=2;k++)
	{
		for(i=0;i<=2;i++)
		{
	      c[k][i]=0;
	      for(j=0;j<=2;j++)
	      {
	      	c[k][i]=c[k][i]+(a[k][j]*b[j][i]);
		  }
		}
	}
		printf("\n multiplied matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",c[i][j]);
			
		}
		printf("\n");
	}
	
	getch();
}
