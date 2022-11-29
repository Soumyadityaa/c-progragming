#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<string.h>
#include<process.h>

int main()
{
     char input[120];
	 while(1)
	 {
	 	system("cls");
	 	system("color 10");

	 	system("mode BW40");
        printf("\n\n\t\t SOURI \n\n : ");
	 	gets(input);
	 	if(strcmp(input,"hi")==0)
	 	{
	 		printf("\n\thello my boss ");
	 		getch();
		}
		else if(strcmp(input,"what can you do")==0)
		{
			printf("\n\tanything my boss \n\t but now i am underconstruction .... :(");
			getch();
		}
		else if(strcmp(input,"hello")==0)
		{
			printf("\n\tgive me any task ....");
			getch();
		}
	 	else if(strcmp(input,"who are you")==0)
		{
			printf("\n\ti am robot .. .. ..");
			getch();
		}
		else if(strcmp(input,"time")==0)
		{


            int h=0,m=0,s=0;
             system("color b");
             printf("enter the recent time in HH:MM:SS :\n");
             scanf("%d%d%d",&h,&m,&s);

             while(kbhit()==0)
             {

              start :
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
                     if(kbhit()!=0)
                     {
                       break;
                     }

                   }
                   s=0;
                }
                 m=0;
              }
               h=0;
               goto start;


            getch();

         }

        else if(strcmp(input,"open calculator")==0)
	 	{

	 		 printf("\t\tCALCULATOR");
             int a,b,c,ch,i;


              printf("\n\t\t1.addition");
              printf("\n\t\t2.substraction");
              printf("\n\t\t3.multiplication");
              printf("\n\t\t4.division");
              printf("\n\t\t5.table\n\t\t6.factorial\n");
              scanf("%d",&ch);

              switch (ch)
             {
               case 1:
               printf("\nenter 1st no.:-");
               scanf("%d",&a);
               printf("enter 2nd no.:-");
               scanf("%d",&b);
               c=a+b;
               printf("\n\t\tthe result:%d",c);
               break;

               case 2:
               printf("\nenter 1st no.:-");
               scanf("%d",&a);
               printf("enter 2nd no.:-");
               scanf("%d",&b);
               c=a-b;
               printf("\n\t\tthe result:%d",c);
               break;

               case 3:
               printf("\nenter 1st no.:-");
               scanf("%d",&a);
               printf("enter 2nd no.:-");
               scanf("%d",&b);
               c=a*b;
               printf("\n\t\tthe result:%d",c);
               break;

               case 4:
               printf("\nenter 1st no.:-");
               scanf("%d",&a);
               printf("enter 2nd no.:-");
               scanf("%d",&b);
               if (b!=0)
               {
                c=a/b;
                printf("\n\t\tthe result:%d",c);
               }
               else
               {
                 printf("infinity");
                 getch();
                 exit(0);
               }
               break;

               case 5:
               printf("\nenter no.:-");
               scanf("%d",&a);
               for(i=1;i<=10;i++)
               {
    	         printf("\n%d x %d = %d",a,i,(a*i));
	           }
               break;

               case 6:
                printf("enter the no. :-");
                scanf("%d",&a);
                c=1;
                for(i=1;i<=a;i++)
                {
                    c=c*i;
                }
                printf("answer is %d",c);
                break;

                default:
                printf("\nInvalid Choice");
                break;

         }
         getch();
		}

         else if(strcmp(input,"play music")==0)
		{
		   int ch,i;
		   printf("\n\t1.astronomia \n\t2.Sargama");
           scanf("%d",&ch);
		   switch(ch)
		{

		   case 1:

	       system("color 10");
           Beep(659,175);
	       printf("\n\n\n\n\n\n               Coffin dance");

          Beep(987,175);
          Beep(880,175);
          Beep(830,175);
          for(i=0;i<3;i++)
          {
          	Beep(740,250);
    	    Beep(740,200);
          	Beep(1109,150);
         	Beep(987,250);
        	Beep(880,250);
        	Beep(830,250);
        	Beep(830,200);
            Beep(830,200);

        	Beep(987,250);
         	Beep(880,150);
        	Beep(830,200);
        	Beep(740,250);
        	Beep(1760,175);
    	    Beep(1661,175);
     	    Beep(1760,175);
            Beep(1661,175);

         	Beep(740,250);
    	    Beep(1760,175);
    	    Beep(1661,175);
    	    Beep(1760,175);

    	    Beep(1661,175);
    	    Beep(1760,175);

	       }


	         Beep(880,200);
	         Beep(880,200);
	         Beep(880,200);
	          Beep(880,200);

            Beep(1109,200);
	        Beep(1109,200);
	        Beep(1109,200);
	        Beep(1109,200);

	        Beep(987,200);
            Beep(987,200);
	        Beep(987,200);
	        Beep(987,200);

	        Beep(1760,200);
            Beep(1760,200);
            Beep(1760,200);
            Beep(1760,200);

            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);
            Beep(1480,200);

            for(i=0;i<2;i++)
	     {
	          Beep(740,250);
             	Beep(740,200);
             	Beep(1109,150);
            	Beep(987,250);
             	Beep(880,250);
             	Beep(830,250);
             	Beep(830,200);
             	Beep(830,200);

                	Beep(987,250);
                 	Beep(880,150);
                 	Beep(830,200);
                 	Beep(740,250);
            	Beep(1760,175);
    	        Beep(1661,175);
    	        Beep(1760,175);
    	        Beep(1661,175);

    	            Beep(740,250);
    	            Beep(1760,175);
                	Beep(1661,175);
    	            Beep(1760,175);

    	        Beep(1661,175);
    	        Beep(1760,175);
	     }
	     break;

           case 2:
              system("color a");
    printf("\n\n\t\t\tSaReGaMaPa");
	for(i=0;i<=1;i++)
	{

	Beep(400,300);
    Beep(500,300);
    Beep(600,300);
    Beep(700,300);
    Beep(800,300);
    Beep(900,300);
    Beep(1000,300);
    Beep(1100,300);

    Beep(1100,300);
	Beep(1000,300);
	Beep(900,300);
	Beep(800,300);
	Beep(700,300);
	Beep(600,300);
	Beep(500,300);
	Beep(400,300);

	Beep(400,300);
	Beep(500,300);
	Beep(600,300);

	Beep(500,300);
	Beep(600,300);
	Beep(700,300);

	Beep(600,300);
	Beep(700,300);
	Beep(800,300);

	Beep(700,300);
	Beep(800,300);
	Beep(900,300);

	Beep(800,300);
	Beep(900,300);
	Beep(1000,300);

	Beep(900,300);
	Beep(1000,300);
	Beep(1100,300);

	Beep(1100,300);
	Beep(1000,300);
	Beep(900,300);

    Beep(1000,300);
    Beep(900,300);
    Beep(800,300);

    Beep(900,300);
    Beep(800,300);
    Beep(700,300);

    Beep(800,300);
    Beep(700,300);
    Beep(600,300);

    Beep(700,300);
    Beep(600,300);
    Beep(500,300);

    Beep(600,300);
    Beep(500,300);
    Beep(400,300);
}

              break;

             default:
              printf("invalid choiche");
              break;
		}

		}
		else if(strcmp(input,"exit")==0)
		{
			break;
		}
		else
		{
			printf("\n\n\t I am not understand .... :(");
			getch();
		}
	 }

}
