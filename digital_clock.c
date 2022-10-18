#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
int main()
{
   int h=0,m=0,s=0;
   system("color b");
   printf("enter the recent time in HH:MM:SS :\n");
   scanf("%d%d%d",&h,&m,&s);
   start:
   for ( h;h<24;h++)
   {
       for ( m;m<60; m++)
       {
        for ( s;s<60; s++)
        {
           system("cls");
           printf("\n\n             TIME");
           system("color 2");
           printf("\n\n           %d:%d:%d",h,m,s);
           if(h<12)
           {
               printf(" AM      ");

           }
           else
           {
               printf(" PM      ");
           }
          sleep(1);
           
        }
        s=0;   
       }
      m=0; 
   }
   h=0;
   goto start;

   getch();
    
   
}
