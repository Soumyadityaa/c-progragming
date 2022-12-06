#include<stdio.h>
#include<conio.h>
int main()
{
	int a[3][3],i,j,b[3][3];
	printf("\t matrix transpose \n");
	printf("enter the values \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter in (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\n original matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			b[i][j]=a[j][i];
			
		}
	}
	printf("\n transpose  matrix : \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",b[i][j]);
			
		}
		printf("\n");
	}
	
	getch();
}
