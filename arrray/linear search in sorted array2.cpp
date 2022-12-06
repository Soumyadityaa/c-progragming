#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,m,f=0,low,up,mid ;
	low=0;
	up=9;

	printf("only sorted array is valid ...\n");
	
	for(i=0;i<=9;i++)
	{
        printf("enter the no. : ");
		scanf("%d",&a[i]);
	}
	printf("enter the is searched : ");
	scanf("%d",&m);
	for(mid=(low+up)/2;low<=up;mid=(low+up)/2)
	{
		if(m==a[mid])
		{
			f=1;
			printf("no. found in the position %dth ... :)",mid);
			break;
		}
		
		if(m>a[mid])
		{
			low=mid+1;
		}
		
		if(m<a[mid])
		{
			low=mid-1;
			
		}
	}
	if(f==0)
	{
		printf("no. is not found .... :(");
		
	}
	
	
	getch();
}
