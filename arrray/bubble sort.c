#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int i,j,temp;

	printf("bubble sort \n");
	
	for(i=0;i<=4;i++)
	{
        printf("enter the no. : ");
		scanf("%d",&a[i]);
	}
	printf("array before sorting \n");
	for(i=0;i<=4;i++)
	{
        printf("%d \t",a[i]);
		
	}
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=(3-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\narray after the sortning \n");
	for(i=0;i<=4;i++)
	{
		printf("%d \t",a[i]);
	}
	
	getch();
}
