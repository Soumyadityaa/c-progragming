#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[3][3],i,j,s,s2,b2=0,c=0;
	int b[3][3];
	printf("enter the values \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter in (%d,%d) : ",i,j);
			scanf("%d",&a[i][j]);
			
		}
	}
	system("cls");
	system("color 12");
    printf("\noriginal matrix : \n");
    
	for(i=0;i<=2;i++)
	{
		s2=0;
		for(j=0;j<=2;j++)
		{
			s2=s2+a[i][j];
			printf("%d\t",a[i][j]);
			
		}
		printf(" = %d\n",s2);
	}
	
	
	printf("||\t||\t||\n");
	for(i=0;i<=2;i++)
	{
		s=0;
		for(j=0;j<=2;j++)
		{
			s=s+a[j][i];
			
		}
		printf("%d\t",s);
    }
    
    
    for(i=0;i<=2;i++)
	{
		
			b2=b2+a[i][i];
	}
	printf("\n\n left diagonal : %d",b2);
	for(i=0,j=2;i<=2;i++,j--)
	{
		c=c+a[i][j];
	}
	printf("\n right diagonal : %d\n\n",c);
	
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
