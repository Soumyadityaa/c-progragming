#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[10],i,sum;
	sum=0;
	for(i=0;i<=9;i++)
	{
		printf("enter the no. : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	printf("answer = %d ",sum);
	getch();
}
