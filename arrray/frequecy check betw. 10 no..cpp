#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,m,c=0;
	
	for(i=0;i<=9;i++)
	{
        printf("enter the no. : ");
		scanf("%d",&a[i]);
	}
	printf("enter the no. which as count : ");
	scanf("%d",&m);

for(i=0;i<=9;i++)
{
	if(a[i]==m)
	{
		c=c+1;
	}
}
	if(c==0)
	{
		printf("no. is not found :");
		
	}
	else
	{
		printf("frequency of is %d : ",c);
		
	}
	getch();
}
