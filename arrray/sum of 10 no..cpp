#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a[10],i,s;
	s=0;
	for(i=0;i<=9;i++)
	{
		printf("enter the no. : ");
		scanf("%d",&a[i]);
		s=s+a[i];
		
	}
	printf("answer = %d ",s);
	getch();
}
