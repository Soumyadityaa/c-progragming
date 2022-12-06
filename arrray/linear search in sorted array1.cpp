#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,m,f=0;
	printf("only sorted array is valid ...\n");
	
	for(i=0;i<=9;i++)
	{
        printf("enter the no. : ");
		scanf("%d",&a[i]);
	}
	printf("enter the is searched : ");
	scanf("%d",&m);
	if(m<a[0]||m>a[9])
	{
		printf("out of range ");
	}
	
	else
   {
	
	for(i=0;i<=9;i++)
	{
	    if(a[i]==m)
	    {
	    printf("no. is found in position %dth... :)",i=i+1);
	    f=1;
	    break;
		}
		
	}
	if(f==0)
	{
		printf("no. is not found ... :(");
	}
  }

	getch();
}
