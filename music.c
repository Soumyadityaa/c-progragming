#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int i;
	system("color 10");
    Beep(659,175);
	printf("\n\n\n\n\n\n               Coffin dance");
	start:
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

	goto start;
	getch();
}
