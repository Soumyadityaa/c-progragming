#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5];
	int i,j,temp;

	printf("selection sort  \n");
	
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
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				
				a[i]=a[j];
				a[j]=temp;
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
