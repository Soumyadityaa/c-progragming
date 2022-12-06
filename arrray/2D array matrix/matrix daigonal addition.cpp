#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\t diagonal addition \n");
	int a[3][3],i,j,b=0,c=0;
	printf("enter the values \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter in (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("\noriginal matrix : \n");
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
			b=b+a[i][i];
	}
	printf("\n left diagonal : %d",b);
	for(i=0,j=2;i<=2;i++,j--)
	{
		c=c+a[i][j];
	}
	printf("\n right diagonal : %d",c);
	getch();
}	
