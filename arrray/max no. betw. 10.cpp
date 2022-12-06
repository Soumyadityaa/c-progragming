#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,m;

	
		printf("enter the no. : ");
		scanf("%d",&a[0]);
		m=a[0];
	for(i=0;i<=9;i++)
	{
		printf("enter the no. : ");
		scanf("%d",&a[i]);
	    if(a[i]>m)
	    {
	    	m=a[i];
		}
		
	}
	printf("greater no. is %d ",m);

	getch();
}
