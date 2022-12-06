#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[3][3],i,j,s;
	printf("\t addition of row \n");
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
		s=0;
		for(j=0;j<=2;j++)
		{
			s=s+a[i][j];
			printf("%d\t",a[i][j]);
			
		}
		printf(" = %d\n",s);
	}
	getch();
}
